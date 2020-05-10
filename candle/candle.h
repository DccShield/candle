//--------------------------------------------------------------------------------
// レイアウト用ろうそくの炎点灯用スケッチ
// [candle.h]
// Copyright (c) 2020 Ayanosuke(Maison de DCC)
// https://desktopstation.net/bb/index.php
//
// This software is released under the MIT License.
// http://opensource.org/licenses/mit-license.php
//--------------------------------------------------------------------------------

#ifndef Candle_h
#define Candle_h

class Candle
{
public:
  Candle(unsigned char ch);
  void stateCheck();
  
private:
  int CandleBright;
  int CandleTime;
  float CandleBrightPre;
  float CandleDeltBright;
  unsigned char port;
  int state;

  enum{
    ST_INIT = 0,
    ST_RUN,
    ST_STOP,
  };
  
};

#endif
