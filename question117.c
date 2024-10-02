/*
  Accept Character from user. If character is small display
  its corresponding capital character, and if it small then 
  display its corresponding capital. In other cases display as it is.
  Input : Q
  Output : q
  Input : m
  Output : M
  Input : 4
  Output : 4
  Input : %
  Output : %
*/

#include<stdio.h>

void Display(char ch){
  if((ch >= 97) && (ch <= 122)){
    ch = ch - 32;
  }else if((ch >= 65) && (ch <= 90)){
    ch = ch + 32;
  }
  printf("%c", ch);
}
int main(){
  char cValue = '\0';
  printf("Enter the Character : ");
  scanf("%c", &cValue);
  Display(cValue);
  return 0;
}