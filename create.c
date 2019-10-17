#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"



struct student creation(){
  struct student s0;
  s0.name = "initial";
  srand(time(0));
  s0.GPA = rand() % 100;
  return s0;
}
