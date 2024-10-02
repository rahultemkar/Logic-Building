/*
  Write a program which accept one number, two positions
  from user and check whether bit at first or bit at second
  position is ON or OFF.

  Input :  10  3  7
  Output : TRUE  
*/

#include<stdio.h>

typedef unsigned int UINT;
#define FALSE 0
#define TRUE 1
typedef int BOOL;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2) {
    UINT iMask1 = 1 << (iPos1 - 1); 
    UINT iMask2 = 1 << (iPos2 - 1); 
    UINT iResult1 = 0, iResult2 = 0;
    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if (iResult1 != 0 || iResult2 != 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    UINT iValue = 0;
    int iPo1 = 0;
    int iPo2 = 0;
    BOOL bRet = FALSE;
    printf("Enter Number: ");
    scanf("%u", &iValue);
    printf("Enter Position First: ");
    scanf("%d", &iPo1);
    printf("Enter Position Second: ");
    scanf("%d", &iPo2);
    bRet = ChkBit(iValue, iPo1, iPo2);
    if(bRet == TRUE) {
        printf("Bit is ON\n");
    } else {
        printf("Bit is OFF\n");
    }
    return 0;
}
