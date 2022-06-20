#include <16f887.h>
#fuses nowdt, put, hs, noprotect, nolvp
#use delay(clock=4m)
#define toi    pin_b0
#define lui    pin_b1
#define phai   pin_b2
#define trai   pin_b3

unsigned int16 tocdo=0;
      
void chay_toi()
{
    if(!input(toi)) 
    {
       delay_ms(20);
       if(!input(toi))
       {
           output_high(pin_e0);
           do
           {
           if(tocdo<10)          {delay_ms(20); tocdo++;      SET_PWM1_DUTY(tocdo*100);   SET_PWM2_DUTY(tocdo*100);  }
           }
           while(!input(toi));
       }
    }
}

void chay_lui()
{
    if(!input(lui)) 
    {
       delay_ms(20);
       if(!input(lui))
       {
           output_low(pin_e0);
           do
           {
           if(tocdo<10)          {delay_ms(20); tocdo++;      SET_PWM1_DUTY(tocdo*100);   SET_PWM2_DUTY(tocdo*100);  }
           }
           while(!input(lui));
       }
    }
}


void queo_phai()
{
    if(!input(phai)) 
    {
       delay_ms(20);
       if(!input(phai))
       {   
           
           output_high(pin_e0);
           do
           {
           if(tocdo<10)          { delay_ms(20); tocdo++;      SET_PWM1_DUTY(tocdo*100);   SET_PWM2_DUTY(100);  }
           }
           while(!input(phai));
       }
    }
}

void  queo_trai()
{
    if(!input(trai)) 
    {
       delay_ms(20);
       if(!input(trai))
       {
           output_high(pin_e0);
           do
           {
           if(tocdo<10)          { delay_ms(20);tocdo++;      SET_PWM1_DUTY(100);   SET_PWM2_DUTY(tocdo*100);  }
           }
           while(!input(trai));
       }
    }
}
void main()
{ 
    set_tris_b(0x0f); set_tris_c(0x00);  set_tris_e(0x00);  output_e(0x00);
    SETUP_CCP1(CCP_PWM);
    SETUP_CCP2(CCP_PWM);
    SETUP_TIMER_2(T2_DIV_BY_16,249,1);
    SET_PWM1_DUTY(0);
    SET_PWM2_DUTY(0);   
    WHILE(TRUE)
    {     
          delay_ms(20);
          chay_toi();
          chay_lui();
          queo_phai();
          queo_trai();
          tocdo=0; SET_PWM1_DUTY(0);
          SET_PWM2_DUTY(0);   

    }              
}