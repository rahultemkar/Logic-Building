/*
  Write a program which accept matrix and swap the contents of consecutive rows.
Input :
3	2	5	9
4	3	2	2
8	4	1	9
3	9	7	5

output :

4	3	2	2
3	2	5	9
3	9	7	5
8	4	1	9

*/

#include<stdio.h>

void SwapRows(int Arr[10][10], int iRow, int iCol){
    int i = 0, j = 0, temp[10];
    for(i = 0; i < iRow; i+2){
      for(j = 0; j < iCol; j++){
         temp[j] = Arr[i][j];
         Arr[i][j] = Arr[i + 1][j];
         Arr[i + 1][j] = temp[j];
      }
    }

    for(i = 0; i < iRow; i++){
      for(j = 0; j < iCol; j++){
         printf(" %d ", Arr[i][j]);
      }
      printf("\n");
    }
}
int main(){
  int Arr[10][10];
  int iRow = 0, iCol = 0, i = 0, j = 0;

  printf("Enter Number of Rows : ");
  scanf("%d", &iRow);

  printf("Enter Number of Columns : ");
  scanf("%d", &iCol);

  printf("Enter the elements of matrix : ");
  for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
      scanf("%d", &Arr[i][j]);
    }
  }

  SwapRows(Arr, iRow, iCol);  
  return 0;
}