#Greenhouse Project

##Overview

The Greenhouse project is a smart system designed to monitor and control various environmental factors within a greenhouse. It helps ensure optimal conditions for plant growth by automating temperature regulation and soil moisture management. The system uses various sensors to gather environmental data and actuators to control devices like water pumps,soli moisture sensors,temparature and humidity sensors aiming to improve plant health while reducing human intervention.

##Key Features

Temperature Monitoring:

The DHT11 sensor measures the temperature, and the system compares it against a predefined threshold of 30°C.
If the temperature exceeds or equals the threshold, the Blue LED turns on, indicating high temperature.

Soil Moisturing:

If the Soil Moisture Sensor is wet,then water pump is not working.
If the Soil Moisture Sensor is dry,then water pump is working.

##Components Used

Microcontroller:

Arduino Uno (or any other compatible microcontroller)

Sensors:

DHT11– Temperature and Humidity Sensor
Soil Moisture Sensor

Actuators:

Relay Module (for controlling high-power components like water pump, fan, and light)
Water Pump (for irrigation)
LED Display(for check temp and humidity values)

Other Components:

LCD Display (16x2, for displaying real-time environmental data)
Power Supply (5V for Arduino, 12V for actuators)

##Key Logic Breakdown

Temperature Monitoring:

The DHT11 sensor measures the temperature, and the system compares it against a predefined threshold of 30°C.
If the temperature exceeds or equals the threshold, the Blue LED turns on, indicating high temperature.

Soil Moisture Monitoring:

The soil moisture sensor reads the moisture level of the soil. When the moisture falls below a certain threshold, indicating that the soil is too dry, the system will automatically trigger the water pump to irrigate the plants.

Relay Control:

Relays are used to control the high-power components such as the water pump, fan, and lights. The Arduino sends control signals to the relays, which in turn switch these devices on and off based on the environmental conditions.

Real-Time Display:

The system uses an LCD display to show current environmental data like temperature, humidity, soil moisture, and light intensity. This provides real-time feedback for monitoring purposes.


##Circuit Diagram

DHT11 Temperature Sensor:

Connect the Data pin of the DHT11 to Pin 2 of the Arduino.
Connect the VCC and GND to the 5V and GND pins of the Arduino.

Soil Moisture Sensor:

Connect A0	to Analog input for soil moisture.

Relay Module:

Connect Pin 2 to Control the water pump.

LCD Display:

Connect Pin 6,7,8,9 to For displaying temp and humidity sensor data.


##Operation Summary

Temperature Monitoring:

The system reads the temperature from the DHT11 sensor and compares it to a predefined threshold (30°C). If the temperature exceeds or is equal to the threshold, the Blue LED turns on.

Humidity Control:

If the humidity level is too low or high, the system controls the fan or a humidifier to maintain a suitable range.

Soil Moisture Control:

When the soil moisture is below the set threshold, the water pump is triggered for irrigation.

##Troubleshooting

System Not Starting:

Check Power Supply: Ensure that the power supply is correctly connected and provides the required voltage.
Verify Wiring: Double-check the wiring between the Arduino and all connected components (sensors, relays, etc.).

Incorrect Temperature Readings:

Ensure the DHT11 sensor is connected to the correct pin (Pin 2) and is properly powered.
The DHT11 sensor can sometimes give errors if the connection is loose, so ensure solid connections.

Relay Not Triggering Devices:

Relay Module Connection: Ensure the relay modules are correctly connected to the Arduino and the external devices (e.g., water pump, fan, light).
Check Relay Rating: Verify that the relay can handle the current and voltage requirements of the connected devices.

LCD Not Displaying Data:

Wiring: Ensure the I2C or parallel wiring is correctly connected between the Arduino and the LCD.
Address Check: If using an I2C LCD, verify that the correct I2C address is set in the code.
