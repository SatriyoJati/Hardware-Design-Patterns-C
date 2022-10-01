#ifndef MotorData_H
#define MotorData_H

#include "Hardware_Proxy.h"
typedef struct MotorData MotorData;

struct MotorData{
  unsigned char on_off;
  DirectionType direction;
  unsigned int speed;
  unsigned char errorstatus;
  unsigned char noPowerError;
  unsigned char noTorqueError;
  unsigned char BITError;
  unsigned char overTemperatureError;
  unsigned char reservedError1;
  unsigned char reservedError2;
  unsigned char unknownError;
}

#endif
