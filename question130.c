/*
  Write a program which accept string from user and count number of 
  white spaces  
  Input  :  "MarvellouS"
  Output  :  0
  Input  : "MarvellouS Infosystems"
  Output : 1
  Input : "MarvellouS Infosystems by Piyush Manohar Khairnnar"
  Output : 5
*/
#include<stdio.h>

int DisplayDigit(char *str){
  int iCnt = 0;
  while(*str != '\0'){
    if(*str == 32){
      iCnt++;
    }
    *str++;
  }
  return iCnt;
}
int main(){
  char arr[20];
  int iRet = 0;
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);
  iRet = DisplayDigit(arr);
  printf("%d", iRet);
  return 0;
}