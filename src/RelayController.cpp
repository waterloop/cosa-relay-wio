// Copyright (c) 2019 Waterloop. All rights reserved.

#include "RelayController.h"

using wlp::RelayController;

void RelayController::high() {
  m_pin.high();
}

void RelayController::low() {
  m_pin.low();
}

void RelayController::on() {
  m_pin.on();
}

void RelayController::off() {
  m_pin.off();
}

bool RelayController::is_on() {
  return m_pin.is_on();
}

bool RelayController::is_off() {
  return m_pin.is_off();
}

bool RelayController::is_high() {
  return m_pin.is_high();
}

bool RelayController::is_low() {
  return m_pin.is_low();
}
