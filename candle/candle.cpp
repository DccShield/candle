//--------------------------------------------------------------------------------
// レイアウト用ろうそくの炎点灯用スケッチ
// [candle.cpp]
// Copyright (c) 2020 Ayanosuke(Maison de DCC)
// https://desktopstation.net/bb/index.php
//
// This software is released under the MIT License.
// http://opensource.org/licenses/mit-license.php
//--------------------------------------------------------------------------------

#include <Arduino.h>
#include"candle.h"

// コンストラクタ
Candle::Candle( unsigned char ch)
{
  port = ch;
  pinMode(port, OUTPUT);
  CandleBright = 0;
  CandleBrightPre = 250;
  CandleTime = 0;
  CandleDeltBright = 0;
  state = ST_INIT;
}  

void Candle::stateCheck()
{
  static unsigned long Previous;
  static int CandleBrink;
  
  switch(state){
    case ST_INIT:
                  CandleBrink = 0;
                  CandleBright = rand() % 250;
                  CandleTime = rand() %20+1;
                  CandleDeltBright =(float)( CandleBrightPre- CandleBright ) / (float)CandleTime; 
                  state = ST_RUN;
                  break;
    case ST_RUN:
                  if((millis() - Previous) >= 10) { 
                    CandleBrightPre = CandleBrightPre - CandleDeltBright;
                    
                    if(CandleBrightPre >= 255){
                      CandleBrightPre = 255;
                      CandleBrink = CandleTime;
                      state = ST_INIT;
                    } else if(CandleBrightPre <= 0){
                      CandleBrightPre = 0;
                      CandleBrink = CandleTime;
                      state = ST_INIT;
                    }
                      
                    analogWrite(port, CandleBrightPre);
                             
                    CandleBrink = CandleBrink + 1;
                    
                    if( CandleTime <= CandleBrink ){
                      CandleBrightPre = CandleBright;
                      state = ST_INIT;
                    }
                    Previous = millis();
                  }
                  break;
    default:
                  break;
  }
}
