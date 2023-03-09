// Simple program to control an RGB LED light using the Neopixel library
// Adapted from NeoPixel Ring simple sketch (c) 2013 Shae Erisson under the GPLv3

#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
int LEDPIN = 8;

// How many NeoPixels are attached to the Arduino?
int NUMPIXELS = 1;

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LEDPIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  pixels.setBrightness(255);
  pixels.setPixelColor(0, pixels.Color(120,0,255)); // red at about 60% of full brightness
  pixels.show(); // This sends the updated pixel color to the hardware.

}

void loop() {


}