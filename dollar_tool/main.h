#include <stdio.h>
#include <string.h>
#ifdef BANK_C
  void bank(char *d);
#endif
#ifdef WALLET_C
  void wallet(char *d);
#endif
#ifdef INIT_C
  void init();
#endif
#ifndef PADDING
  #define PADDING "4"
#endif
