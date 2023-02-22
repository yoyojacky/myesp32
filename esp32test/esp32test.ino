#define interval 300

int leds[] = {0,1,2,3,4, 5, 12, 13, 14, 18, 19, 21, 22, 23, 25, 26, 27, 32, 33};

void setup() {
	Serial.begin(9600);
	for (int i=0; i<=19; i++)
	{
	pinMode(leds[i], OUTPUT); 
	Serial.println(leds[i]);
	delay(40);
	}
}

void loop() {
	for(int x=0; x<=19; x++)
	{
	  digitalWrite(leds[x], HIGH);
	  delay(interval);
	  digitalWrite(leds[x], LOW);
	}
}
