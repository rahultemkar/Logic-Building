/*
  Accept N numbers from user and return frequency of eve
  numbers.
  Input :  N  :  6
     Elements :  85  66  3  80  93  88
  Output :  3
  Program Layout :         
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength){
  int i = 0, iCnt = 0;
  for(i = 0; i < iLength; i++){
    if((Arr[i] % 2) == 0){
      iCnt++;
    }
  }
  return iCnt;
}

int main(){
  int iCnt = 0, iSize = 0, iRet = 0;
  int *p = NULL;

  printf("Enter Number of elements are : ");
  scanf("%d", &iSize);

  p = (int*)malloc(iSize* sizeof(int));
  if(p == NULL){
    printf("Unable to allocate memory..\n");
    return -1;
  }
  printf("Elements %d are ..\n", iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++){
    printf("Element %d are : ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }
  iRet = CountEven(p, iSize);
  
  printf("Frequency of Even number is : %d", iRet);
  free(p);
  return 0;
}