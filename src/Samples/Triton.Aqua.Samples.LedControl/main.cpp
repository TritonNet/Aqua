#include <wiringPi.h>
#include "../WiringPi/wiringPi/wiringPi.h"

// LED Pin - wiringPi pin 0 is BCM_GPIO 17.
// we have to use BCM numbering when initializing with wiringPiSetupSys
// when choosing a different pin number please use the BCM numbering, also
// update the Property Pages - Build Events - Remote Post-Build Event command
// which uses gpio export for setup for wiringPiSetupSys
#define	LED_1	2
#define	LED_2	3
#define	LED_3	4
#define	LED_4	5
#define	LED_5	6

#define DELAY_MS 200

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED_1, OUTPUT);
	pinMode(LED_2, OUTPUT);
	pinMode(LED_3, OUTPUT);
	pinMode(LED_4, OUTPUT);
	pinMode(LED_5, OUTPUT);


	while (true)
	{
		digitalWrite(LED_1, HIGH);  // On
		delay(DELAY_MS); // ms

		digitalWrite(LED_1, LOW);	  // Off
		digitalWrite(LED_2, HIGH);  // On
		delay(DELAY_MS);

		digitalWrite(LED_2, LOW);	  // Off
		digitalWrite(LED_3, HIGH);  // On
		delay(DELAY_MS);

		digitalWrite(LED_3, LOW);	  // Off
		digitalWrite(LED_4, HIGH);  // On
		delay(DELAY_MS);

		digitalWrite(LED_4, LOW);	  // Off
		digitalWrite(LED_5, HIGH);  // On
		delay(DELAY_MS);

		digitalWrite(LED_5, LOW);	  // Off
	}
	return 0;
}