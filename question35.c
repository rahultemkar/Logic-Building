/*
 write a program which returns difference between Even factorial and odd factorial of given number.

 Input : 5
 Output : -7 (8 - 15)

 Input : -5
 Output : -7 (8 - 15)

 Input : 10
 Output : 2895 (3840 - 945)
 
*/


#include<stdio.h>
int FactorialDiff(int iNo){
    int i = 0, EvenFact = 1, OddFact = 1, FactDiff = 0;
    for(i = 1; i < iNo; i++){
        if((i % 2) == 0){
          EvenFact = EvenFact * i; 
        }else{
          OddFact = OddFact * i;
        }
    }
    FactDiff = EvenFact - OddFact;
    return FactDiff;
}

int main(){
    int iValue = 0, iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d",iRet);

    return 0;
}