/*
  Write a recursive program which accept number from user
  and return largest digit

  Input : 87983

  Output : 9

*/

#include<stdio.h>

int Max(int iNo){
   static int iMax = 0;
   int temp = 0;
   if(iNo > 0){
    temp = iNo % 10;
    if(temp > iMax){
      iMax = temp;
    }
    iNo = iNo / 10;
    Max(iNo);
   }else{
    return iMax;
   }
}

int main(){
  int iValue = 0, iRet = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);

  iRet = Max(iValue);
  printf("%d", iRet);
  return 0;
}