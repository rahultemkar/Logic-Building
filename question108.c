/*
  Accept N numbers from user and return the diffrence between largest and smallest number.

  Input :  N :  6
       Elements : 85  66  3  66  93  88
  Output :  90(93 - 3)
  Program Layout :
*/

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[], int iLength){
  int i = 0, iMax = 0, iMin = 0, iDiff = 0;
  iMin = Arr[0];
  iMax = Arr[0];
  for(i = 0; i < iLength; i++){
    if(Arr[i] > iMax){
      iMax = Arr[i];
    }
    if(Arr[i] < iMin){
      iMin = Arr[i];
    }
  }
  iDiff = iMax - iMin;
  return iDiff;
}
int main(){
  int iSize = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements : ");
  scanf("%d", &iSize);

  p = (int*)malloc(iSize* sizeof(int));

  if(p == NULL){
    printf("Unable to allocate memory..\n");
    return -1;
  }
  printf("Enter %d elements..\n", iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++){
    printf("Enter Element %d are : ", iCnt+1);
    scanf("%d", &p[iCnt]);
  }
  iRet = Diffrence(p, iSize);
  printf("Diffrence between Number is %d", iRet);
  free(p);
  return 0;
}