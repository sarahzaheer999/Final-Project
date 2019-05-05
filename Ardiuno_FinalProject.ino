
#include <Adafruit_NeoPixel.h>
#define PIN            6
#define NUMPIXELS      8

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

int delayval = 10; // delay for half a second

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);
  pixels.begin(); // This initializes the NeoPixel library.
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).

  }
}


void loop() {

  char c;

  c = Serial.read();

  if (c == 'a') {
    Serial.println("received a");
    //digitalWrite(LED1, HIGH);
    for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      pixels.setPixelColor(i, pixels.Color(255, 0, 0)); // Moderately bright green color.

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(delayval); // Delay for a period of time (in milliseconds).

    }
  }

  if (c == 'b') {
    //digitalWrite(LED1, LOW);
    for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // Moderately bright green color.
      pixels.show(); // This sends the updated pixel color to the hardware.
      delay(delayval); // Delay for a period of time (in milliseconds).

    }
  }

  if (c == 'c') {
    //digitalWrite(LED1, HIGH);
    for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      pixels.setPixelColor(i, pixels.Color(0, 255, 0)); // Moderately bright green color.

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(delayval); // Delay for a period of time (in milliseconds).

    }
  }

  if (c == 'd') {
    //digitalWrite(LED1, HIGH);
    for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      pixels.setPixelColor(i, pixels.Color(255, 220, 0)); // Moderately bright green color.

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(delayval); // Delay for a period of time (in milliseconds).

    }
  }


  }

  



  /*
    digitalWrite(LED1, HIGH);    // turn on LED1
    delay(200);                  // wait for 200ms

    digitalWrite(LED2, HIGH);    // turn on LED2
    delay(200);                  // wait for 200ms

    digitalWrite(LED3, HIGH);    // turn on LED3
    delay(200);                  // wait for 200ms

    digitalWrite(LED1, LOW);     // turn off LED1
    delay(300);                  // wait for 300ms

    digitalWrite(LED2, LOW);     // turn off LED2
    delay(300);                  // wait for 300ms

    digitalWrite(LED3, LOW);     // turn off LED3
    delay(300);                  // wait for 300ms before running program all over again
  */
