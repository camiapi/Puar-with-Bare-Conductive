int ledAzul = 10;
int ledVerde = 11;
int ledVermelho = 13;
int sensor0;
int sensor1;
int sensor2;
int sensor3;

#include "Compiler_Errors.h"
#include <MPR121.h>
#include <Wire.h>
#define MPR121_ADDR 0x5C
#define MPR121_INT 4
#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h> 
#include <SFEMP3Shield.h>

SFEMP3Shield MP3player;
byte result;
int lastPlayed = 0;
#define REPLAY_MODE TRUE  
#define firstPin 0
#define lastPin 3
SdFat sd;


void setup(){  
  
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  analogWrite(ledVermelho, 0);
  analogWrite(ledVerde, 0);
  analogWrite(ledAzul, 0);

  Serial.begin(57600);  

  if(!sd.begin(SD_SEL, SPI_HALF_SPEED)) sd.initErrorHalt();
  if(!MPR121.begin(MPR121_ADDR)) Serial.println("error setting up MPR121");
  MPR121.setInterruptPin(MPR121_INT);
  MPR121.setTouchThreshold(40);
  MPR121.setReleaseThreshold(20);
  result = MP3player.begin();
  MP3player.setVolume(10,10);
 
  if(result != 0) {
  Serial.print("Error code: ");
  Serial.print(result);
  Serial.println(" when trying to start MP3 player");
  }
   

}// fim do setup





void loop(){
 readTouchInputs();
 
 }// fim do loop


void readTouchInputs(){
  if(MPR121.touchStatusChanged()){    
    MPR121.updateTouchData();  
    if(MPR121.getNumTouches()<=1){
      for (int i=0; i < 4; i++){  // Check which electrodes were pressed
        if(MPR121.isNewTouch(i)){
        
           if(i == 0){sensor0++;SENSOR0();}
           if(i == 1){sensor1++;SENSOR1();}
           if(i == 2){sensor2++;SENSOR2();}
           if(i == 3){sensor3++;SENSOR3();}
                
        }
      }
    }    
  }

}// fim 
