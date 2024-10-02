/*
  Write a recursive program which display below pattern.

  Input : 6
  Output : A B C D E F 
  
*/
#include<stdio.h>
void Display(int iNo){
  static char arr = 0;
  if(arr < iNo){
    printf("%c", (arr + 65));
    arr++;
    Display(iNo);
  }
}

int main(){
  int iValue = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);

  Display(iValue);
  return 0;
}