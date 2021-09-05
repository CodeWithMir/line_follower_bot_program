## Line Follower Robot
Arduino Based Line Follower Robot using PID Algorithm

## Demo

![demo 1](https://github.com/CodeWithMir/important-image-for-project/blob/main/giphy%20(1).gif)
![demo ](https://github.com/CodeWithMir/important-image-for-project/blob/main/WhatsApp%20Image%202021-09-02%20at%201.42.21%20PM.jpeg)
![demo ](https://github.com/CodeWithMir/important-image-for-project/blob/main/WhatsApp%20Image%202021-09-02%20at%201.42.21%20PM%20(1).jpeg)



## All the electronic parts necessary to build a line-follower robot:
    BO Motor x2
    BO Wheel x2
    Arduino
    L293D motor driver
    IR Sensor x2
    Jumper Wires
    9v Battery x2
    Robot Chassis
    1 USB cable for Arduino
## Installation     
    Install Arduino IDE
To download [click here](https://www.microsoft.com/en-in/p/arduino-ide/9nblggh4rsd8?ocid=badge&rtc=1&activetab=pivot:overviewtab)

## About Project
**Understanding the circuit and its components:**

*Component 1: The IR Proximity Sensors*

The concept of working of a line follower robot is based on the phenomenon of light. We know that white colour reflects almost all of the light that falls on it, whereas black colour absorbs most of the light. In case of a line follower robot we use IR transmitters and receivers also called photodiodes. They are used for sending and receiving light. IR transmits infrared lights. When infrared rays falls on white surface, it’s reflected back and catched by photodiodes which generates some voltage changes. When IR light falls on a black surface, light is absorb by the black surface and no rays are reflected back, thus photo diode does not receive any light or rays.

Here in this Arduino line follower robot when sensor senses white surface then Arduino gets 1, ie, HIGH as input and when senses black line arduino gets 0, ie, LOW as input.


![The IR Proximity Sensors](https://github.com/CodeWithMir/important-image-for-project/blob/main/image_26mwyVpmvZ.jpeg)

Circuit connections for IR Proximity Sensors:

    The IR sensor is a 3 three wired sensor, in which the brown and the black wire are used to connect the sensor to the power supply, whereas, the red wire is connected to the load, or Arduino, in our circuit.

    The load wires of the IR sensors are connected to pin 8, 9 and 10 as shown in the schematic.
*Component 2 :L293D motor driver*

![L293D](https://github.com/CodeWithMir/important-image-for-project/blob/main/L293D-Motor-Driver-Module-for-Arduino-L293D-Expansion-Board.jpg)

L293D ic Pin Configuration

![L293D ic ](https://github.com/CodeWithMir/important-image-for-project/blob/main/L293D-Pinout.png)

|Pin Number|Pin Name|Description|
|:---------|:-------|:----------|
|1|Enable 1,2|This pin enables the input pin Input 1(2) and Input 2(7)|
|2|Input 1|Directly controls the Output 1 pin. Controlled by digital circuits|
|3|Output 1|Connected to one end of  Motor 1|
|4|Ground|Ground pins are connected to ground of circuit (0V)|
|5|Ground|Ground pins are connected to ground of circuit (0V)|
|6|Output 2|Connected to another end of  Motor 1|
|7|Input 2|Directly controls the Output 2 pin. Controlled by digital circuits|
|8|Vcc2 (Vs)|Connected to Voltage pin for running motors (4.5V to 36V)|
|9|Enable 3,4|This pin enables the input pin Input 3(10) and Input 4(15)|
|10|Input 3|Directly controls the Output 3 pin. Controlled by digital circuits|
|11|Output 3|Connected to one end of Motor 2|
|12|Ground|Ground pins are connected to ground of circuit (0V)|
|13|Ground|Ground pins are connected to ground of circuit (0V)|
|14|Output 4|Connected to another end of Motor 2|
|15|Input 4|Directly controls the Output 4 pin. Controlled by digital circuits|
|16|Vcc2 (Vss)|Connected to +5V to enable IC function|

**Features**

    Can be used to run Two DC motors with the same IC.
    Speed and Direction control is possible
    Motor voltage Vcc2 (Vs): 4.5V to 36V
    Maximum Peak motor current: 1.2A
    Maximum Continuous Motor Current: 600mA
    Supply Voltage to Vcc1(vss): 4.5V to 7V
    Transition time: 300ns (at 5Vand 24V)
    Automatic Thermal shutdown is available
    Available in 16-pin DIP, TSSOP, SOIC packages

## Procedure:
Step 1: Connect the circuit as shown in the schematic.

Step 2: Use the Arduino IDE to write your own code.

Step 3: Upload your code to the Arduino and connect it to the batteries or you can even use a power bank to run the Arduino.

Step 4: Test it on a black path.

## SCHEMATICS

**Circuit**

![L293D ic ](https://github.com/CodeWithMir/important-image-for-project/blob/main/screenshot_2020-08-23_at_11_56_42_am_N63GIEkksa.png)


## Now Run the Code Given:

Download the bot_program.ino file from repositoary or [click here](https://github.com/CodeWithMir/line_follower_bot_program/blob/main/bot_program.ino)

    Run the code the project is ready 

 **For any problem during run the program contact me or [click here](https://www.linkedin.com/in/mir-jasimuddin-4a35131a0/)**

##            Thank You 

