/*
  Accept N numbers from user and return the largest number.

  Input :  N  :  6
        Elements  :  85  66  3  66  93  88 
  Output : 93

  Program Layout :
*/

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength){
  int i = 0, temp = 0;
  temp = Arr[0];
  for(i = 0; i < iLength; i++){
    if(Arr[i] > temp){
      temp = Arr[i];
    }
  }
  return temp;
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
  iRet = Maximum(p, iSize);
  printf("Largest Number is %d", iRet);
  free(p);
  return 0;
}