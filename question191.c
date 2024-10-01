/*
   Write a entry point function to call below helper fuction

   Write a program which accept one number from user and count
   number of ON (1) bits in it without using % and ? operator.
   
   Input : 11
   Output : 3
*/

#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo) {
    int iCount = 0;
    while (iNo != 0) {
        iCount = iCount  + (iNo & 1);
        iNo >>= 1;
    }
    return iCount;
}

int main(){
  UINT iValue = 0;
  int iRet = 0;
  printf("Enter Number : ");
  scanf("%u", &iValue);
  iRet = CountOne(iValue);
  printf("Output is %d", iRet);
  return 0;   
}