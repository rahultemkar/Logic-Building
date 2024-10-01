/*
  Write a program which accept one number from user and toggle contents of first
  and last nibble of the number. Return modified number. (Nibble is a group of four bits)
  
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo){
  UINT iMask = 0xF000000F; 
  iNo = iNo ^ iMask;
  return iNo;
}
int main(){
  UINT iValue = 0;
  int iNum = 0;
  UINT iRet = 0;
  printf("Enter Number : ");
  scanf("%u", &iValue);
  printf("Enter First Pos Number : ");
  scanf("%d", &iNum);
  iRet = (iValue, iNum);
  if(iRet == (-1)){
    printf("Invalid Position");
  }else{
    printf("Modified Number is : %u", iRet);
  }
  return 0;
}

