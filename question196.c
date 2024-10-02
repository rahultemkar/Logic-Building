/*
  Write a program which accept one number and position from user and check whether bit at 
  that position is on or Off. If bit is one return TRUE otherwise return FALSE.
  Input  :  10   2
  Output :  TRUE

*/
#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos){
  if(iPos < 1 || iPos > 32){
    return FALSE;
  }
  UINT iMask = 1 << (iPos - 1);
  if(iNo & iMask){
    return TRUE;
  } else {
    return FALSE;
  }
}

int main(){
  UINT iValue = 0;
  int iNum = 0;
  BOOL bRet = FALSE;
  printf("Enter Number : ");
  scanf("%u", &iValue);
  printf("Enter position : ");
  scanf("%d", &iNum);
  bRet = ChkBit(iValue, iNum);
  if(bRet == TRUE){
     printf("Bit is ON\n");
  } else {
     printf("Bit is OFF\n");
  }
  return 0;
}

