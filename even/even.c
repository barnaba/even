#include "even.h"

static unsigned int odd(unsigned const int num){
  if(!num){
    return 0;
  }

  return even(num-1);
}

unsigned int even(unsigned const int num){
  if(!num){
    return 1;
  }

  if(num > MAX_STACK){
    return even( even( MAX_STACK ) + even( num - MAX_STACK ) );
  }

  return odd(num-1);
}

