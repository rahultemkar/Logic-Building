/*
   Create separate visual studio project for each problem statement separately.
   Calculate Time Complexity of each program.

   1. Write a program which accept number form user and display its multiplication of factors.

   Input : 12
   output : 144 (1 * 2 * 3 * 4 * 6)

   Input  : 13
   output : 1  (1)

   Input  : 10
   Output  : 10  (1 * 2 * 5)

 */ 

#include<stdio.h>

int MultFact(int iNo){
   int i = 0, iSum = 1;
  for(i = 1; i <= (iNo / 2); i++){
      if((iNo % i) == 0 ){
       iSum = iSum * i;
      }
  }
  return iSum;
}
int main(){
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : ");
  scanf("%d",&iValue);

  iRet = MultFact(iValue);
  printf("%d",iRet);

  return 0;
}
 