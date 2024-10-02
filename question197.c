/*
  Write a program which accept one Number and position from user and off
  that bit. Return modified number.
  Input :  10   2
  Output : 8

*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos){
  if((iPos < 1) || (iPos > 32)){
    return -1;
  }

  UINT iMask = ~(1 <<  (iPos - 1));  
  iNo = iNo & iMask;
  return iNo;
}

int main(){
  UINT iValue1 = 0;
  int iPos = 0;
  UINT iRet = 0;
  printf("Enter Number : ");
  scanf("%u", &iValue1);
  printf("Enter Number : ");
  scanf("%d", &iPos);
  iRet = OffBit(iValue1, iPos);
  printf("Modified Number is : %d", iRet);
  return 0;
}