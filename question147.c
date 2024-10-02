/*
  Write a program which 2 strings from user and check whether contents of two strings are equal or not.
  (Implement strcmp() function).

  Input : "Marvellous Infosystems"
          "Marvellous Infosystems"

  Output : TRUE

*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL StrCmpX(char *src, char *dest){
  while((*src != '\0') && (*dest != '\0')){
    *src++;
    *dest++;
  }

  if((*src == '\0') && (*dest == '\0')){
    return TRUE;
  }else{
    return FALSE;
  }
}

int  main(){
  BOOL bret = TRUE;
  char arr[50] = "Marvellous Infosystems";
  char brr[30] = "Marvellous Infosystems";

  bret =StrCmpX(arr,brr);

if(bret == TRUE){
  printf("Both strings are equal");
}else{
  printf("Both strings are not equal");
}
 return 0;
}