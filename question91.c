/*
  Accept N numbers from user and return diffrence between summation
  of even elements and summation of odd elements.

  Input : N :   6
       Elements : 85   66  3  80  93  88
  Output : 53  (234 - 181)

  program layout :
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength){
  int i = 0, iEven = 0, iOdd = 0, iDiff = 0;
  for(i = 0; i < iLength; i++){
    if((Arr[i] % 2) == 0){
      iEven = iEven + Arr[i];
    }else{
      iOdd = iOdd + Arr[i];
    }
  }
  iDiff = iEven - iOdd;
  return iDiff;
}
int main(){
  int iSize = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter Number of elements : ");
  scanf("%d", &iSize);

  p = (int*)malloc(iSize* sizeof(int));

  if(p == NULL){
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter %d elements", iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++){
    printf("Enter element  %d : ", iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  iRet = Difference(p, iSize);
  printf("Result is %d", iRet);
  free(p);
  return 0;
}