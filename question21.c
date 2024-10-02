/*
  Calculate time complexity of each program

  Write a program which accept number form user and print that number of $ & * on screen.

  Input  : 5 
  Output : $ * $ * $ * $ * $ *

  Input  : 3
  Output : $ * $ * $ *

  Input  : -3
  Output : $ * $ * $ *
*/

#include<stdio.h>

void Pattern(int iNo){
   int i  = 0;
  for(i = 1; i <= iNo; i++){
   printf("$  *");
  }
}

int main(){
  int iValue = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);
  Pattern(iValue);
}
