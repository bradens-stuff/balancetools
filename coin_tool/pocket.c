#include <stdlib.h>
#include "main.h"

#ifdef POCKET_C
void pocket(char *q, char *d, char *n, char *p){
  double total = (atof(q) * 0.25) + (atof(d) * 0.10) + (atof(n) * 0.05) + (atof(p) * 0.01);
  printf("  Pocket: %" PADDING "sQ, %" PADDING "sD, %" PADDING "sN, %" PADDING "sP\t= $%0.2f\n",q,d,n,p,total);
}
#endif
