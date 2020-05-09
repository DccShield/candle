#include "candle.h"

Candle CandleA = Candle(3); 
Candle CandleB = Candle(5); 
Candle CandleC = Candle(6); 
Candle CandleD = Candle(9); 
Candle CandleE = Candle(10); 
Candle CandleF = Candle(11); 
  
void setup() {
}

void loop() {
  CandleA.stateCheck();
  CandleB.stateCheck();
  CandleC.stateCheck();
//  CandleD.stateCheck();
//  CandleE.stateCheck();
//  CandleF.stateCheck();
}
