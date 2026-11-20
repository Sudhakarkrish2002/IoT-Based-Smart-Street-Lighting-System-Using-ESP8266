# IoT-Based Smart Street Lighting System Using ESP8266

An IoT-based smart street lighting system that automatically controls LED brightness using LDR and PIR sensors, with real-time monitoring through the KiwisIoT platform.

## 📌 Project Overview

The IoT-Based Smart Street Lighting System is an intelligent lighting solution designed to reduce unnecessary electricity consumption through automation.

The system uses a NodeMCU ESP8266, an LDR sensor, a PIR motion sensor, and an LED to automatically control lighting based on surrounding light intensity and pedestrian movement.

During daytime, the LED remains OFF. During nighttime, the LED operates at dim brightness. When movement is detected, the LED brightness increases automatically. When movement is no longer detected, the LED returns to dim brightness.

The system also connects to the KiwisIoT platform through Wi-Fi, enabling remote monitoring of sensor readings and lighting status.

## ✨ Features

- Automatic Day and Night Detection.
- Ambient Light Monitoring Using LDR.
- Pedestrian Movement Detection Using PIR.
- Automatic LED Brightness Adjustment.
- PWM-Based LED Control.
- Wi-Fi Connectivity Using ESP8266.
- Real-Time IoT Monitoring Through KiwisIoT.
- Energy-Efficient Lighting Automation.

## 🛠️ Hardware Components

| Component | Quantity | Purpose |
|---|---:|---|
| NodeMCU ESP8266 | 1 | Main controller and Wi-Fi connectivity |
| LDR Sensor Module | 1 | Detects ambient light intensity |
| PIR Motion Sensor | 1 | Detects pedestrian movement |
| LED | 1 | Represents the street light |
| 220Ω Resistor | 1 | Limits LED current |
| Breadboard | 1 | Circuit assembly |
| Jumper Wires | As required | Hardware connections |
| USB Cable | 1 | Programming and power supply |

## 💻 Software Requirements

- Arduino IDE
- ESP8266 Board Package
- ESP8266WiFi Library
- KiwisIoT Library
- Embedded C/C++ Programming

## 🔌 Circuit Connections

### 1. LDR Sensor to ESP8266

| LDR Sensor Pin | ESP8266 Pin |
|---|---|
| VCC | 3.3V |
| GND | GND |
| AO | A0 |

### 2. PIR Motion Sensor to ESP8266

| PIR Sensor Pin | ESP8266 Pin |
|---|---|
| VCC | VIN / 5V (as supported by module) |
| GND | GND |
| OUT | D5 (GPIO14) |

### 3. LED to ESP8266

| LED Pin | ESP8266 Connection |
|---|---|
| Anode (+) | D6 (GPIO12) through 220Ω resistor |
| Cathode (-) | GND |

**Note:** Verify the voltage requirements of your PIR module and ensure its output signal does not exceed the ESP8266 GPIO input limit of 3.3V. The direct LED connection is intended for a small indicator LED, not a high-power street light.

## ⚙️ Working Principle

The system operates using ambient light detection and motion detection.

1. The LDR sensor continuously measures surrounding light intensity.
2. The ESP8266 processes the sensor readings to identify daytime and nighttime conditions.
3. During daytime, the LED remains OFF.
4. During nighttime, the LED operates at dim brightness.
5. When the PIR sensor detects movement, the ESP8266 increases LED brightness.
6. When movement is no longer detected, the LED returns to dim brightness.
7. Sensor readings and lighting status are transmitted to KiwisIoT through Wi-Fi.

## 🔄 System Operation

| Environmental Condition | LED Operation |
|---|---|
| Daytime | OFF |
| Nighttime without movement | Dim Brightness |
| Nighttime with movement | Full Brightness |

## 🚀 Installation and Setup

### Step 1: Clone the Repository

```bash
git clone YOUR_GITHUB_REPOSITORY_URL
```

### Step 2: Open the Project

Navigate to the cloned project directory and open the Arduino sketch in Arduino IDE.

### Step 3: Install ESP8266 Board Package

Open Arduino IDE and install the ESP8266 board package through Boards Manager.

Select:

**Tools → Board → ESP8266 Boards → NodeMCU 1.0 (ESP-12E Module)**

### Step 4: Install Required Libraries

Install the following libraries:

- ESP8266WiFi
- KiwisIoT

### Step 5: Configure Wi-Fi and KiwisIoT

Update the Wi-Fi credentials and device topic in the Arduino program.

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_DEVICE_TOPIC";
```

### Step 6: Upload the Program

1. Connect the ESP8266 to your computer using a USB cable.
2. Select the appropriate board and port.
3. Upload the Arduino program.
4. Open the Serial Monitor at 115200 baud.
5. Verify sensor readings and LED operation.

## ☁️ KiwisIoT Integration

The ESP8266 communicates with the KiwisIoT platform through Wi-Fi and transmits sensor readings and lighting information.

**Dashboard Widgets:**

| Widget | Telemetry ID | Description |
|---|---|---|
| Light Intensity | 1 | Displays LDR sensor readings |
| Motion Status | 2 | Indicates movement detection |
| Street Light Status | 3 | Displays LED ON/OFF status |
| LED Brightness | 4 | Displays LED brightness level |

Platform: https://kiwisiot.in

The dashboard enables remote monitoring of environmental conditions, movement detection, and lighting status.

## 🧪 Testing and Expected Results

**Test 1: Daytime**
- LDR detects sufficient ambient light.
- LED remains OFF.

**Test 2: Nighttime Without Movement**
- LDR detects low ambient light.
- LED operates at dim brightness.

**Test 3: Nighttime With Movement**
- PIR sensor detects movement.
- LED brightness increases to full brightness.

**Test 4: IoT Monitoring**
- ESP8266 transmits sensor readings through Wi-Fi.
- KiwisIoT receives the transmitted data.
- Dashboard displays the corresponding sensor values and lighting status.

## 🌍 Applications

- Smart City Street Lighting
- Residential Streets and Roads
- College and University Campuses
- Parking Areas
- Public Parks and Pathways
- Industrial Premises
- Automated Outdoor Lighting Systems

## 🔮 Future Enhancements

- Multiple Street Light Control.
- Solar-Powered Lighting Integration.
- Energy Consumption Monitoring.
- Fault Detection and Maintenance Alerts.
- Vehicle Detection Integration.
- GPS-Based Street Light Monitoring.

## 📷 Project Documentation

The project documentation includes:

- Hardware Components.
- Circuit Connection Diagrams.
- ESP8266 Programming.
- Sensor Integration.
- KiwisIoT Dashboard Configuration.
- Testing and Demonstration.

## 🏁 Conclusion

The IoT-Based Smart Street Lighting System demonstrates the practical implementation of embedded systems, sensors, and IoT technology for intelligent lighting automation.

By combining ESP8266, LDR, and PIR sensors, the system automatically adjusts LED brightness according to environmental light conditions and movement detection.

Integration with KiwisIoT provides remote monitoring capabilities, making the project a practical demonstration of smart lighting automation and energy-efficient infrastructure.

## 🔗 Project Links

- **IoT Platform:** https://kiwisiot.in
- **GitHub Repository:** https://github.com/Sudhakarkrish2002/IoT-Based-Smart-Street-Lighting-System-Using-ESP8266

## 🏷️ Technologies Used

`ESP8266` `Arduino IDE` `Embedded C++` `LDR Sensor` `PIR Sensor` `PWM` `Wi-Fi` `IoT` `KiwisIoT`
