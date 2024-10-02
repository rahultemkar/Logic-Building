/*
  Write a program which accept string from user count number of 
  words from string

  Input  : "Marvellous Multi OS"
  Output : 3
  Input : "     Marvellous Multi     OS    Pune"
  Output : 4
  solution :
*/
#include<stdio.h>
int WordCount(char *str){
  int iCnt = 0;
  if(str == NULL){
    return -1;
  }
  while((*str != '\0') && (*str == 32)){
    *str++;
  }
  while(*str != '\0'){
  while((*str != '\0') && (*str != 32)){
    *str++;
  }
  if((*str == 32) || (*str == '\0')){
    iCnt++;
  }
  while((*str != '\0') && (*str == 32)){
    *str++;
  }
  }
  return iCnt;
}

int main(){
  int iRet = 0;
  char arr[50];
  printf("Enter String : ");
  scanf("%[^\n]s", arr);
  iRet = WordCount(arr);
  printf("Number of words in this string : %d", iRet);
  return 0;
}