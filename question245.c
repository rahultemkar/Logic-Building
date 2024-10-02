/*
  Write a program which accept matrix and check whether the matrix is Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero.
Input :
1	0	3	0
0	6	0	0
0	0	1	0
9	0	0	9

Output : True

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSparse(int Arr[10][10], int iRow, int iCol){
  int i = 0, j  = 0, imaj = 0, iCnt = 0;
  imaj = iRow * iCol;
   for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
      if(Arr[i][j] == 0){
        iCnt++;
      }
    }
   }
   if(iCnt > (imaj/2)){
     return TRUE;
   }else{
    return FALSE;
   }
}

int main(){
  int Arr[10][10] = {0};
  int iRow = 0, iCol = 0, i = 0, j = 0;
  BOOL bRet = FALSE;
  printf("Enter number of Rows : ");
  scanf("%d", &iRow);
  printf("Enter number of Columns : ");
  scanf("%d", &iCol);
  printf("Enter Matrix Elements : ");
  for(i = 0;  i < iRow; i++){
    for(j = 0; j < iCol; j++){
      scanf("%d", &Arr[i][j]);
    }
  }

  bRet = ChkSparse(Arr, iRow, iCol);
  if(bRet == TRUE){
    printf("Matrix is Sparse matrix");
  }else{
    printf("Matrix is Not an Sparse matrix");
  }
  return 0;
}