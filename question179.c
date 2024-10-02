/*
  Write a recursive program which accept number from user 
  and return smallest digit

  Input : 87983
  Output : 3
*/

#include<stdio.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

int Min(int iNo){
   static int iMin = 0;
   static BOOL flag = FALSE;
   int temp = 0;
   if(iNo > 0){
    temp = iNo % 10;
    if(temp < iMin){
      iMin = temp;
    }else if(flag == FALSE){
      iMin = temp;
      flag = TRUE;
    }
    iNo = iNo / 10;
    Min(iNo);
   }else{
    return iMin;
   }
}

int main(){
  int iValue = 0, iRet = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);

  iRet = Min(iValue);
  printf("%d", iRet);
  return 0;
}