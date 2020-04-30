#include <Adafruit_CircuitPlayground.h>
#include <stdlib.h>
#include <stdio.h>

float X, Y, Z;
boolean rightButton = false;
boolean leftButton = false;
void setup() {
  
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {

    X = CircuitPlayground.motionX();
    Y = CircuitPlayground.motionY();
    Z = CircuitPlayground.motionZ();
    int defaultArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int realArray[10];
    int position;
    

    if(CircuitPlayground.rightButton()==true){
      rightButton=true;
      leftButton=false;
    }
    
    if(CircuitPlayground.leftButton()==true){
      leftButton=true;
      rightButton=false;
    }

    // normal mode
    if (rightButton == true) {
      
    if (X >= -1 && X <= 1 && Y >= -1 && Y <= 1) {    //for stable  board
      //CircuitPlayground.setPixelColor(0, r, g, b);
      CircuitPlayground.setPixelColor(0, 0, 255, 0);
      CircuitPlayground.setPixelColor(1, 0, 255, 0);
      CircuitPlayground.setPixelColor(2, 0, 255, 0);
      CircuitPlayground.setPixelColor(3, 0, 255, 0);
      CircuitPlayground.setPixelColor(4, 0, 255, 0);
      CircuitPlayground.setPixelColor(5, 0, 255, 0);
      CircuitPlayground.setPixelColor(6, 0, 255, 0);
      CircuitPlayground.setPixelColor(7, 0, 255, 0);
      CircuitPlayground.setPixelColor(8, 0, 255, 0);
      CircuitPlayground.setPixelColor(9, 0, 255, 0);
      delay(500);
    }

    else if (X >= -1 && X <= 1) {                    //for stable X axis
      if (Y > 8.5) {                                 //positive Y
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (Y > 8) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (Y > 7) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(200, 100);
        delay(500);
      }
      else if (Y > 5) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
      else if (Y > 3) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }
      else if (Y > 1) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }

      else if (Y < -8.5) {                           //negative Y
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (Y < -8) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (Y < -7) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(200, 100);
        delay(500);
      }
      else if (Y < -5) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }
      else if (Y < -3) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }
      else if (Y < -1) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }
    }

    else if (Y >= -1 && Y <= 1) {                    //for stable Y axis
      if (X > 8.5) {                                 //positive X
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (X > 7) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (X > 5) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }
      else if (X > 3) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }
      else if (X > 1) {
        CircuitPlayground.setPixelColor(0, 0, 255, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 0, 255, 0);
        delay(50);
      }

      else if (X < -8) {                             //negative X
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (X < -7) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (X < -5) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
      else if (X < -3) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
      else if (X < -1) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 0, 255, 0);
        CircuitPlayground.setPixelColor(2, 0, 255, 0);
        CircuitPlayground.setPixelColor(3, 0, 255, 0);
        CircuitPlayground.setPixelColor(4, 0, 255, 0);
        CircuitPlayground.setPixelColor(5, 0, 255, 0);
        CircuitPlayground.setPixelColor(6, 0, 255, 0);
        CircuitPlayground.setPixelColor(7, 0, 255, 0);
        CircuitPlayground.setPixelColor(8, 0, 255, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
    }

    else {

      if (Y > 0 && X > 0 && Y > X) {
        position = 6;
      }
      else if (Y > 0 && X > 0 && Y < X) {
        position = 5;
      }
      else if (Y > 0 && X < 0 && Y > abs(X)) {
        position = 8;
      }
      else if (Y > 0 && X < 0 && Y < abs(X)) {
        position = 9;
      }
      else if (Y < 0 && X > 0 && abs(Y) > X) {
        position = 3;
      }
      else if (Y < 0 && X > 0 && abs(Y) < X) {
        position = 4;
      }
      else if (Y < 0 && X < 0 && Y < X) {
        position = 1;
      }
      else if (Y < 0 && X < 0 && Y > X) {
        position = 0;
      }

      int index = 0;
      for (int i = position; i <= 9; i++) {
        realArray[index] = defaultArray[i];
        index++;
      }

      for (int i = 0; i < position; i++) {
        realArray[index] = defaultArray[i];
        index++;
      }

      CircuitPlayground.setPixelColor(realArray[0], 255, 0, 0);
      CircuitPlayground.setPixelColor(realArray[1], 255, 0, 0);
      CircuitPlayground.setPixelColor(realArray[2], 0, 255, 0);
      CircuitPlayground.setPixelColor(realArray[3], 0, 255, 0);
      CircuitPlayground.setPixelColor(realArray[4], 0, 255, 0);
      CircuitPlayground.setPixelColor(realArray[5], 0, 255, 0);
      CircuitPlayground.setPixelColor(realArray[6], 0, 255, 0);
      CircuitPlayground.setPixelColor(realArray[7], 0, 255, 0);
      CircuitPlayground.setPixelColor(realArray[8], 0, 255, 0);
      CircuitPlayground.setPixelColor(realArray[9], 255, 0, 0);
      delay(50);
    }
