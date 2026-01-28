# Smart Air Purifier with AQI Index Monitoring

## Overview
This project is a Smart Air Purifier system that continuously monitors indoor air quality using an MQ135 gas sensor and automatically controls an air purifier (fan) based on the Air Quality Index (AQI). The system is powered by an ESP32 microcontroller and displays real-time AQI and purifier status on a 16x2 LCD screen.

---

## Features
- Real-time air quality monitoring using MQ135 sensor  
- Automatic control of air purifier/fan via relay based on AQI thresholds  
- AQI display on 16x2 I2C LCD for easy user interface  
- ESP32 microcontroller with Wi-Fi and Bluetooth capabilities for future IoT integration  
- Energy-efficient operation by activating purifier only when needed  

---

## Components Required
- ESP32 Development Board  
- MQ135 Gas Sensor  
- 16x2 LCD Display with I2C module  
- Relay Module  
- Air Purifier or Fan (controlled by relay)  
- Power Supply and connecting wires  

---

## Circuit Diagram / Block Diagram
![Block Diagram](SmartAirPurifier_BlockDiagram.png)  
*The block diagram illustrates the connection between ESP32, MQ135 sensor, relay module, air purifier/fan, and LCD.*

---

## How to Use

1. Connect all components as shown in the block diagram.  
2. Upload the Arduino sketch `SmartAirPurifier_AQI.ino` to the ESP32 board using Arduino IDE.  
3. Power on the system; the LCD will display the current AQI value and purifier status.  
4. When air quality deteriorates beyond the defined threshold (AQI > 150), the relay activates the purifier automatically.  
5. Monitor the serial console for debugging or AQI readings.

---

## Installation & Setup

1. Download and install the [Arduino IDE](https://www.arduino.cc/en/software).  
2. Install the ESP32 board package via Arduino Board Manager.  
3. Install the `LiquidCrystal_I2C` library via Arduino Library Manager.  
4. Connect your ESP32 and upload the provided code `SmartAirPurifier_AQI.ino`.  
5. Connect the hardware components as per the circuit/block diagram.

---

## Future Enhancements

- IoT integration for remote monitoring and control via mobile app or web dashboard  
- Cloud data logging and visualization  
- Integration of particulate matter sensors (PM2.5, PM10) for comprehensive air quality analysis  
- AI-based pollution prediction and smart alerts  

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## References

- Kumar, R., Singh, P., and Sharma, A. (2020) ‘Smart Air Purifier with Air Quality Monitoring System’, International Journal of Engineering Research & Technology.  
- Sharma, R., and Singh, S. (2021) ‘Development of an IoT Based Air Pollution Monitoring and Purifier System’, International Journal of Advanced Research in Computer and Communication Engineering.  
- Chen, L., Zhang, X., and Liu, Y. (2019) ‘Design of an Intelligent Air Purifier Based on PM2.5 and AQI Monitoring’, IEEE Access.  

---

## Author

Vijay Prince  
*Contact info or links (optional)*

---

