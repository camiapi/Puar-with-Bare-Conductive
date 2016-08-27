void SENSOR3()
{


MP3player.stopTrack();
   
  //SENSOR 3 ...
  if(sensor3 == 1)      //TOQUE 1
  {
  MP3player.playTrack(12);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 0);
  }


  if(sensor3 == 2)     //TOQUE 2
  {
  MP3player.playTrack(13);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 0);
  }

  if(sensor3 == 3)     //TOQUE 3
  {
  MP3player.playTrack(14);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 100);  
  }


  if(sensor3 == 4)      //TOQUE 4
  {
  MP3player.playTrack(15);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 100);
  sensor3 = 0;
  }

  
  
  }
