/*
  Write a program which 2 strings from user and concat second string
  after first string.(Implement strcat() function).

  Input : "Marvellous Infosystems"
          "Logic Building"
  
  Output : "Marvellous Infosystems Logic Building"
  
*/

#include<stdio.h>

void StrCatX(char *dest, char *src){
  int iCnt = 0, i = 0;
  while(dest[iCnt] != '\0'){
   iCnt++;
  }
  dest[iCnt] = 32;
  while(src[i] != '\0'){
     iCnt++;
     dest[iCnt] = src[i];
     i++;
  }
  dest[iCnt+1] = '\0';
}

int main(){
  char arr[50] = "Marvellous Infosystems";
  char brr[30] = "Logic Building";

  StrCatX(arr,brr);

  printf("%s", arr);

  return 0;
}
