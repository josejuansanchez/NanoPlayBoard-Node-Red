#include <NanoPlayBoard.h>

NanoPlayBoard board;

void setup() {
  board.bluetooth.begin(9600);
}

void loop() {
  float temperature = board.dht.readTemperature();

  if (isnan(temperature)) {
    board.bluetooth.println("Error reading temperature!");
  }
  else {
    board.bluetooth.print("Temperature: ");
    board.bluetooth.print(temperature);
    board.bluetooth.println(" ºC");
  }
  delay(1000);
}
