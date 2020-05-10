//--------------------------------------------------------------------------------
// レイアウト用ろうそくの炎点灯用スケッチ
// [candle.ino]
// Copyright (c) 2020 Ayanosuke(Maison de DCC)
//
// http://maison-dcc.sblo.jp/ http://dcc.client.jp/ http://ayabu.blog.shinobi.jp/
// https://twitter.com/masashi_214
//
// DCC電子工作連合のメンバーです
// https://desktopstation.net/tmi/ https://desktopstation.net/bb/index.php
//
// This software is released under the MIT License.
// http://opensource.org/licenses/mit-license.php
//--------------------------------------------------------------------------------

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
