/*
   Write a program which accept N and print first 5 multiples of N.
   
   Input  : 4
   Output : 4 8 12 16 20
*/

#include<stdio.h>

void DisplayMultiples(int iNo){
   int i = 0;
   for(i = 1; i <= 5; i++){
     printf("  %d", i*iNo);
   }
}

int main(){
   int iValue = 0;
   printf("Enter Number : ");
   scanf("%d", &iValue);
   DisplayMultiples(iValue);
}