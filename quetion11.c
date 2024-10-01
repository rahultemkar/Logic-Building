/*1. Write a program which accept one number from user and print that number of even numbers on screen. 

Input  : 7
Output : 2 4 6 8 10 12 14

*/

#include<stdio.h>

void PrintEven(int iNo){
    
    if(iNo <= 0){
        return;
    }

    int iCnt = 2;

    while (iCnt <= iNo*2 ){

       if((iCnt % 2) == 0 ){

        printf("%d\t", iCnt);

       }

       iCnt++;
    }
}

int main(){
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d", & iValue);

    PrintEven(iValue);

    return 0;
}

