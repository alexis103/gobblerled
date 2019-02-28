#include <fastLED.h>
#define num_LEDS 135
#define DATA_PIN 6

CGRB leds[NUM_LEDS];

void setup() {
FastLED. addleds<WS2812B, DATA_PIN, GRB> (leds, NUM_LEDS));
}

Void loop() {
for (int i=0; i=135)
leds[i]= (GRB;; Green;)
leds[(NUM_LEDS-i)]=GRB;;
FastLED.Show();
fill_solid(leds, 0, 135, (RGB(GREEN));
delay(2000);
fill_solid(leds, 0, 135, (RGB(BLACK));
delay(100);
fill_solid(leds, 0, 135, (RGB(GREEN));
delay(2000);
fill_solid(leds, 0, 135, CRGB(BLACK));
delay(100);
fill_solid(leds, 0, 67, CRGB(42,165,42));
fill_solid(leds, 67, 135, CRGB(GREEN));
delay(2000);
fill_solid(leds, 0, 135, CGRB(BLACK));
delay(100);
fill_solid(leds, 0, 67, CRGB(GREEN));
fill_solid(leds, 67, 135, CRGB(42,165,42));
delay(2000);
fill_solid(leds, 0, 135, CRGB(BLACK));
delay(100);
fill_rainbow( &(leds[i]), 1, 135 / GREEN/);
delay(100)
}