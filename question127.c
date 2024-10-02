/*
  Write a program which accept string from user and convert it into upper case.
  Input : "Marvellous Multi OS"
  Output : MARVELLOUS MULTI OS
*/
#include<stdio.h>

void struprx(char *str){
  while(*str != '\0'){
    if((*str >= 97) && (*str <= 122)){
      *str = *str - 32;
    }
    printf("%c", *str);
    *str++;
  }
}
int main(){
  char arr[20];
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);
  struprx(arr);
  return 0;
}