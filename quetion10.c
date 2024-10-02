//5. Accept number from user and check weather number is even or odd

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo){
   
    if((iNo % 2) == 0){
        return TRUE;
    }else{
        return FALSE;
    }
   
}

int main(){
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE){
        printf("Number is Even");
    }else{
        printf("Number is odd");
    }
    
    return 0;

}