#include "freertos/queue.h"
#include "driver/gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

#define PIN_BIT(x) (1ULL<<x)

#define BUTTON_DOWN (1)
#define BUTTON_UP (2)
#define BUTTON_LONG (3)

#define LONG_PRESS_DURATION (CONFIG_ESP_BUTTON_LONG_PRESS_DURATION)

typedef struct {
	uint8_t pin;
    uint8_t event;
} button_event_t;

QueueHandle_t button_init(unsigned long long pin_select);
QueueHandle_t pulled_button_init(unsigned long long pin_select, gpio_pull_mode_t pull_mode);

#ifdef __cplusplus
}
#endif
