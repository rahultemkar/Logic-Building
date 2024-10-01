/*
  Write a program which accept matrix from user and display transpose of the matrix
 The transpose of a given matrix is formed by interchanging the rows and columns of a matrix.

Input :
3	2	5	9
4	3	2	2
8	4	1	5
3	9	7	5
output : 
3	4	8	3	
2	3	4	9
5	2	1	7
9	2	5	5

*/

#include<stdio.h>

void Transpose(int Arr[10][10], int iRow, int iCol){
  int i = 0, j  = 0;
   for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
       Arr[j][i] = Arr[i][j];
    }
    printf("\n");
   }

   for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
       printf(" %d ", Arr[i][j]);
    }
    printf("\n");
   }
}

int main(){
  int Arr[10][10] = {0};
  int iRow = 0, iCol = 0, i = 0, j = 0;
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

  Transpose(Arr, iRow, iCol);
  return 0;
}
