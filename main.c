#include "headers.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main(){
  struct student s0 = creation();

  printf("%s",s0.name);
  printf("%d",s0.GPA);

}
