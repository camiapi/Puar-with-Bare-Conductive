void SENSOR1()
{

MP3player.stopTrack();
   
  //SENSOR 1 ...
  if(sensor1 == 1)      //TOQUE 1
  {
  MP3player.playTrack(4);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 0);
  }

  if(sensor1 == 2)     //TOQUE 2
  {
  MP3player.playTrack(5);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 0);  
  }

  if(sensor1 == 3)       //TOQUE 3
  {
  MP3player.playTrack(6);
  analogWrite(ledAzul, 0);
  analogWrite(ledVerde, 0);
  analogWrite(ledVermelho, 100);    
  }


  if(sensor1 == 4)      //TOQUE 4
  {
  MP3player.playTrack(7);
  analogWrite(ledAzul, 100);
  analogWrite(ledVerde, 100);
  analogWrite(ledVermelho, 100);
  sensor1 = 0;
  }


  
  }
