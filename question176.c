/*
  Write a recursive program which accept string from user 
  and count white spaces.

  Input : HE llo WOr LD

  Output : 3
  
*/

#include<stdio.h>

int WhiteSpace(char *str){
  static int iCnt = 0;
  if(*str != '\0'){
     if(*str == 32){
      iCnt++;
     }
   *str++;
   WhiteSpace(str);
  }else{
    return iCnt;
  }
  
}
int main(){
  char cValue[30];
  int iRet = 0;
  printf("Enter Number : ");
  scanf("%[^\n]s", &cValue);

  iRet = WhiteSpace(cValue);
  printf("%d", iRet);
  return 0;
}