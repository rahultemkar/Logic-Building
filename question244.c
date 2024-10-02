/*
  Write a program which accept matrix and check whether the matrix is identity matrix or not.
Identity matrix is a square matrix with 1's along the diagonal from upper left to lower right and 0's in all other positions.
If it satisfies the structure as explained before then the matrix is called as identify matrix.

Input :
1	0	0	0
0	1	0	0
0	0	1	0
0	0	0	1

Output : True
  
*/
  
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkIdentity(int Arr[10][10], int iRow, int iCol){
  int i = 0, j  = 0;
    if(iRow != iCol) {
        return FALSE;
    }
   for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
      if((i == j) && (Arr[i][j] != 1)){
        return FALSE;
      }
      if((i != j) && (Arr[i][j] != 0)){
        return FALSE;
      }
    }
   }
   return TRUE;
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

  bRet = ChkIdentity(Arr, iRow, iCol);
  if(bRet == TRUE){
    printf("Matrix is Identity Matrix");
  }else{
    printf("Matrix is Not an Identity Matrix");
  }
  return 0;
}