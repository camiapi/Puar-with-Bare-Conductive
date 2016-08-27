void SENSOR0()
{


MP3player.stopTrack();
   
  //SENSOR 0 ...
  if(sensor0 == 1)       //TOQUE 1
  {
  MP3player.playTrack(0);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 0);
  }


  if(sensor0 == 2)       //TOQUE 2
  {
  MP3player.playTrack(1);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 0);  
  }


  if(sensor0 == 3)       //TOQUE 3
  {
  MP3player.playTrack(2);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 100);
  }


  if(sensor0 == 4)       //TOQUE 4
  {
  MP3player.playTrack(3);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 100);
  sensor0 = 0;
  }


  
  }
