/*
  Accept N numbers from user and return difference between frequency of even number and odd numbers.

  Input : N :   7
      Elements : 85  66 3 80 93 88 90
  Output :  1 (4 - 3)

  Program Layout :
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength){
  int i = 0, ECnt = 0, OCnt = 0, iDiff = 0;
  for(i = 0; i < iLength; i++){
    if((Arr[i] % 2) == 0){
      ECnt++;
    }else{
      OCnt++;
    }
  }
  iDiff = ECnt - OCnt;
  return iDiff;
}

int main(){
  int iCnt = 0, iRet = 0, iSize = 0;
  int *p = NULL;

  printf("Enter Number of Elements : ");
  scanf("%d", &iSize);

  p = (int*)malloc(iSize* sizeof(int));
  if(p == NULL){
    printf("Unable to allocate memory..\n");
    return -1;
  }

  printf("Elements %d are .. \n", iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++){
    printf("Elements %d are : ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  iRet = Frequency(p, iSize);
  printf("Defference of even and odd number is %d", iRet);
  free(p);
  return 0;
}