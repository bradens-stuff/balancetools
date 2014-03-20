#include "main.h"
#ifdef INIT_C
void init(){
  printf("\
Coin{\n\
  Bank:    0Q,  0D,  0N,  0P\n\
  Pocket:  0Q,  0D,  0N,  0P\n\
  Rolls{\n\
    $10.00(40)  Quarters: 0\n\
    $ 5.00(50)  Dimes:    0\n\
    $ 2.00(40)  Nickels:  0\n\
    $ 0.50(50)  Pennies:  0\n\
  }\n\
}\n\
");
}
#endif
