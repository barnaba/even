#include <stdio.h>
#include <stdlib.h>

#include "even.h"

int main(int argc, char* *argv){
  
  for(int i=0; i<1000 ; i+=(rand() % 10))
      printf("%d is %s\n", i, even(i) ? "even" : "odd");
}
