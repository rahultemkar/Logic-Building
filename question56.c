/*
  Accept number from user and display below pattern.

  Input : 5
  Output : A B C D E
  
*/
#include<stdio.h>

void Pattern(int iNo){
   int i = 0, iValue = 65;
   for(i = 1; i <= iNo; i++){
      printf("%c", iValue);
      iValue++;
   }
}
int main(){
  int iValue = 0;
  printf("Enter Number of elements : ");
  scanf("%d",&iValue);
  Pattern(iValue);
  return 0;
}