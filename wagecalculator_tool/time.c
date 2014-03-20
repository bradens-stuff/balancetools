#include "defs.h"

int timeInMinutes(int hours, int minutes){
  return (hours * 60) + minutes;
}
double timeInHours(int hours, int minutes){
  return (double)hours + ((double)minutes/(double)60);
}
