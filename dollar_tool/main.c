#include "main.h"

int main(int argc, char *argv[]){
  if(argc >= 2){
    if( !strcmp(argv[1],"-w") && argc >= 3){
      #ifdef WALLET_C
        wallet(argv[2]);
      #else
        printf("This was not compiled with WALLET_C active\n");
      #endif
    }else if( !strcmp(argv[1],"-b") && argc >= 3){
      #ifdef BANK_C
        bank(argv[2]);
      #else
        printf("This was not compiled with BANK_C active\n");
      #endif
    }else if( !strcmp(argv[1],"-i") ){
      #ifdef INIT_C
        init();
      #else
        printf("This was not compiled with INIT_C active\n");
      #endif
    }else{
      printf("Unknown option \"%s\"\n",argv[1]);
    }
  }else{
    printf("Usage: dollar [-b|-w|-i] [amount]\n");
  }
  return 0;
}
