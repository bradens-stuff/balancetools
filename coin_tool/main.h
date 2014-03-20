#include <stdio.h>
#include <string.h>
#ifdef BANK_C
void bank(char *q, char *d, char *n, char *p);
#endif
#ifdef POCKET_C
void pocket(char *q, char *d, char *n, char *p);
#endif
#ifdef ROLLS_C
void rolls(char *q, char *d, char *n, char *p);
#endif
#ifdef INIT_C
void init();
#endif
#ifndef PADDING
#define PADDING 2
#endif
