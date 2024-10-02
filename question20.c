/*
   write a program which accept number from user and return difference between 
   summation of all its factors and non factors.

   Input  : 12
   Output : -34  (16 - 50)

   Input  : 10
   Output : -29  (8 - 37)
   
*/
#include<stdio.h>
 
int FactDiff(int iNo){
     int Fact = 0, NonFact = 0, i = 0, FactDif = 0;
     for(i = 1; i < iNo; i++){
      if(iNo % i == 0){
         Fact = Fact + i;
      }else{
         NonFact = NonFact + i;
      }
     }
     FactDif = Fact - NonFact;
  return FactDif;
}

int main(){
   int iValue = 0;
   int iRet  = 0;
   printf("Enter Number : ");
   scanf("%d", &iValue);
   
   iRet = FactDiff(iValue);

   printf("%d", iRet);
   return 0;
}