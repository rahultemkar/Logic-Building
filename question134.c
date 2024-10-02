/*
  Write a program which accept string from user and accept one 
  character. Return index of last occurrence of that character.
  Input  : "Marvellous Multi OS"
            M
  Output  :  11
  Input  : "Marvellous Multi OS"
            W
  Output  : -1
  Input   : "Marvellous Multi OS"
            e
  Output  : 4
*/
#include<stdio.h>

int ChkChar(char *str, char ch){
  int iCnt = 1, LastOcc = -1;
  while(*str != '\0'){
    if(*str == ch){
      LastOcc = iCnt;
    }
    iCnt++;
    *str++;
  }
  return LastOcc;
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
  printf("Index of Last Occurance is : %d\n", bRet);
  return 0;
 }