/*
  write a recursive program which accept string from user
  and count number of characters.

  Input : Hello
  Output : 5
  
*/
#include<stdio.h>
int Strlen(char *str){
  static int iCnt = 0;
  if(*str != '\0'){
    *str++;
    iCnt++;
    Strlen(str);
  }else{
    return iCnt;
  }
}

int main(){
  int iRet = 0;
  char arr[20];

  printf("Enter string : ");
  scanf("%s", arr);

  iRet = Strlen(arr);

  printf("%d", iRet);
  return 0;
}