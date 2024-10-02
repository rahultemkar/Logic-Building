/*
  Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
  Input  :  "Marvellous Multi OS"
             e
  Output : TRUE
  Input : "Marvellous Multi OS"
             W
  Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
 typedef int BOOL;

 BOOL ChkChar(char *str, char ch){
  BOOL Flag = FALSE;
  while(*str != '\0'){
    if(*str == ch){
      Flag = TRUE;
    }
    *str++;
  }
  return Flag;
 }
 int main(){
  char arr[20];
  char cValue;
  BOOL bRet = FALSE;
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);

  printf("Enter the character : ");
  while (getchar() != '\n');
  cValue = getchar();
  
  bRet = ChkChar(arr, cValue);
  if(bRet == TRUE){
    printf("Character found : ");
  }else{
    printf("Character Not Found");
  }
  return 0;
 }
