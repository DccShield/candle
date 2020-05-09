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
