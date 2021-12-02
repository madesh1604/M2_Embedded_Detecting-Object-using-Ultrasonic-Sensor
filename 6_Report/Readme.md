# Report
## Requirements
## Introduction
The main Aim of this project to help the Blind people.Using this process the opposite objects,or the humans can be easily detected.Here we used only the basic process of sensors
This is the simple and effective projects for the blind peoples . Now days the percentage of blindness can be increasing shortly . we make this mini process of the ultrasonic sensors . This is simple and low cost product which can be low maintenence product compared to the other products. This usage of this process can be deliverable into an complete products like Smart Glass ,and walking stick.
## Research
In this project we used only demo functions. Since most of the blind person use glasses and it inspires us for installing the device on
glasses. The ultrasonic sensor is installed on the glasses, but the main unit which including the
minimum system, power supply, and the main switch are placed on a box, and the blind person
can put in his/her pocket. Compare with the device from the University of Oxford, this device
is more practical and easier to use. 
## Defining our project
Ultrasonic sensor “HC-SR04” provides an output signal proportional to distance based on the echo. The sensor here generates a sound vibration in ultrasonic range upon giving a trigger, after that it waits for the sound vibration to return. Now based on the parameters, sound speed (220m/s) and time taken for the echo to reach the source, it provides output pulse proportional to distance.

## Features
*   It Has an weather assistance it will works in any weathers .
*   LCD used in this projects will give some clear informations to the users.

__Components Used__
*   Atmega328
*   HC-SR04 (Ultrasonic) sensor
*   LCD display
*   Switches
*   Power Supply

## SWOT Analysis
__STRENGTH__
*   It work like an alert system for the blind people.
*   It is   cheaper than compared to the existing system .
*   The LCD out available in this project makes the  people to detect  of the  opposite objects .
  
__WEAKNESS__
*   It gives only the information of the opposite objects only.
*   Due to we used only one ultra sonic sensor This gives only information of lesser distance.

__OPPURTUNITIES__
*   There will be no need for the dependent to go outside.
*   The updation of the projects will be we have to give some specifications like 360 degree assistance .
*   We also make this glasses for the reading purpose also *Smart Glass For the Blind* with some added specifications.
 
__THREATS__
*   The major challenges is There will be an Battery backup .If they go for some long distance then battery backups is concerned .

## 4W'S and 1'H
__WHO__
This will be useful to an the blind peoples.

__WHAT__
The main aim  of this project is to reduce the dependencies of the other people of blind peoples .

__WHEN__
This will be useful to them when they go outside and whenever they need assistance . .

__WHERE__
This will be working in every where .This also works in rainny days and winter also.

__HOW__
The sensor used in this project Ultrasonic sensor which detects the opposite objects and send this information to the microcontroller then it gives the message to the user.
## Detail Requirements 
__High Level Requirements__
| ID | Description | Status |
| -- | ----------- | ------ |
| HLR1 | UltraSonic Sensors | Used for the sensing the objects |
| HLR2 | Atmega 328p | Microcontroller used for the entire process |
| HLR3 | Source Code | Used for the Execute the system |

__Low Level Requirements__
| ID | Description | Status |
| -- | ----------- | ------ |
| LLR1 | Buzzer | Used for the output of the Microcontroller |
| LLR2 | Glass | Used  as  support for the sensor |
| LLR3 | LCD   | Used for the output calculations |

## Behavioural Diagram
![image](https://user-images.githubusercontent.com/91029826/144367461-52d7c8b8-a474-4ce7-84e4-5db6326b2d5f.png)

## Block Diagram
![image](https://user-images.githubusercontent.com/91029826/144367585-f03da840-93c5-4f1a-ab9e-454a8af077d6.png)

## Structural Diagram
![image](https://user-images.githubusercontent.com/91029826/144367667-b5f4bc61-4e0c-4d93-be49-246061a7af04.png)

## Simulation
## __OFF__
![image](https://user-images.githubusercontent.com/91029826/144368442-4565e888-4cf0-4dd4-8e62-5d31654e1dd5.png)

## __ON__
![image](https://user-images.githubusercontent.com/91029826/144380687-e883ca20-8f5c-4344-808c-cf896e4dfc2a.png)

## Test Plan
## High Level Test Plan
| ID | Description | Ex I/P | Ex O/P | Actual Output |
| -- | ----------- | ------ | ------ | ------------- |
| HLT1 | Power On | Power supply | LCD ON | PASS |
| HL2 | Sensor  | Objects In the range  | Objects detected | PASS |
| HLR3 | Output | Output of the Sensor | Distance of objects | PASS |

## Low Level Test Plan 
| ID | Description | Ex I/P | Ex O/P | Actual Output |
| -- | ----------- | ------ | ------ | ------------- |
| LLT1 | Objects Range  | 20cm   | Ojects in range | PASS |
| LLT2 | Objects Range  | 100cm  | Objects Not in range | PASS |

## Bill Of Materials

Circuit: _backup.simu

Bill of Materials:

Hd44780-3 : Hd44780   
Resistor-18 : Resistor 100 Ω
Resistor-19 : Resistor 100 Ω
SR04-2 : SR04   
atmega328-1 : atmega328   
