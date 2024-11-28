/****************************************************************************************************************************************************************************************************/
/* PID Position Controller for Wheel Rotation of Front and Rear Wheels */
// void holdwheel(double degrees_F, double degrees_R) {
//         long double dt = loopTimeConstant * 1e-6;

//         double EncTarget_F = degrees_F * (wheelMotorPPR) / 90; 
//         double EncTarget_R = degrees_R * (wheelMotorPPR) / 90;

//         double wheel_error_F = -(EncTarget_F - frontWheelEnc.read());
//         double wheel_error_R = -(EncTarget_R - rearWheelEnc.read());
        
//         frontWheelInput = 0.5 * (0.8 * (wheel_error_F) + 0.1 * ((wheel_error_F - prev_wheel_error_F)/dt) + 10*(integral_wheel_F)*dt);
//         rearWheelInput = 0.5 * (0.8 * (wheel_error_R) + 0.1 * ((wheel_error_R - prev_wheel_error_R)/dt) + 10*(integral_wheel_R)*dt);

//         prev_wheel_error_F = wheel_error_F;
//         prev_wheel_error_R = wheel_error_R;

//         // Integral Control is Activated at an Error within 5 degrees //
//         if (wheel_error_F < 5 * wheelMotorPPR/360) integral_wheel_F += wheel_error_F; // 5 is for degrees can change //
//         else integral_wheel_F = 0;
//         if (wheel_error_R < 5 * wheelMotorPPR/360) integral_wheel_R += wheel_error_R;
//         else integral_wheel_R = 0;

//         // Setting the Maximum Input to The Wheels //
//         // double acc = 100;
//         // if (frontWheelInput > acc)
//         //         frontWheelInput = acc;
//         // if (frontWheelInput < -acc)
//         //         frontWheelInput = -acc;
//         // if (rearWheelInput > acc)
//         //         rearWheelInput = acc;
//         // if (rearWheelInput < -acc)
//         //         rearWheelInput = -acc;
// }