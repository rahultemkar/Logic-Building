/*
  Write a program which accept two numbers from user and display
  position of common ON bits from that two numbers.

  Input  :  10  15   (1010   1111)
  Output :  2   

*/
#include<stdio.h>
typedef unsigned int UINT;

int CommonBits(UINT iNo1, UINT iNo2){
   UINT iMask = 0;
   int iCount = 0;
   iMask = iNo1 & iNo2;
   while(iMask != 0){
    iCount = iCount + (iMask & 1);
    iMask >>= 1;
   }
   return iCount;
}

int main(){
  UINT iValue1 = 0;
  UINT iValue2 = 0;
  int iRet = 0;
  printf("Enter First Number : ");
  scanf("%u", &iValue1);
  printf("Enter Second Number : ");
  scanf("%u", &iValue2);
  iRet = CommonBits(iValue1, iValue2);
  printf("Output is %d", iRet);
  return 0;  
}
