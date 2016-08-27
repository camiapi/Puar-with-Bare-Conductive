void SENSOR2()
{


MP3player.stopTrack();
   
  //SENSOR 2 ...
  if(sensor2 == 1)       //TOQUE 1
  {
  MP3player.playTrack(8);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 0);
  }


  if(sensor2 == 2)      //TOQUE 2
  {
  MP3player.playTrack(9);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 0);  
  }


  if(sensor2 == 3)      //TOQUE 3
  {
  MP3player.playTrack(10);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 100);    
  }


  if(sensor2 == 4)    //TOQUE 4
  {
  MP3player.playTrack(11);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 100);
  sensor2 = 0;
  }


  
  }
