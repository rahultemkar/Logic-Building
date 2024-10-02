/*
  Write a program which accept string from user and copy
  that characters of that string into another sting by 
  converting all capital charscters into small case.

  Input : "Marvellous Python 2"

  Output : "marvellous python 2"
  
*/
#include<stdio.h>

void StrCpySmall(char *src, char *dest){
  int iCnt = 0;
  while(src[iCnt] != '\0'){
     if((src[iCnt] >= 65) && (src[iCnt] <= 90)){
      src[iCnt] = src[iCnt] + 32;
     }
     dest[iCnt] = src[iCnt];
    iCnt++;
  }
  dest[iCnt] = '\0';
}

int main(){
  char arr[30] = "Marvellous Python 2";
  char brr[30];

  StrCpySmall(arr,brr);
  printf("%s", brr);
  return 0;
}