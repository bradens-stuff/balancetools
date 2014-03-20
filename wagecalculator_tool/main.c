#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
void help(void){
  printf("Usage: wagecalculator [hours] [minutes] [wage]\n");
}
int main(int argc, char *argv[]){
  int _hours = argc>=2 ? atoi(argv[1]) : DEFAULT_HOURS;
  int _minutes = argc>=3 ? atoi(argv[2]) : DEFAULT_MINUTES;
  int minutes = timeInMinutes(_hours, _minutes);
  double hours = timeInHours(_hours, _minutes);
  double wage = argc>=4 ? atof(argv[3]) : DEFAULT_WAGE;
  double gross = calcWage(wage);
  printf("    %d:%02d (%0.2f) @ $%0.2f/hr = $%0.2f (w/ tax: $%0.2f)\n",
      _hours, _minutes, hours, wage, gross, gross - tax(gross));
  return 0;
}
