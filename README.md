# Wippersnapper Arduino
Arduino Library for Adafruit IO Wippersnapper, the no-code IoT interface on Adafruit.io.

NOTE: This library in beta and is actively being developed, please report any bugs on the issue page of this repository.

## Installation

Prior to installation, make sure you have your Arduino IDE configured for the board you're using with this library:

Supported SAMD51 Hardware:
* [Adafruit Metro M4 AirLift Express](https://learn.adafruit.com/adafruit-metro-m4-express-airlift-wifi/setup)
* [Adafruit PyPortal](https://learn.adafruit.com/adafruit-pyportal/setup)

Supported ESP32-S2 Hardware:
* [Adafruit FunHouse](https://learn.adafruit.com/adafruit-funhouse/arduino-ide-setup)

Supported ESP32 Hardware:
* [Adafruit Huzzah32](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather/using-with-arduino-ide)

This library requires the following dependencies to be installed from the Arduino Library Manager:
* [Adafruit MQTT Library](https://github.com/adafruit/Adafruit_MQTT_Library)


## Usage
* Download the [latest .ZIP for this library](https://github.com/adafruit/Adafruit_Wippersnapper_Arduino/archive/master.zip)
* Within the Arduino IDE, select Sketch -> Include Library -> Add .ZIP Library
* Select the .ZIP you downloaded
* Within the Arduino IDE, select File -> Examples -> Adafruit Wippersnapper -> Wippersnapper_demo
* In `config.h`, set `IO_USERNAME` and `IO_KEY` to your Adafruit IO Staging credentials.
* In `config.h`, set `WIFI_SSID` and `WIFI_PASS` to your WiFi credentials.
* If you are using an Adafruit AirLift Co-Processor board - uncomment the `//#define USE_AIRLIFT` line.
* On a web browser, navigate to the [Adafruit IO staging website](https://io.adafruit.us/)
* Compile and upload the sketch to your board.
* Your board should automatically run the Wippersnapper demo sketch and connect to Adafruit IO.

## Hardware Compatibility
The following boards are currently supported by this library:
* Adafruit PyPortal
* Adafruit Metro M4 AirLift Lite
* Adafruit FunHouse ESP32-S2

## Adding Hardware to this library
TODO!

[Hardware Specification for adding boards to WipperSnapper](https://github.com/adafruit/WipperSnapper_Boards)

Communication between this library and the MQTT broker uses protocol buffers for serialized data. This library contains compiled `.pb.h` and `.pb.c` protocol buffer messages generated by [nanopb](https://github.com/nanopb/nanopb).
