/*
  Write a program which checks whether 5th & 18th bit is On
  or OFF.

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo){
  UINT iMask1 = 131072;
  UINT iMask2 = 16;
  UINT iMask = 0;
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
    printf("18th and 5th bit is ON\n");
  }else{
    printf("18th and 5th bit is OFF\n");
  }
  return 0;   
}