/*
    if(Z<-5 || Z>12){
      
        for(int i=0; i<=9; i++){
        CircuitPlayground.setPixelColor(i, 255, 255, 255);
        }
        CircuitPlayground.playTone(800, 200);
        delay(200);
    }
    */
    }






























    // sport mode
    if (leftButton == true) {
      
    if (X >= -2 && X <= 2 && Y >= -2 && Y <= 2) {    //for stable  board
      //CircuitPlayground.setPixelColor(0, r, g, b);
      CircuitPlayground.setPixelColor(0, 0, 0, 255);
      CircuitPlayground.setPixelColor(1, 0, 0, 255);
      CircuitPlayground.setPixelColor(2, 0, 0, 255);
      CircuitPlayground.setPixelColor(3, 0, 0, 255);
      CircuitPlayground.setPixelColor(4, 0, 0, 255);
      CircuitPlayground.setPixelColor(5, 0, 0, 255);
      CircuitPlayground.setPixelColor(6, 0, 0, 255);
      CircuitPlayground.setPixelColor(7, 0, 0, 255);
      CircuitPlayground.setPixelColor(8, 0, 0, 255);
      CircuitPlayground.setPixelColor(9, 0, 0, 255);
      delay(500);
    }

    else if (X >= -2 && X <= 2) {                    //for stable X axis
      if (Y > 9.5) {                                 //positive Y
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (Y > 9) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (Y > 8) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(200, 100);
        delay(500);
      }
      else if (Y > 6) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
      else if (Y > 4) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }
      else if (Y > 2) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }

      else if (Y < -9.5) {                           //negative Y
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (Y < -9) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (Y < -8) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(200, 100);
        delay(500);
      }
      else if (Y < -6) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }
      else if (Y < -4) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }
      else if (Y < -2) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }
    }

    else if (Y >= -2 && Y <= 2) {                    //for stable Y axis
      if (X > 9.5) {                                 //positive X
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (X > 8) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (X > 6) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }
      else if (X > 4) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }
      else if (X > 2) {
        CircuitPlayground.setPixelColor(0, 0, 0, 255);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 0, 0, 255);
        delay(50);
      }

      else if (X < -9) {                             //negative X
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(600, 100);
      }
      else if (X < -8) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
        CircuitPlayground.playTone(400, 100);
        delay(100);
      }
      else if (X < -6) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
      else if (X < -4) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
      else if (X < -2) {
        CircuitPlayground.setPixelColor(0, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 0, 0, 255);
        CircuitPlayground.setPixelColor(2, 0, 0, 255);
        CircuitPlayground.setPixelColor(3, 0, 0, 255);
        CircuitPlayground.setPixelColor(4, 0, 0, 255);
        CircuitPlayground.setPixelColor(5, 0, 0, 255);
        CircuitPlayground.setPixelColor(6, 0, 0, 255);
        CircuitPlayground.setPixelColor(7, 0, 0, 255);
        CircuitPlayground.setPixelColor(8, 0, 0, 255);
        CircuitPlayground.setPixelColor(9, 255, 0, 0);
        delay(50);
      }
    }

    else {

      if (Y > 0 && X > 0 && Y > X) {
        position = 6;
      }
      else if (Y > 0 && X > 0 && Y < X) {
        position = 5;
      }
      else if (Y > 0 && X < 0 && Y > abs(X)) {
        position = 8;
      }
      else if (Y > 0 && X < 0 && Y < abs(X)) {
        position = 9;
      }
      else if (Y < 0 && X > 0 && abs(Y) > X) {
        position = 3;
      }
      else if (Y < 0 && X > 0 && abs(Y) < X) {
        position = 4;
      }
      else if (Y < 0 && X < 0 && Y < X) {
        position = 1;
      }
      else if (Y < 0 && X < 0 && Y > X) {
        position = 0;
      }

      int index = 0;
      for (int i = position; i <= 9; i++) {
        realArray[index] = defaultArray[i];
        index++;
      }

      for (int i = 0; i < position; i++) {
        realArray[index] = defaultArray[i];
        index++;
      }

      CircuitPlayground.setPixelColor(realArray[0], 255, 0, 0);
      CircuitPlayground.setPixelColor(realArray[1], 255, 0, 0);
      CircuitPlayground.setPixelColor(realArray[2], 0, 0, 255);
      CircuitPlayground.setPixelColor(realArray[3], 0, 0, 255);
      CircuitPlayground.setPixelColor(realArray[4], 0, 0, 255);
      CircuitPlayground.setPixelColor(realArray[5], 0, 0, 255);
      CircuitPlayground.setPixelColor(realArray[6], 0, 0, 255);
      CircuitPlayground.setPixelColor(realArray[7], 0, 0, 255);
      CircuitPlayground.setPixelColor(realArray[8], 0, 0, 255);
      CircuitPlayground.setPixelColor(realArray[9], 255, 0, 0);
      delay(50);

    }
/*
    if(Z<-6 || Z>13){
      
        for(int i=0; i<=9; i++){
        CircuitPlayground.setPixelColor(i, 255, 255, 255);
        }
        CircuitPlayground.playTone(800, 200);
        delay(200);
    }
    */
    }
    
    Serial.print("X: ");
    Serial.print(X);
    Serial.print("  Y: ");
    Serial.print(Y);
    Serial.print("  Z: ");
    Serial.println(Z);
    
}
