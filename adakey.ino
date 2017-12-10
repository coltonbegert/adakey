#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
    #include <avr/power.h>
#endif

#define PIN 6


Adafruit_NeoPixel strip = Adafruit_NeoPixel(32, PIN, NEO_GRB + NEO_KHZ800);


void setup()
{
    strip.begin();
    strip.show(); // Initialize all pixels to 'off'
    // strip.setBrightness(1);
    // red = 0;
    // pos = 0;
    

}

void loop()
{
    return;
}