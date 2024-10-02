/*
  Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
  Input : "MarvellouS" 
  Output :  6 (8 - 2)          
*/

#include<stdio.h>

int CountFrequency(char *str){
  int iCapCnt = 0, iSmaCnt = 0, iFreq = 0;
  while(*str != '\0'){
    if((*str >= 65) && (*str <= 90)){
      iCapCnt++;
    }else if((*str >= 97) && (*str <= 122)){
      iSmaCnt++;
    }
    *str++;
  } 
  iFreq = iSmaCnt - iCapCnt;
  return iFreq;
}
int main(){
  char arr[20];
  int iRet = 0;
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);

  iRet = CountFrequency(arr);
  printf("Frequency Difference : %d", iRet);
  return 0;
}