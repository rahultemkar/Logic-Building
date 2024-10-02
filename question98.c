/*
  Accept N number from user check whether that numbers contains 11 in
  it or not.

  Input :  N : 6
     Elements : 85  66  11  80  93  88 

  Output : 11  is present
  Input :  N :  6
     Elements : 85  66  3  80  93  88
  Output :  11 is absent

  Program Layout :      
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE  1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength){
   int i = 0;
   BOOL iFlag = FALSE;
   for(i = 0; i < iLength; i++){
      if(Arr[i] == 11){
         iFlag = TRUE;
      }
   }
  return iFlag;
}

int main(){
  int iCnt = 0, iSize = 0;
  int *p = NULL;
  BOOL iRet = FALSE;

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

  iRet = Check(p, iSize);
  if(iRet == TRUE){
   printf("11 are present in the list\n");
  }else{
   printf("11 are not present in the list\n");
  }
  free(p);
  return 0;
}