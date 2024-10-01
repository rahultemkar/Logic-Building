/*
  Write a program which accept one number from user and
  range of positions from user. Toggle all bits from that 
  range.

  Input : 897    9   13
  Toggle all bits from position 9 to 13 of input 
  number ie 879.

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd){
    UINT iMask = 0;
    UINT iResult = 0;
    for(int i = iStart; i <= iEnd; i++) {
        iMask = iMask | (1 << (i - 1));  
    }
    iResult = iNo ^ iMask;
    return iResult;
}

int main(){
    UINT iValue = 0;
    int iPos1 = 0;
    int iPos2 = 0;
    UINT iRet = 0;
    printf("Enter Number: ");
    scanf("%u", &iValue);
    printf("Enter Start Position: ");
    scanf("%d", &iPos1);
    printf("Enter End Position: ");
    scanf("%d", &iPos2);
    iRet = ToggleBitRange(iValue, iPos1, iPos2);
    printf("Output is: %u\n", iRet);
    return 0;
}
