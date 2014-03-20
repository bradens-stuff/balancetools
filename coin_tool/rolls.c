#include <stdlib.h>
#include "main.h"

#ifdef ROLLS_C
void rolls(char *q, char *d, char *n, char *p){
  double total = (atof(q) * 40 * 0.25) + (atof(d) * 50 * 0.10) + (atof(n) * 40.0 * 0.05) + (atof(p) * 50.0 * 0.01);
  printf("\
  Rolls{\n\
    $10.00(40)  Quarters:\t%s\n\
    $ 5.00(50)  Dimes:   \t%s\n\
    $ 2.00(40)  Nickels: \t%s\n\
    $ 0.50(50)  Pennies: \t%s\n\
    Total:\t\t\t$%0.2f\n\
  }\n\
", q,d,n,p,total);
}
#endif
