/*
  Write a program which accept number from user and return difference between 
  summation of even digits and summation of odd digits.

  Input : 2395
  Output : -15 (2 - 17)

  Input : 1018
  Output : 6 (8 - 2)

  Input : 8440
  Output : 16 ( 16 - 0)

  Input : 5733
  Output : -18 ( 0 - 18)
  
*/
#include<stdio.h>

int CountDiff(int iNo){
  int iDigit = 0, Even = 0, Odd = 0, iSum = 0;
  while(iNo != 0){
    iDigit = iNo % 10;
    if((iDigit % 2) == 0){
      Even = Even + iDigit;
    }
    if((iDigit % 2) != 0){
      Odd = Odd + iDigit;
    } 
    iNo = iNo / 10;
  }
  iSum = Even - Odd;
  return iSum;
}
int main(){
  int iValue = 0;
  int iRet = 0;

  printf("Enter Number : ");
  scanf("%d", &iValue);

  iRet = CountDiff(iValue);
  printf("%d", iRet);
  return 0;
}