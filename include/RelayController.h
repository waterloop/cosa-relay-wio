// Copyright (c) 2019 Waterloop. All rights reserved.

#ifndef COSA_RELAY_WIO_RELAYCONTROLLER_H
#define COSA_RELAY_WIO_RELAYCONTROLLER_H

#include <Cosa/OutputPin.hh>

namespace wlp {
class RelayController {
 public:
  explicit RelayController(OutputPin pin)
      : m_pin{pin} {}

  /**
   * Set the relay pin high.
   * @note atomic
   */
  void high();

  /**
  * Clear the relay pin.
  * @note atomic
  */
  void low();

  /**
  * Turn on the relay pin
  * @note atomic
  */
  void on();

  /**
  * Clear the relay pin.
  * @note atomic
  */
  void off();

  /**
  * Return true(1) if the relay is on otherwise false(0).
  * @return boolean.
  */
  bool is_on();

  /**
  * Return true(1) if the relay is off otherwise false(0).
  * @return boolean.
  */
  bool is_off();

  /**
  * Return true(1) if the relay is set otherwise false(0).
  * @return boolean.
  */
  bool is_high();

  /**
  * Return true(1) if the relay is cleared (low) otherwise false(0).
  * @return boolean.
  */
  bool is_low();

 private:
  OutputPin m_pin;
};
}

#endif //COSA_RELAY_WIO_RELAYCONTROLLER_H
