/*
  Write a recursive program which accept number from user and 
  return summation of its digits.

  Input : 879

  Output : 24

*/
#include<stdio.h>

int Sum(int iNo){
  int temp = 0;
  static int iSum = 0;
  if(iNo > 0){
    temp = iNo % 10;
    iSum = iSum + temp;
    iNo = iNo / 10;
    Sum(iNo);
  }else{
    return iSum;
  }
}

int main(){
  int iValue = 0, iRet = 0;
  printf("Enter number : ");
  scanf("%d", &iValue);

  iRet = Sum(iValue);
  printf("%d",iRet);

  return 0;
}