#include <Wiring.h>
#include <Arduino.h>

class LED
{
  public:
    LED(uint8_t ledPin);

    bool getState();
    void on();
    void off();
    void toggle();
    void blink(unsigned int time, byte times = 1);

    void setValue(byte val);
    void fadeIn(unsigned int time);
    void fadeOut(unsigned int time);

  private:
    bool status;
    uint8_t pin;
};

