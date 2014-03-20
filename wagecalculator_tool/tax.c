#include "defs.h"
#ifdef INCOME_TAX
  double tax(double gross){
    return gross * (INCOME_TAX / 100);
  }
#else
  double tax(double gross){
    return gross;
  }
#endif
