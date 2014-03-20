#include <stdio.h>
#ifndef FILENAME
#define FILENAME "balance"
#endif
int main(){
  FILE *bal = fopen(FILENAME,"w");
  fprintf(bal,"Dollar{\n\
  Bank:   $0 000\n\
  Wallet: $  000\n\
}\n\
\n\
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
\n\
Paycheck{\n\
  Next{\n\
    0:00 (0.00) @ $7.50/hr = $0.00 (w/ tax: $0.00)\n\
  }\n\
  Current{\n\
    0:00 (0.00) @ $7.50/hr = $0.00 (w/ tax: $0.00)\n\
  }\n\
}");
  fclose(bal);
  return 0;
}
