/*
 Write a program which accept distance in kilometer and convert
 it into meter. (1 kilometer = 1000 Meter)

 Input : 5
 Output : 5000

 Input : 12
 Output : 12000
 
*/
#include<stdio.h>

int KMtoMeter(int iNo){
   int Meter = 1000;
   iNo = iNo * Meter;
   return iNo;
}
int main(){
    int iValue = 0, iRet = 0;
    printf("Enter Distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in Meter : %d", iRet);
    return 0;
}