/*
  Write a program which accept string from user and copy
  that characters of that string into another string by 
  converting all small characters into capital case.

  Input : "Marvellous Python 2"

  Output : "MARVELLOUS PYTHON 2"
  
*/
#include<stdio.h>
void StrCpyCap(char *src, char *dest){
  int iCnt = 0;
  while(src[iCnt] != '\0'){
    if((src[iCnt] >= 97) && (src[iCnt] <= 122)){
      src[iCnt] = src[iCnt] - 32;
    }
    dest[iCnt] = src[iCnt];
    iCnt++;
  }
 dest[iCnt] = '\0';
}

int main(){
        char arr[30] = "Marvellous Python 2";
        char brr[30];

        StrCpyCap(arr,brr);

        printf("%s",brr);

        return 0;
}