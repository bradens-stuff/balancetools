#ifndef DEFAULT_WAGE
  #define DEFAULT_WAGE 7.5
#endif
#ifndef DEFAULT_HOURS
  #define DEFAULT_HOURS 0
#endif
#ifndef DEFAULT_MINUTES
  #define DEFAULT_MINUTES 0
#endif
#ifndef INCOME_TAX
  #define INCOME_TAX 4.5
#endif

#define calcWage(x) calcWageFromMinutes(minutes,x);

double calcWageFromMinutes(int minutes, double wage);
double calcWageFromHours(int hours, double wage);
int timeInMinutes(int hours, int minutes);
double timeInHours(int hours, int minutes);
double tax(double gross);
