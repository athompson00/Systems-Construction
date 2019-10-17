#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {char name[15]; int GPA;};

struct student creation(){
  struct student s0;
  s0.name = "initial";
  srand(time(0));
  s0.GPA = rand();
  return s0;
}
