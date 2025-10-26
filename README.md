# Smart-Motion-Control
Welcome to the , Smart Motion Control an innovative Arduino-based automation project that intelligently manages electrical loads through motion detection. Designed to be compact, efficient, and practical, this system combines an Arduino Nano, a pir motion sensor, and a single-channel relay module to create a smart, responsive power control solution.


# Project Overview

This project automates the control of electrical devices by detecting human movement or presence. When motion is detected, the system instantly activates a connected load such as a lamp (for my case I am using 230V Tube Light), fan, or any other appliance. After a configurable duration of inactivity, it automatically turns the load off—saving energy, reducing manual effort, and improving overall efficiency.

At the heart of this system lies the Arduino Nano, which processes sensor data and triggers the relay with precise timing. The proximity sensor constantly monitors the environment for motion, while the relay module safely switches high-voltage loads without direct human contact. The circuit is simple, cost-effective, and ideal for beginners looking to explore embedded systems and home automation concepts.

![Product Image](https://github.com/Arpan1906/Smart-Motion-Control/blob/main/Illustrations/1.jpg?raw=true)

# Features

- Motion-Based Operation: Automates load control using real-time motion detection.

- Energy Efficient: Turns off unused appliances, significantly reducing power waste.

- Compact & Modular: Built with minimal components for easy assembly and modification.

- Scalable Design: Can be upgraded with wireless capabilities or additional sensors.

- User Configurable: Delay times and detection ranges can be fine-tuned with simple code changes.

# Applications

Perfect for smart homes, offices, corridors, washrooms, or any area that benefits from automated lighting and power management. It offers an elegant introduction to concepts like sensor interfacing, relay control, and microcontroller programming.

# Components Used
- Arduino Nano
- Single Channel Relay Module (5v)
- PIR Motion Sensor
- 3 pin SPDT toggle switch (5Amps)
- Power Supply (5v - 2Amps)
- AC Load (Tube, Fan , Bulb)
- Wires (General purpose wiring and single strand wire)

# Working
Once installed the PIR motion sensor continuously detects for any movement that triggers the load. If there is any movement detected then it immediatedly triggers the load     and when the movement is lost it turns off the load.
The delay between the movement lost and turning off the load can be adjusted via the sensor potentiometer along with the sensitivity adjustment.

We use normal on-off toggle switch to make on and off a load but here we did the modification instead of using the normal switch. So, we can say that the system is   performing as a switch instead of normal switch. Now, the system can be installed along with the existing system or replacing the exixting system.
To install it with existing sytem you may require a on-off switch or bed switch or other suitable switch.
   
# Additional Feature
You may find this feature usefull or waste of money. I found it useful.
I have installed an additional toggle switch to generate two state namely STANDBY MODE & AUTO MODE. When the state is in the AUTO mode the system follows it normal operation as described in #Working but when the state is in the STANDBY mode the load or the lamp stays in ON position and will be in the position untill and unless we cut the supply or load shedding occurs or make it AUTO mode.
Refer to the #Video Presentation for clear understanding.

![Switch](https://github.com/Arpan1906/Smart-Motion-Control/blob/main/Illustrations/4.jpg?raw=true)

# Video Presentation
Link - [YouTube](https://youtu.be/U4pLusIxolA?si=uFR4TJKkqkDfAYvf)
# Getting Started
This repository includes circuit diagrams, Arduino code, and setup instructions to help you build and customize your own motion-activated electrical load control system in just a few steps.

Bring intelligence and efficiency to everyday electrical systems—with this compact yet powerful automation project.
