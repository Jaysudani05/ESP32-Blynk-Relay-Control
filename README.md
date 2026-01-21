# ESP32 Blynk Relay Control System

## 📌 Project Overview
This project demonstrates a **WiFi-based relay control system** using an **ESP32 DevKit V4**. Four relays are controlled using **push buttons** and can also be integrated with the **Blynk IoT platform** for remote operation. The system is designed for **home automation** and **IoT-based device control**.

The project is simulated and tested using **Wokwi**, allowing virtual hardware testing without physical components.

---

## 🚀 Features
- Control 4 relays using push buttons  
- ESP32-based embedded system  
- WiFi + Blynk IoT integration  
- Real-time ON/OFF control  
- Wokwi simulation support  

---

## 🧰 Components Used
- ESP32 DevKit V4  
- 4-Channel Relay Modules  
- 4 Push Buttons  
- LEDs (as loads)  
- Breadboard & Jumper Wires  
- WiFi Network  
- Blynk IoT Platform  

---

## 🔌 Circuit Diagram
circuit.png

### Relay Connections

| ESP32 GPIO | Relay | Load (LED) |
|-----------|-------|------------|
| GPIO 25 | Relay 1 | Red LED |
| GPIO 26 | Relay 2 | Green LED |
| GPIO 27 | Relay 3 | Blue LED |
| GPIO 14 | Relay 4 | Yellow LED |

### Button Connections

| ESP32 GPIO | Button Color |
|-----------|--------------|
| GPIO 32 | Red Button |
| GPIO 33 | Green Button |
| GPIO 34 | Blue Button |
| GPIO 35 | Yellow Button |

---

## ⚙️ Working Explanation
1. The **ESP32** is powered and connected to the circuit.  
2. Each **push button** is connected to a specific GPIO pin of the ESP32.  
3. When a button is pressed:  
   - ESP32 detects the input signal.  
   - The corresponding GPIO output pin changes state.  
   - The connected relay is activated (ON/OFF).  
4. Each relay controls a load (LED in simulation).  
5. Using the **Blynk app**, the same relays can be controlled remotely over WiFi.  
6. This enables both **manual** and **remote IoT-based control** of devices.  

---

## 📚 Libraries Used
- WiFi  
- ezButton  
- BlynkESP32_BT_WF  

---

## 🖥️ Wokwi Simulation
Test this project online:

🔗 https://wokwi.com/projects/453737781482057729  

---

## 📂 Project Files
- `sketch.ino` – ESP32 source code  
- `diagram.json` – Circuit connections (Wokwi)  
- `libraries.txt` – Required libraries  
- `wokwi-project.txt` – Project info  

---

## 📸 Screenshots
> *(Add working screenshots here later)*  

---

## 🎯 Applications
- Home Automation  
- Smart Switch System  
- IoT Device Control  
- Embedded Systems Project  

---

## 👨‍💻 Author
**Jay Sudani**  
B.E. Student | Embedded Systems Enthusiast  
Skills: C, C++, Python, Embedded Systems  

---

## 📜 License
MIT License

Copyright (c) 2026 Jay

Permission is hereby granted, free of charge, to any person obtaining a copy  
of this software and associated documentation files (the "Software"), to deal  
in the Software without restriction, including without limitation the rights  
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell  
copies of the Software, subject to the following conditions:

The above copyright notice and this permission notice shall be included in  
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.

---

⭐ If you like this project, feel free to star the repository!

