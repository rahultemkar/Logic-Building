/*
  Write a program which accept string from user reverse that string
  in place.
  Input  :  "abcd"
  Output :  "dcba"
  Input  :  "abba"
  Output :  "abba"
*/

#include<stdio.h>

void StrRevX(char *str){
  int iCnt = 0, i = 0, j = 0;
  char temp;
  while(str[iCnt] != '\0'){
    iCnt++;
  }
  i = 0, j = (iCnt - 1);
  while(i < j){
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

int main(){
    char arr[20];
    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);
    printf("Modified string is %s", arr);

    return 0;
}