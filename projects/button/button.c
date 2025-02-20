#include "pico/stdlib.h"
#include "pico/binary_info.h"

const uint LED_PIN = 7;
const uint BUT_PIN = 10;

int main() {
    
    bi_decl(bi_program_description("First Blink"));
    bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));
    bi_decl(bi_1pin_with_name(BUT_PIN, "On-board BUTTON"));

    gpio_init(LED_PIN);
    gpio_init(BUT_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    gpio_set_dir(BUT_PIN, GPIO_IN);
    gpio_pull_up(BUT_PIN);

    while(1) {
        if (!gpio_get(BUT_PIN)) {
           gpio_put(LED_PIN, 0);
        }
        else {
           gpio_put(LED_PIN, 1);
        }
        sleep_ms(10);
    }
    return 0;
}
