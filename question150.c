/*
Accept string from user and check whether the string is palindrome
or not without considering its case.
Input : "1abccBA1"
Output : TRUE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL StrPallindrome(char *str){
  int iCnt = 0, j = 0;
  while(str[iCnt] != '\0'){
    if((str[iCnt] >= 65) && (str[iCnt] <= 90)){
        str[iCnt] = str[iCnt] + 32;
    }
    iCnt++;
  }
  while(j < iCnt){
    iCnt--;
    if(str[j] != str[iCnt]){
      return FALSE;
    }
    j++;
  }
  return TRUE;
}
int main(){
  BOOL bret = FALSE;
  char arr[20] = "abcdBA";
  bret = StrPallindrome(arr);
  if(bret == TRUE){
    printf("String is pallindrome\n");
  }else{
    printf("String is not pallindrome\n");
  }
  return 0;
}