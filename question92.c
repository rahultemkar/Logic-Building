/*
  Accept N numbers form user and display all such elements which
  are divisible by 5.

  Input : N :  6
      Elements  : 85  66  3  80  93  88

  Output : 85  80

  program Layout :
*/
#include<stdio.h>
#include<stdlib.h>

void Divisible(int Arr[], int iLength){
  int i = 0;
  for(i = 0; i < iLength; i++){
    if((Arr[i] % 5) == 0){
      printf("Elements are Divisible by 5 is : %d\n", Arr[i]);
    }
  }
}
int main(){
  int iSize = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter Number of element : ");
  scanf("%d", &iSize);

  p = (int*)malloc(iSize* sizeof(int));

  if(p == NULL){
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter %d Elements.. \n", iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++){
    printf("Enter Element %d are : ", iCnt+1);
    scanf("%d", &p[iCnt]);
  }
  
  Divisible(p, iSize);
  free(p);
  return 0;
}