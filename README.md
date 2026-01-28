# Smart Air Purifier with AQI Index Monitoring

## Overview
This project is a **Smart Air Purifier with AQI Index Monitoring** developed by our team to improve indoor air quality using automation.  
The system continuously monitors air pollution using an **MQ135 gas sensor**, calculates the **Air Quality Index (AQI)**, and automatically controls an air purifier (fan) using a **relay module**.  
An **ESP32 microcontroller** acts as the core controller, and real-time AQI values are displayed on a **16x2 LCD display**.

All project materials including **source code, block diagram, project report, and real project photos** are available in this repository.

---

## Team Project
This project was completed as a **team effort**, including:
- System design  
- Hardware implementation  
- Coding and testing  
- Documentation and reporting  

---

## Features
- Real-time indoor air quality monitoring  
- AQI calculation using MQ135 gas sensor  
- Automatic purifier/fan control based on AQI threshold  
- LCD display showing AQI and purifier status  
- Energy-efficient operation  
- Modular and scalable design  

---

## Components Used
- ESP32 Development Board  
- MQ135 Gas Sensor  
- 16x2 LCD Display (I2C)  
- Relay Module  
- Air Purifier / Fan  
- Power Supply and connecting wires  

---

## Repository Contents
| File Name | Description |
|---------|-------------|
| `SmartAirPurifier_AQI.ino` | ESP32 Arduino source code |
| `SmartAirPurifier_BlockDiagram.png` | System block diagram |
| `SmartAirPurifier_Report.pdf` | Complete project report |
| `1.jpeg` – `4.jpeg` | Real project photos |
| `README.md` | Project documentation |
| `LICENSE` | MIT License |

---

## Block Diagram
The block diagram explains how the ESP32 interfaces with the MQ135 sensor, relay module, LCD display, and air purifier.

---

## How It Works
1. MQ135 sensor detects harmful gases and air pollutants.  
2. ESP32 reads sensor values and calculates AQI.  
3. AQI is displayed on the LCD.  
4. If AQI exceeds the threshold, the relay turns ON the purifier.  
5. When air quality improves, the purifier turns OFF automatically.

---

## Installation & Setup
1. Install **Arduino IDE**.  
2. Add **ESP32 board support** in Board Manager.  
3. Install `LiquidCrystal_I2C` library.  
4. Connect hardware as per block diagram.  
5. Upload `SmartAirPurifier_AQI.ino` to ESP32.  
6. Power the system and monitor AQI on LCD.

---

## Results
- The system successfully monitors air quality in real time.  
- Automatic purifier control improves indoor air quality.  
- Energy consumption is optimized through smart automation.

---

## Future Enhancements
- IoT-based remote monitoring  
- Cloud data logging  
- Mobile application support  
- PM2.5 and PM10 sensor integration  
- AI-based pollution prediction  

---

## License
This project is licensed under the **MIT License**.

---

## Author
**Vijay Prince**  
*(Team Project)*

