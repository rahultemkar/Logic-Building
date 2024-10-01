/*
  Write a recursive program which accept string from 
  user and count number of small characters.

  Input : HElloWOrLD

  Output : 5
  
*/

#include<stdio.h>

int Small(char *str){
  static int iCnt = 0;
  if(*str != '\0'){
     if((*str > 97) && (*str < 122)){
      iCnt++;
     }
   *str++;
   Small(str);
  }else{
    return iCnt;
  }
}
int main(){
  char cValue[30];
  int iRet = 0;
  printf("Enter Number : ");
  scanf("%[^\n]s", &cValue);

  iRet = Small(cValue);
  printf("%d", iRet);
  return 0;
}