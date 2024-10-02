/*
  Accept N numbers from user and return frequency of 11 form it.

  Input : N :  6
     Elements : 85  66  3  15  93  88
  Output  : 0
  Input :  N  :  6
     Elements :  85  11  3  15  11  111
  Output :   2
  Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength){
   int i = 0, iCnt = 0;
   for(i = 0; i < iLength; i++){
      if(Arr[i] == 11){
         iCnt++;
      }
   }
  return iCnt;
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
  printf("Frequency of 11 is : %d\n", iRet);
  free(p);
  return 0;
}