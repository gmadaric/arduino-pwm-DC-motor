




int TIMER(){

  if ((millis() - lastMillis )> timerPeriod){
    lastMillis=millis();
    
   
   return 1; 
  }

}
