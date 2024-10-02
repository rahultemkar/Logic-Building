/*
 Write a program to find factorial of given number.
 Input : 5
 Output : 120  (5*4*3*2*1)

 Input : -5
 Output : 120 (5*4*3*2*1)

 Input : 4
 Output : (4*3*2*1)
 
*/

#include<stdio.h>

int Factorial(int iNo){
    int i = 0;
    if(iNo < 0){
      iNo = -iNo;
    }
    for(i = iNo - 1; i > 0; i--){
      iNo = iNo * i;
    }
    return iNo;
}
int main(){
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);
    return 0;
}