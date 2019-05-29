# cosa-relay-wio

This is a relay controller for Cosa. Example usage:

```cpp
void setup() {
  using wlp::RelayController;
  RelayController controller{Board::DigitalPin::D5};

  controller.high();
  delay(1000);
  controller.low();
}
```

## To use this package (wio >= 0.10.0):
```
wio install cosa-relay-wio@1.0.0 --url github.com/waterloop/cosa-relay-wio
```
