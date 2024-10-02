/*
  Accept Character from user and check whether it is special symbol
  or not (!, @, #, $, %, ^, &, *).

  Input :  %
  Output : TRUE
  Input : d
  Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef BOOL;

BOOL ChkSpecial(char ch){
  BOOL flag = FALSE;
  if((ch == 21) && (ch == 40) && (ch == 35) && (ch == 36) && (ch == 37) && (ch == 94) && (ch == 38) && (ch == 42)){
    flag = TRUE;
  }
  return flag;
}
int main(){
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character : ");
  scanf("%c", &cValue);

  bRet = ChkSpecial(cValue);

  if(bRet == TRUE){
    printf("It is special Character ");
  }else{
    printf("It is not a special Character ");
  }
  return 0;
}