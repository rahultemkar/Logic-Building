/*
  Write a program which accept one number from user and toggle 7th bit of 
  that number. Return modified number.

  Input : 137
  Output : 201
  
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo){
  UINT iMask = 0xffffff7f;
  UINT iResult = 0;
  iResult = iMask & iNo;
  return iResult;
}

int main(){
  UINT iValue = 0;
  UINT iRet = 0;
  printf("Enter Number : ");
  scanf("%u", &iValue);

  iRet = OffBit(iValue);
  printf("The Number is %u", iRet);
  return 0;   
}