#define FASTLED_INTERRUPT_RETRY_COUNT 0
#include "FastLED.h"
#include <ESP8266TrueRandom.h>
#include "Palettes.h"

typedef uint8_t uint8;

#define LEDS_NUMBER 512
#define LEDS2D_WIDTH 16
#define LEDS2D_HEIGHT 32

#define LED_PIN_1 4
#define LED_PIN_2 5
#define LED_TYPE WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS 512
CRGB leds[NUM_LEDS];
int BRIGHTNESS = 18045                        ;
#include "functions.h"

void setup()
{
	// Add your initialization code here
	Serial.begin(115200);
	FastLED.addLeds<LED_TYPE, LED_PIN_1>(leds, 0, 256).setDither(BRIGHTNESS < 255); // cpt-city palettes have different color balance
	FastLED.addLeds<LED_TYPE, LED_PIN_2>(leds, 256, 256).setDither(BRIGHTNESS < 255);
	FastLED.setBrightness(BRIGHTNESS);
	//currentPalette = RainbowColors_p;
}

// The loop function is called in an endless loop
void loop()
{
	int random_palette = ESP8266TrueRandom.random(gGradientPaletteCount);
	currentPalette = gGradientPalettes[random_palette];
	int function = ESP8266TrueRandom.random(9);
	switch (function) {
	case 0: one_cell_no_symmetry(); break;
	case 1: one_cell_horizontal_symmetry(); break;
	case 2: one_cell_vertical_symmetry(); break;
	case 3: one_cell_both_symmetry(); break;
	case 4: four_cells_no_symmetry(); break;
	case 5: four_cells_horizontal_symmetry(); break;
	case 6: four_cells_vertical_symmetry(); break;
	case 7: four_cells_both_symmetry(); break;
	case 8: sixteen_cells_both_symmetry(); break;
	}
	FastLED.show();
	delay(10000);
	fill_solid( leds, NUM_LEDS, CRGB(0,0,0));
}
