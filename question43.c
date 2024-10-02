/*
  write a program which accept range from user and return addition of all
  numbers in between that range. (Range should contains
  positive numbers only)

  Input  : 23 30
  Output : 212

  Input  : 10 18
  Output : 126

  Input  : -10 2
  Output : Invalid range

  Input  : 90 18
  Output : Invalid range
  
*/

#include<stdio.h>
int RangeSum(int iStart, int iEnd){
   int i = 0, iSum  = 0;
   if((iEnd < iStart) && (iStart < 0)){
    printf("Invalid Range");
   }
   for(i = iStart; i <= iEnd; i++){
     iSum = iSum + i;
   }
   return iSum;
}
int main(){
  int iValue1 = 0, iValue2 = 0, iRet = 0;

  printf("Enter Starting point : ");
  scanf("%d", &iValue1);

  printf("Enter Ending Point : ");
  scanf("%d", &iValue2);

  iRet = RangeSum(iValue1, iValue2);
  printf("Addition is %d", iRet);
  return 0;
}