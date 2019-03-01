#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 6

CRGB leds[NUM_LEDS];

void setup() {
FastLED.addLeds<WS2812B, DATA_PIN, GRB> (leds, NUM_LEDS));
}

void loop() {
for (int i=0;;i=135){
  leds[i]= (CRGB;Green;)
  leds[(NUM_LEDS-i)]=GRB;;
  FastLED.show();
  fill_solid(leds[0], 70, CRGB(50,0,200));
  delay(2000);
  fill_solid(leds, 0, 135, (CRGB(Black)));
  delay(100);
  fill_solid(leds, 0, 135, (CRGB(Green)));
  delay(2000);
  fill_solid(leds, 0, 135, (CRGB(Black)));
  delay(100);
  fill_solid(leds, 0, 67, (CRGB(42,165,42)));
  fill_solid(leds, 67, 135, (CRGB(Green)));
  delay(2000);
  fill_solid(leds, 0, 135, (CRGB(Black)));
  delay(100);
  fill_solid(leds, 0, 67, (CRGB(Green)));
  fill_solid(leds, 67, 135, (CRGB(42,165,42)));
  delay(2000);
  fill_solid(leds, 0, 135, (CRGB(Black)));
  delay(100);
  fill_rainbow( &(leds[i]), 1, 135 / Green/);
  delay(100);
}
}

