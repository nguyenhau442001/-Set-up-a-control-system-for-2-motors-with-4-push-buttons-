# -Set-up-a-control-system-for-2-motors-with-4-push-buttons-
Link simulation: https://www.youtube.com/watch?v=LzpI-OVuoXc&t=2s
When pressing the NEXT button, the car moves forward, if you continue to press and hold, the car accelerates, when
If no longer press, the car stops. If you want to continue running, press again.
When the ERROR button is pressed, the car goes backwards, if you keep pressing and holding it, the car going in reverse accelerates,
When no longer pressing, the car stops. If you want to continue running, press again.
When the RIGHT button is pressed, the car will both go forward and turn right: the engine on the right runs fast
level 1, the motor on the left runs the level gradually if you keep pressing and holding, the difference
This deviation causes the vehicle to turn right. When the LEFT button is pressed, the vehicle will both move forward and turn left: the left engine runs at
1, the right motor runs the level increases if keep pressing and holding, the difference
This makes the car turn left.
Design circuit using 2 PWM of PIC16F887 microcontroller using transistor and relay,
Each PWM controls 1 motor. Relay has reversing function. PWM yes
speed change function.
*Note: sometimes the CPU is overloaded so it can't run real time.
