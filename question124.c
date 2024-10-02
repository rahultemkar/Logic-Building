/*
  Write a program which accept string from user and check
  whether it contains vowels in it or not.
  Input  :  "marvellous"
  Output :  TRUE
  Input : "Demo"
  Output : TRUE
  Input : "xyz"
  Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkVowel(char *str){
    BOOL flag = FALSE;
    while(*str != '\0'){
      if((*str == 65) || (*str == 69) || (*str == 73) || (*str == 79) || (*str == 85) || (*str == 97) || (*str == 101) || (*str == 105) || (*str == 111) || (*str == 117)){
        flag = TRUE;
      }
      *str++;
    }
  return flag;
}
int main(){
  char arr[20];
  BOOL bRet = FALSE;
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);
  bRet = ChkVowel(arr);
  if(bRet == TRUE){
    printf("It contain Vowels");
  }else{
    printf("It does not contain Vowels");
  }
  return 0;
}