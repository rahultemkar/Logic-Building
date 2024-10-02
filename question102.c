/*
  Accept N numbers from user and accept one another number as NO, 
  Return index of first occurrence of that NO.
  Input : N:  6
         NO:  66
         Elements : 85 66 3 66 93 88
  Output : 2
  Input : N:  6
         No:  12
         Elements : 85 11 3 15 11 111
  Output : There is no such number
  Program Layout : 
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo){
  int i = 0, iCnt = -1, flag = 1;
  for(i = 0; i < iLength; i++){
    if((Arr[i] == iNo) && (flag == 1)){
     iCnt = i + 1;
     flag = 0;
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
  iRet =  FirstOcc(p, iSize, iValue);

  if(iRet == -1){
    printf("There is no such number\n");
  }else{
    printf("First occurence of number is %d\n", iRet);
  }
  free(p);
  return 0;
}