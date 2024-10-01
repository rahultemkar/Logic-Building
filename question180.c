/*
  Write a recursive program which accept number from user and return
  its reverse number.

  Input : 523
  Output : 325
*/

#include<stdio.h>

int Reverse(int iNo){
  static int Rev = 0;
  int temp = 0;
  if(iNo > 0){
     temp = iNo % 10;
     Rev = (Rev * 10) + temp;
     iNo = iNo / 10;
     Reverse(iNo);
  }
  return Rev;
}

int main(){
  int iValue = 0, iRet = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);
 
  iRet = Reverse(iValue);
  printf("%d", iRet);
  return 0;
}