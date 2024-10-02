/*
  Accept N numbers form user and accept one another number as NO,
  return frequency of NO form it.

  Input : N :  6
          NO  :  66
          Elements : 85  66  3  66 93 88
  Output :  2
  Input :  N  :  6
           NO  :  12
           Elements :  85  11  3  15  11  111
  Output :  0

  Program Layout :
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo){
   int i = 0, iCnt = 0;
   for(i = 0; i < iLength; i++){
      if(Arr[i] == iNo){
         iCnt++;
      }
   }
  return iCnt;
}

int main(){
  int iCnt = 0, iRet = 0, iSize = 0, iValue = 0;
  int *p = NULL;

  printf("Enter Number of Elements : ");
  scanf("%d", &iSize);

  printf("Enter Number That you want search : ");
  scanf("%d", &iValue);

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

  iRet = Frequency(p, iSize, iValue);
  printf("Frequency of 11 is : %d\n", iRet);
  free(p);
  return 0;
}