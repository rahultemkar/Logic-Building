/*
  Write a program which accept one number, two positions from user 
  and toggle that bit. Return modified number.
  Input  : 10  3  
  Output : 14
  
*/
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define FALSE 0
#define TRUE 1

UINT ToggleBit(UINT iNo, int iPos1){
  if((iPos1 < 1) || (iPos1 > 32)){
    return -1;
  }
  UINT iMask1 = 1 << (iPos1 - 1);
  iNo = iNo ^ iMask1;
  return iNo;  
}

int main(){
  UINT iValue = 0;
  int iNum1 = 0;
  UINT iRet = 0;
  printf("Enter Number : ");
  scanf("%u", &iValue);
  printf("Enter First Pos Number : ");
  scanf("%d", &iNum1);
  iRet = (iValue, iNum1);
  if(iRet == (-1)){
    printf("Invalied Position");
  }else{
  printf("Modified Number is : %u", iRet);
  }
  return 0;
}
