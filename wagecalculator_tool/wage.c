#include "defs.h"

double calcWageFromMinutes(int minutes, double wage){
  return (double)minutes * (wage / 60);
}
double calcWageFromHours(int hours, double wage){
  return (double)hours * wage;
}
