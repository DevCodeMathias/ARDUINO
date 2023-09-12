# MQTT Temperature and Humidity Monitoring with Arduino

This project demonstrates how to create a simple temperature and humidity monitoring system using an Arduino board and MQTT (Message Queuing Telemetry Transport) protocol. The Arduino reads data from a DHT sensor and sends it to an MQTT broker. A sample Arduino sketch is provided here, along with a brief explanation of the components required.

## Components Required

- Arduino board (e.g., Arduino UNO)
- DHT temperature and humidity sensor
- Wires for connections

## Getting Started

1. **Setting Up the Hardware:**
   - Connect the DHT sensor to the Arduino board following the sensor's pinout.
   - If using an LED, connect its anode (longer lead) to digital pin 13 and its cathode (shorter lead) to the ground pin.

2. **Installing Required Libraries:**
   - This project requires the "Adafruit DHT" library to interface with the DHT sensor. If you haven't already, you need to install this library.
     1. Open the Arduino IDE.
     2. Go to "Sketch" > "Include Library" > "Manage Libraries..."
     3. Search for "Adafruit DHT" and click "Install" for the library by Adafruit.

3. **Uploading the Sketch:**
   - Upload the provided Arduino sketch to your Arduino board.

4. **Configuring MQTT Broker:**
   - You need an MQTT broker to receive and manage the data from the Arduino. You can use any MQTT broker of your choice. HiveMQ is a popular option, and you can use their [WebSocket Client](https://www.hivemq.com/demos/websocket-client/) to test the data transmission.

6. **Running the Project:**
   - Once everything is set up, the Arduino will read temperature and humidity data from the DHT sensor and send it to the MQTT broker.
   - If you connected an LED, it will blink to indicate the system's operation.

## Notes

- This project provides a basic example of using MQTT to transmit temperature and humidity data. You can extend it by adding more sensors, creating a more sophisticated data visualization frontend, or integrating it with other systems.
- Make sure to handle MQTT credentials securely, especially when sharing your code or making it public.

## Troubleshooting

- If you encounter issues, check your wiring and ensure that you have installed the necessary libraries correctly.
- Verify that the MQTT broker settings in the sketch match those of your chosen MQTT broker.

Feel free to adapt, modify, and enhance this project according to your requirements. Happy tinkering!
