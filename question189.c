/*
  Write a program which accept one number form user and toggle
  7th and 10th bit of that number. Return modified number.

  Input : 137
  Output : 713
  
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo){
  UINT iMask1 = 0xffffff7f;
  UINT iMask2 = 0xfffffdff;
  UINT iResult = 0;
  UINT iMask = 0;
  iMask = iMask1 & iMask2;
  iResult = iMask & iNo;
  return iResult;
}

int main(){
  UINT iValue = 0;
  UINT iRet = 0;
  printf("Enter Number : ");
  scanf("%u", &iValue);

  iRet = ToggleBit(iValue);
  printf("The Number is %u", iRet);
  return 0;   
}
