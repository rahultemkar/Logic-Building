/*
  Write a program which accept string from user and accept one 
  character. Return frequency of that character.
  Input : "Marvellous Multi OS"
           M
  Output : 2
  Input  : "Marvellous Multi  OS"
           W
  Output  : 0
*/
#include<stdio.h>

int ChkChar(char *str, char ch){
  int iCnt = 0;
  while(*str != '\0'){
    if(*str == ch){
      iCnt++;
    }
    *str++;
  }
  return iCnt;
 }
 int main(){
  char arr[20];
  char cValue;
  int bRet = 0;
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);

  printf("Enter the character : ");
  while(getchar() != '\n');
  cValue = getchar();
  
  bRet = ChkChar(arr, cValue);
  printf("Frequency of character is : %d\n", bRet);
  return 0;
 }