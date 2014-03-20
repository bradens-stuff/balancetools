#include "main.h"

int main(int argc, char *argv[]){
  if(argc >= 2){
    if( !strcmp(argv[1],"-b") && argc >= 6){
      #ifdef BANK_C
        bank(argv[2], argv[3], argv[4], argv[5]);
      #else
        printf("This wasn't compiled with BANK_C active\n");
      #endif
    }else if( !strcmp(argv[1],"-p") && argc >= 6){
      #ifdef POCKET_C
        pocket(argv[2], argv[3], argv[4], argv[5]);
      #else
        printf("This wasn't compiled with POCKET_C active\n");
      #endif
    }else if( !strcmp(argv[1],"-r") && argc >= 6){
      #ifdef ROLLS_C
        rolls(argv[2], argv[3], argv[4], argv[5]);
      #else
        printf("This wasn't compiled with ROLLS_C active\n");
      #endif
    }else if( !strcmp(argv[1],"-i") ){
      #ifdef INIT_C
        init();
      #else
        printf("This wasn't compiled with INIT_C active\n");
      #endif
    }else{
      printf("Unknown option \"%s\"\n",argv[1]);
    }
  }else{
    printf("usage: coin [-b|-p|-r|-i] [quarters] [dimes] [nickels] [pennies]\n");
  }
  return 0;
}
