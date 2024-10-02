/*
  Write a recursive program which accept number from user and return 
  its products of digits.

  Input : 523
  Output : 30

*/

#include<stdio.h>

int Mult(int iNo){
  static int iSum = 1;
  int temp = 0;
  if(iNo > 0){
    temp = iNo % 10;
    iSum = iSum * temp;
    iNo = iNo / 10;
    Mult(iNo);
  }else{
    return iSum;
  }
}

int main(){
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}