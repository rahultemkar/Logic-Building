/*
  Write a program which check whether 7th & 15th & 21st,
  28th bit is On or OFF.
   28          21       20      19      18       17     16     15     14    13    12     11    10    9    8   7   6    5   4  3  2  1
268435456   2097152   1048576 524288  262144  131072  65536  32768  16384  8192  4096  2048  1024  512  256  128  64  32  16  8  4  2
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo){
  UINT iMask1 = 128;
  UINT iMask2 = 32768;
  UINT iMask3 = 2097152;
  UINT iMask4 = 268435456;
  UINT iMask = 0;
  UINT iResult = 0;
  iMask = iMask1 | iMask2 | iMask3 | iMask4;
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