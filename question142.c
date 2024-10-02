/*
  Write a program which accept string from user and copy
  that characters of that string into another string by 
  removing all white spaces.

  Input : "Marvel lous Pyth on"

  Output : "MarvellousPython"

*/
#include<stdio.h>

void StrCpyX(char *src, char *dest){
  int iCnt = 0, i = 0;
  while(src[iCnt] != '\0'){
    if(src[iCnt] != 32){
    dest[i] = src[iCnt];
    i++;
    }
   iCnt++;
  }
  dest[iCnt] = '\0';
}

int main(){
  char arr[30] = "Marvel lous Pyth on";
  char brr[30];

  StrCpyX(arr,brr);
  printf("%s", brr);

  return 0;
}