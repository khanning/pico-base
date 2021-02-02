#include "pico/stdlib.h"

int main() {
  const uint PIN = 25;
  gpio_init(PIN);
  gpio_set_dir(PIN, GPIO_OUT);

  while (true) {
    gpio_put(PIN, 1);
    sleep_ms(1000);
    gpio_put(PIN, 0);
    sleep_ms(1000);
  }
}
