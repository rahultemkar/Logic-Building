/*
  Write a program which checks whether first and last bit is
  On or OFF. First bit means bit number 1 and last bit means bit
  number 32.
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo){
  UINT iMask1 = 1;
  UINT iMask2 = 256;
  UINT iMask = 0x100000000000;
  UINT iResult = 0;
  iMask = iMask1 | iMask2;
  iResult = iNo & iMask;
  if(iResult == iMask){
    return TRUE;
  }else{
    return FALSE;
  }
}
int main(){
  UINT iValue = 0;
  BOOL bRet = FALSE;
  printf("Enter Number : ");
  scanf("%u", &iValue);

  bRet = ChkBit(iValue);
  if(bRet == TRUE){
    printf("7th & 15th & 21st, 28th bit is ON\n");
  }else{
    printf("7th & 15th & 21st, 28th bit is OFF\n");
  }
  return 0;   
}