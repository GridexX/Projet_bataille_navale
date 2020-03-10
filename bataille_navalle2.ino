using namespace std;
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif

//Définition des pins

//pins pour la matrice de leds
#define LED_PIN     6

#define LED_COUNT  64

#define BRIGHTNESS 50

//pins pour les autres I/O
#define Z_BUTTON
#define Q_BUTTON
#define S_BUTTON
#define D_BUTTON
#define ENTER_BUTTON 

#define LED_BLUE
#define LED_YELLOW

#define POTARD A0

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);

const unsigned int DIM=8;
const unsigned int NB_BAT=5;
const unsigned int LIST_BAT[NB_BAT]={};

struct


void setup() {

}

void loop() {

}
