/*
  Write a program which accept string from user and 
  return length of largest word.

  Input : "Marvellous Multi OS Infosystems"

  Output : 11

*/

#include<stdio.h>
int WordCount(char *str){
  int iMax = 1, temp  = 0;
  if(str == NULL){
    return -1;
  }
  while((*str != '\0') && (*str == 32)){
    *str++;
  }
  while(*str != '\0'){
  while((*str != '\0') && (*str != 32)){
      if(iMax > temp){
          temp = iMax;
      }
    *str++;
    iMax++;
  }
  
  while((*str != '\0') && (*str == 32)){
      iMax = 1;
    *str++;
  }
  }
  iMax = temp;
  return iMax;
}

int main(){
  int iRet = 0;
  char arr[50];
  printf("Enter String : ");
  scanf("%[^\n]s", arr);
  iRet = WordCount(arr);
  printf("Length of largest words in this string : %d", iRet);
  return 0;
}