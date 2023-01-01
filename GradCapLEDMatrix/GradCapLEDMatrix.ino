#include <Adafruit_GFX.h> //core graphics library
#include <RGBmatrixPanel.h> //Hard-ware specfic library

#include "rocket.h" 
#include "rocket1.h"
#include "rocket2.h"
#include "rocket3.h"
#include "rocket4.h"
#include "u.h"
#include "uc.h"
#include "ucc.h"
#include "uccs.h"
#include "uccs2022.h"
#include "uccsConfetti.h"
#include "uccsFireworks.h"
#include "uccsFireworks1.h"
#include "uccsFireworks2.h"
#include "piBetaPhi.h"

#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

// Panel Matrix doesn't fully work like Neomatrix (which I originally
// wrote this demo for), so map a few calls to be compatible. The rest
// comes from Adafruit_GFX and works the same on both backends.
#define setBrightness(x) fillScreen(0) //brightness on this board
#define clear()          fillScreen(0)
#define show()           swapBuffers(true)

void setup() {
  Serial.begin(115200);
  matrix.begin();
  matrix.setBrightness(1); //Set brightness to 50%
}

void loop() {

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)PiBetaPhi, 32, 32); //matrix.drawRGBBitmap(x, y, bitmap, w, h); 
    matrix.show();
    delay(1000);
  
    matrix.drawRGBBitmap(0, 0, (const uint16_t *)rocket_2_32x32_WebColors, 32, 32); //matrix.drawRGBBitmap(x, y, bitmap, w, h); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)rocket1_2_32x32_WebColors, 32, 32);  
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)rocket2_2_32x32_WebColors, 32, 32);  
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)rocket3_2_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)rocket4_2_32x32_WebColors, 32, 32);  
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)U_32x32_WebColors, 32, 32);  
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UC_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UCC_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UCCS_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UCCS2022_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UCCSconfetti_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UCCSfireworks_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UCCSfireworks1_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);

    matrix.drawRGBBitmap(0, 0, (const uint16_t *)UCCSfireworks2_32x32_WebColors, 32, 32); 
    matrix.show();
    delay(1000);
    
    matrix.clear(); //Set image to black
}
