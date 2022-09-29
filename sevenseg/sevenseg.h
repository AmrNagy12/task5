#ifndef sevenseg_h
#define sevenseg_h
#include "Arduino.h"

#define byte short
class sevenseg{
  private:
  short zero[8] = {1, 1, 1, 1, 1, 1, 0, 0};
  short one[8] =  {0, 1, 1, 0, 0, 0, 0, 0};
  short two[8] = {1, 1, 0, 1, 1, 0, 1, 0};
  short three[8] = {1, 1, 1, 1, 0, 0, 1, 0};
  short four[8] = {0, 1, 1, 0, 0, 1, 1, 0};
  short five[8] = {1, 0, 1, 1, 0, 1, 1, 0};
  short six[8] = {1, 0, 1, 1, 1, 1, 1, 0};
  short seven[8] = {1, 1, 1, 0, 0, 0, 0, 0};
  short eight[8] = {1, 1, 1, 1, 1, 1, 1, 0};
  short nine[8] = {1, 1, 1, 1, 0, 1, 1, 0};
  short p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8;
  short disnum;
  unsigned dlank;
  int pins[8] = {p1 , p2 ,p3 , p4 ,p5 ,p6 ,p7 , p8};
  public:
    void beging();
    void displaynumcath(byte);
    void displaynumanode(byte);
    void flashing(unsigned int);
    void clear();
    sevenseg(byte pin1 , byte pin2 , byte pin3 , byte pin4 , byte pin5 , byte pin6 , byte pin7 , byte pin8);
};
#endif
