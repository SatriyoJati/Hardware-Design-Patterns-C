#include "Sensor.h"

void Sensor_Init(Sensor* const me);

void Sensor_CleanUp(Sensor* const me);

int Sensor_getFilterFrequency(const Sensor* const me){
  return me->filterFrequency;
}
