/*
  Write a program which accept area in square feet and convert
  it into  square meter. (1 Square feet = 0.0929 Square meter)

  Input : 5
  Output : 0.464515

  Input : 7
  Output : 0.650321
  
*/

#include<stdio.h>

double SquareMeter(int iValue){
    float SMeter = 0.0f, SFeet = 0.0929;
    SMeter = SFeet * iValue;
    return SMeter;
}
int main(){
  int iValue = 0;
  double dRet = 0.0;

  printf("Enter Area in square feet : ");
  scanf("%d", &iValue);

  dRet = SquareMeter(iValue);
  printf("Area in Square Meter : %d", dRet);
  return 0;
}