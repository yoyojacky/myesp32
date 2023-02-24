#define interval 200

int leds[] = {5, 4, 14, 12, 13};
void setup() {
 for (int i=0; i<=5; i++)
    {
	pinMode(leds[i], OUTPUT);
	}
}

void loop() {
   for(int i=0; i<=5; i++)
        {
	digitalWrite(leds[i], HIGH);
	delay(interval);
	digitalWrite(leds[i], LOW);
	}
}
