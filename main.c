#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "demo.h"

#define SPEAKER_PIN 16

int main() {

	gpio_set_function(SPEAKER_PIN, GPIO_FUNC_PWM);
	uint slice = pwm_gpio_to_slice_num(SPEAKER_PIN);
	uint channel = pwm_gpio_to_channel(SPEAKER_PIN);

	pwm_set_wrap(slice, 255);
	pwm_set_enabled(slice, true);

	uint s = 0;

	while(1) {
		pwm_set_chan_level(slice, channel, demo_01_raw[s]);
		s++;
		sleep_us(125);

		if(s > demo_01_raw_len) {
			s = 0;
		}

	}

	return 0;
}
