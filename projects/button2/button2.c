#include "pico/stdlib.h"
#include "pico/binary_info.h"
#include "hardware/gpio.h"

const uint LED_PIN = 7;
const uint BUTTON_PIN = 10;
const uint RGB_PIN = 6;

void button_pressed_handler()
{
   gpio_put(LED_PIN, !gpio_get(LED_PIN));  
}

int main() {
    
    bi_decl(bi_program_description("Interrupt Button"));
    bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));
    bi_decl(bi_1pin_with_name(BUTTON_PIN, "On-board BUTTON"));


    gpio_init(LED_PIN);
    gpio_init(BUTTON_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    gpio_set_dir(BUTTON_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_PIN);

    // gpio_set_irq_enabled(,,);
    gpio_set_irq_enabled_with_callback(BUTTON_PIN, GPIO_IRQ_EDGE_FALL, true, button_pressed_handler);

    while(1) {
        sleep_ms(10);
    }
    return 0;
}
