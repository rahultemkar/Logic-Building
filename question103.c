/*
  Accept N numbers from user and accept one another number as NO, 
  Return index of Last occurrence of that NO.
  Input : N:  6
         NO:  66
         Elements : 85 66 3 66 93 88
  Output : 3
  Input : N:  6
         No:  93
         Elements : 85 66 3 66 93 88
  Output : 4
  Input : N:  6
         No:  12
         Elements : 85 11 3 15 11 111
  Output : -1
  Program Layout : 
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo){
  int i = 0, iCnt = 0;
  for(i = 0; i < iLength; i++){
    if(Arr[i] == iNo){
     iCnt = i + 1;
    }
  }
  return iCnt;
}

int main(){
  int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
  int *p = NULL;

  printf("Enter number of elements :");
  scanf("%d", &iSize);

  printf("Enter the Number : ");
  scanf("%d", &iValue);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL){
    printf("Unable to allocate memory..\n");
    return -1;
  }
  printf("Enter %d elements ..\n", iSize);
  for(iCnt = 0; iCnt < iSize; iCnt++){
    printf("Enter Element %d are : ", iCnt+1);
    scanf("%d", &p[iCnt]);
  }
  iRet =  LastOcc(p, iSize, iValue);

  if(iRet == -1){
    printf("There is no such number\n");
  }else{
    printf("Last occurence of number is %d\n", iRet);
  }
  free(p);
  return 0;
}