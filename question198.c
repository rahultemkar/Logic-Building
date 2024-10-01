/*
  Write a program which accept one number from user and position from user  and on
  that bit. Return modified number.
  
  Input : 10  3
  Output : 14
  
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos){
  if((iPos < 1) || (iPos > 32)){
    return -1;
  }

  UINT iMask = (1 <<  (iPos - 1));  
  iNo = iNo | iMask;
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