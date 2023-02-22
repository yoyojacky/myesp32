#define interval 200

int leds[] = {30, 28, 26, 24, 22, 20, 18, 16, 12, 10, 2};

void setup() {
	for (int i=0; i<=11; i++)
	{
		pinMode(leds[i], OUTPUT);
	}
}

void loop() {
	for (int x=0; x<=11; x++)
 	{
	 digitalWrite(leds[x], HIGH);
	 delay(interval);
	 digitalWrite(leds[x], LOW);
	}
}

