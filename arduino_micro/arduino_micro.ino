#define interval 400

int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5};

void setup() {
	Serial.begin(9600);
	Serial.println("initializing Pins");
    for (int i=0; i<=18; i++)
	{
		pinMode(leds[i], OUTPUT);
	}
	Serial.println("initializing Pins done.");
}

void loop() {
	for (int x=0; x<=18; x++)
	{
	  digitalWrite(leds[x], HIGH);
	  delay(interval);
	  digitalWrite(leds[x], LOW);
	}
}
