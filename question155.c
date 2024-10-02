/*
  Write a program which accept string from user and
  replace each occurrence of first character of each word 
  into capital case.
  Input : "marvellous infosystems by piyush khairnar"
  Output : "Marvellous Infosystems By Piyush Khairnar"
*/

#include<stdio.h>

void StrCap(char *str){
  if(str == NULL){
    printf("Invalied Input");
  }
  while((*str != '\0') && (*str == 32)){
    *str++;
  }
  while(*str != '\0'){
    if(*str != 32){
      *str = *str - 32;
    }
    while((*str != '\0') && (*str != 32)){
      *str++;
    }
    while((*str != '\0') && (*str == 32)){
      *str++;
    }
  } 
}

int main(){
    char arr[50] = "marvellous infosystems by piyush khairnar";
    StrCap(arr);
    printf("%s", arr);
    return 0;
}