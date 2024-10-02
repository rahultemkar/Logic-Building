/*
  Write a program which 2 strings from user and check
  whether first N contents of two strings are equal or not.
  (Implement strcmp() function).
  Note : If third parameter is greater than the size of second
  string then concat whole string after first string.

  Input : "Marvellous Infosystems"
          "Marvellous Logic Building"
          10

  Output : TRUE
  
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL StrNCmpX(char *src, char *dest, int iCnt){
        int i = 0;
        while(((src[i] != '\0') && (src[i] != '\0')) && (i < iCnt)){
            if(src[i] != dest[i]){
              return FALSE;
            }
            i++;
        }
        if(iCnt <= i){
          return TRUE;
        } else {
          return FALSE;
        }
}
int main(){
        BOOL bret = TRUE;
        int iValue = 0;
        char arr[50] = "Marvellous Infosystems";
        char brr[30] = "Marvellous Logic Building";
        printf("Enter Number : ");
        scanf("%d", &iValue);

        bret = StrNCmpX(arr, brr, 10);

        if(bret == TRUE){
        printf("Both strings are equal");
        }
        else{
        printf("Both strings are not equal");
        }
        return 0;
}
