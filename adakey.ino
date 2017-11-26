#include <Adafruit_NeoPixel.h>

void setup()
{
    Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
    strip.begin();
    strip.show(); // Initialize all pixels to 'off'
}

void loop()
{
	
}
