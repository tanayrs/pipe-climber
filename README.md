# pipe-climber
 ME3001 Engineering Mechanics Mini Project

## Background
This repository is a part of the ME3001 Engineering Mechanics Course Mini-Project, with the task to develop a prototype of a pipe climbing robot on the inside of the pipe. This particular design, does not use wheels, rather two sets of grippers realised with a set of rack and pinnions, as well as a linear actuator using a lead screw. The primary scope of this project is to develop a pipe-climbing mechanism, through which pipe surveillance could be potentially done.

## Components
- 150mm Lead Screw Rod with Nut – 2
- Cytron MDD3A Motor Driver – 2
- Cytron SPG30e Motor – 2
- Rhino RMCS-5031 Motor – 1
- Custom 32mm 1.7 Module Spur Gear – 2
- Custom 16 Teeth 1.7 Module Rack – 4
- Arduino Uno Micro-Controller - 1
- Aluminium Flex Coupling – 1
- Lemon 1800mAh LiPo Battery – 1
- Custom Housing using MDF

## Connections
 - Arduino D3  - Motor Driver PWM 1A Input: Pinnion Bottom
 - Arduino D9  - Motor Driver PWM 1B Input: Pinnion Bottom
 - Arduino D10 - Motor Driver PWM 2A Input: Lead Screw
 - Arduino D11 - Motor Driver PWM 2B Input: Lead Screw
 - Arduino GND - Motor Driver GND
 - Arduino D5  - Motor Driver PWM 1A Input: Pinnion Top
 - Arduino D6  - Motor Driver PWM 1B Input: Pinnion Top
