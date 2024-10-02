/*
  Draw stack layout of each program separately.
  
  Write a recursive program which display below pattern.

  Output : *  *  *  *  *

  Prototype :

*/
#include<stdio.h>
  void Display(){
     static int iNo = 0;
     if(iNo <= 4){
      printf("* ");
      iNo++;
      Display();
     }
    
  }

  int main(){
   Display();
   return 0;
  }