/*
  Write a program which accept number from user and display below pattern.

  Input : 5
  Output : * * * * * # # # # #

  Input : 6
  Output : * * * * * * # # # # # #

  Input : -5 
  Output : * * * * * # # # # #

  Input : 2
  Output : * * # #
  
*/
#include<stdio.h>

void Display(int iNo){
  int i = 0, iCnt = 0;
    if(iNo < 0){
    iNo = -iNo;
   }
  for(i = 1; i <= iNo*2; i++){
     if(iCnt < iNo){
      printf("*");
      iCnt++;
     }else{
      printf("#");
     }
  }
}


int main(){
  int iValue = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);
  Display(iValue);
  return 0;
}