// Copyright (c) 2019 Waterloop. All rights reserved.

#include <RelayController.h>
#include <Cosa/UART.hh>
#include <Cosa/Trace.hh>

using wlp::RelayController;

RelayController controller{Board::DigitalPin::D2};

void setup() {
  uart.begin(9600);
  trace.begin(&uart);

  trace << PSTR("Relay Starting Low") << endl;
  controller.low();
}

void loop() {
  //on high the brakes open, on low the brakes close
  controller.high();
  trace << PSTR("CONTROLLER HIGH\n");
  delay(1000);
  controller.low();
  trace << PSTR("CONTROLLER LOW\n");
  delay(1000);
}
