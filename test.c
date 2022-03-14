#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <inttypes.h>

#include "even.h"

int main(int argc, char* *argv){
  
  for(int i=UINT_MAX; i > UINT_MAX-10; --i)
      printf("%u is %s\n", i, even(i) ? "even" : "odd");

  for(int i=0; i < 10; ++i)
      printf("%u is %s\n", i, even(i) ? "even" : "odd");
}
