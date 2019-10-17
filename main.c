#include "headers.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {char name[15]; int GPA;};



int main(){
  struct student s0 = creation();

  printf(s0.name);
  printf("%d",s0.GPA);

}
