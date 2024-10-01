/*
  Write a program which check whether 15th bit is On or OFF.

  typedef int BOOL
  typedef unsigned int UNIT

*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo){
  UINT iMask = 16384;
  UINT iResult = 0;

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
    printf("15th bit is ON\n");
  }else{
    printf("15th bit is OFF\n");
  }
  return 0;   
}