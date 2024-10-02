/*
  write a program which accepts N form user and print all odd numbers up to N.

  Input  : 18
  Output : 1 3 5 7 9 11 13
  
*/

#include<stdio.h>

void DisplayOdd(int iNo){
  int i = 0;
  for(i = 1; i < iNo; i++){
    if((i % 2) == 1){
      printf("  %d", i);
    }
  }
}

int main(){
  int iValue = 0;  
  printf("Enter Number : ");
  scanf("%d", &iValue);

  DisplayOdd(iValue);
}