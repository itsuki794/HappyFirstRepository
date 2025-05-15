#include <FastLED.h>

#define NUM 50

CRGB leds[NUM];

int count = 0;
void setup() {
  FastLED.addLeds<WS2812, 6>(leds, NUM);
  // put your setup code here, to run once:
}

void loop() {
  count = 0;
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 9; i++) {
    leds[i].r = 255-count;
    leds[i].g = 0;
    leds[i].b = count;
    count = count+20;
  }


  FastLED.show();
}