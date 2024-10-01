/*
  Write generic program to find largest number from three numbers.

*/

#include<iostream>
using namespace std;

template<class T>
T Max(T iNo1, T iNo2, T iNo3){
   T iMax = 0;
   if(iNo1 > iMax){
    iMax  = iNo1;
   }
   if(iNo2 > iMax){
    iMax  = iNo2;
   }
   if(iNo3 > iMax){
    iMax  = iNo3;
   }
   return iMax;
}

int main(){
  int iValue1 = 50, iValue2 = 100, iValue3 = 80;
  int iRet = 0;
  
  iRet = Max(iValue1, iValue2, iValue3);
  printf("%d", iRet);
  return 0;
}