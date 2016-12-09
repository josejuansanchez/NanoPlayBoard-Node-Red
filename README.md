# NanoPlayBoard-Node-Red

## Example 0. How to send potentiometer values through serial port

* Upload [this sketch](00-potentiometer/arduino/read/read.ino) on your NanoPlayBoard.
* Start Node-Red from your terminal with: `$ node-red`
* Import [this flow](00-potentiometer/node-red/flow.json).

![](00-potentiometer/screenshot/flow.png)

## Example 1. How to send potentiometer values to Adafruit IO using MQTT

* Upload [this sketch](01-potentiometer-mqtt/arduino/read/read.ino) on your NanoPlayBoard.
* Start Node-Red from your terminal with: `$ node-red`
* Import [this flow](01-potentiometer-mqtt/node-red/flow.json).

![](01-potentiometer-mqtt/screenshot/flow.png)

### Connection details

* Host: io.adafruit.com
* Port: 1883 or 8883 (for SSL encrypted connection)
* Username: your Adafruit account username (see the accounts.adafruit.com page here to find yours)
* Password: your Adafruit IO key (click the AIO Key button on a dashboard to find the key)
* [Reference](https://learn.adafruit.com/adafruit-io/mqtt-api).
