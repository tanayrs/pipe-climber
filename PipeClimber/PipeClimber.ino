/*******************************************************************************
 * Pipe-Climbing Caterpillar Robot
 * ME3001: Engineering Mechanics
 * By: Tanay Srinivasa U20220086
 ********************************************************************************
 * DESCRIPTION:
 *
 * This code is meant for a internal pipe climbing robot, using a caterpillar like
 * mechanism
 * 
 * 
 * CONNECTIONS:
 * 
 * Arduino D3  - Motor Driver PWM 1A Input: Pinnion Bottom
 * Arduino D9  - Motor Driver PWM 1B Input: Pinnion Bottom
 * Arduino D10 - Motor Driver PWM 2A Input: Lead Screw
 * Arduino D11 - Motor Driver PWM 2B Input: Lead Screw
 * Arduino GND - Motor Driver GND
 * Arduino D5  - Motor Driver PWM 1A Input: Pinnion Top
 * Arduino D6  - Motor Driver PWM 1B Input: Pinnion Top
 *******************************************************************************/

#include <CytronMotorDriver.h>


// Configure the motor driver.
CytronMD rack_bottom(PWM_PWM, 3, 9);    // PWM 1A = Pin 3, PWM 1B = Pin 9.
CytronMD lead_screw(PWM_PWM, 10, 11);  // PWM 2A = Pin 10, PWM 2B = Pin 11.
CytronMD rack_top(PWM_PWM, 5, 6);    // PWM 1A = Pin 5, PWM 1B = Pin 6.


// The setup routine runs once when you press reset.
void setup() {
        Serial.begin(9600);
        Serial.println("Starting Serial Print....");
        extend_bottom();
}

// The loop routine runs over and over again forever.
void loop() {
        extend_top();
        retract_bottom();
        // move_top();
        extend_bottom();
        retract_top();
        // move_bottom();
        delay(1000);
}
