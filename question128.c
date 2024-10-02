/*
  Write a program which accept string from user and toggle the 
  case.
  Input : "Marvellous Multi OS"
  Output : mARVELLOUS mULTI os
*/
#include<stdio.h>

void strtogglex(char *str){
  while(*str != '\0'){
    if((*str >= 97) && (*str <= 122)){
      *str = *str - 32;
    }else if((*str >= 65) && (*str <= 90)){
      *str = *str + 32;
    }
    printf("%c", *str);
    *str++;
  }
}
int main(){
  char arr[20];
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);
  strtogglex(arr);
  return 0;
}