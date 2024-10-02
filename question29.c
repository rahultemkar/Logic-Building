/*
  Write a program which accept number from user and display its table.
  Input : 2
  Output : 2 4 6 8 10 12 14 16 18 20 

  Input : 5
  Output : 5 10 15 20 25 30 35 40 45 50 

  Input : -5
  Output : 5 10 15 20 25 30 35 40 45 50
  
*/

#include<stdio.h>

void DisplayTable(int iNo){
  int i = 0, temp = 0;
  for(i = 1; i <= 10; i++){
    temp = iNo * i;
    printf("  %d", temp);
  }
}

int main(){
  int iValue = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);

  DisplayTable(iValue);
  return 0 ;
}