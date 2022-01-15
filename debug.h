#include "Arduino.h"

HardwareSerial Serial3(PB11, PB10);

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
#define debug(x) Serial.print(x)
#define debug1(x) Serial1.print(x)
#define debug2(x) Serial2.print(x)
#define debug3(x) Serial3.print(x)

#define debugT(x,y) Serial.print(x); Serial.print(y); Serial.print("\t");
#define debug1T(x,y) Serial1.print(x); Serial1.print(y); Serial1.print("\t");
#define debug2T(x,y) Serial2.print(x); Serial2.print(y); Serial2.print("\t");
#define debug3T(x,y) Serial3.print(x); Serial3.print(y); Serial3.print("\t");

#define debugln(); Serial.println();
#define debug1ln(); Serial.print1ln();
#define debug2ln(); Serial.print2ln();
#define debug3ln(); Serial.print3ln();
#else
#define debug(x)
#define debug1(x)
#define debug2(x)
#define debug3(x)

#define debugT(x,y)
#define debug1T(x,y)
#define debug2T(x,y)
#define debug3T(x,y)

#define debugln();
#define debug1ln();
#define debug2ln();
#define debug3ln();
#endif
