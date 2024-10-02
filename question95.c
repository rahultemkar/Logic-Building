/*
  Accept N numbers from user and display all such
   elements which are multiples of 11.
   
   Input : N  :   6
      Elements : 85  66  3  55  93  88
  
  Output : 66  55  88 

  Program Layout :
*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength){
  int i = 0;
  for(i = 0; i < iLength; i++){
    if((Arr[i] % 11) == 0){
      printf("Elements are multiples by 11 : %d\n", Arr[i]);
    }
  }
}
int main(){
  int iCnt = 0, iSize = 0;
  int *p = NULL;

  printf("Number of Elements are : ");
  scanf("%d", &iSize);

  p = (int*)malloc(iSize* sizeof(int));

  if(p == NULL){
    printf("Unable to allocate memory..\n");
    return -1;
  }

  printf("Elements %d are .. \n", iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++){
    printf("Elements %d are : ", iCnt+1);
    scanf("%d", &p[iCnt]);
  }

  Display(p, iSize);
  free(p);
  return 0;
  }