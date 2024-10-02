/*
  Accept Character from user and check whether it is digit or not 
  (0 - 9).

  Input : 7
  Output : TRUE
  Input : d
  Output : FALSE
  
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch){
  BOOL Flag = FALSE;
  if((ch > 48) && (ch < 57)){
    Flag = TRUE;
  }
  return Flag;
}
int main(){
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character : ");
  scanf("%c", &cValue);

  bRet = ChkDigit(cValue);
  if(bRet == TRUE){
    printf("It is Digit");
  }
  else{
    printf("It is not a Digit");
  }
  return 0;
}