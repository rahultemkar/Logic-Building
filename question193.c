/*
  Write a program which accept one number from user and 
  check whether 9th or 12 th bit is on or off.

  Input : 257
  Output : TRUE
*/

#include<stdio.h>

typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkBit(UINT iNo) {
    UINT iMask9 = 0x00000100;  
    UINT iMask12 = 0x00000800; 
    UINT iResult9 = 0, iResult12 = 0;
    iResult9 = iNo & iMask9;
    iResult12 = iNo & iMask12;
    if (iResult9 != 0 || iResult12 != 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    UINT iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number: ");
    scanf("%u", &iValue);
    bRet = ChkBit(iValue);
    if (bRet == TRUE) {
        printf("9th or 12th bit is ON\n");
    } else {
        printf("9th or 12th bit is OFF\n");
    }
    return 0;
}
