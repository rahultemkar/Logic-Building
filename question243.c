/*
  Write a program which accept matrix and reverse the contents of each column.
  Input : 
   3	2	 5	9
   4	3	 2	2
   8	4	 1	9
   3	9	 7	5
  Output :
   3	9	 7	5
   8	4	 1	9
   4	3	 2	2
   3	2	 5	9

*/

#include<stdio.h>

void ReverseCol(int Arr[10][10], int iRow, int iCol){
  int i = 0, j  = 0, temp[10];
   for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
       temp[j] = Arr[i][j];
       Arr[i][j] = Arr[iRow - 1 - i][j];
       Arr[iRow - 1 - i][j] = temp[j];
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

  ReverseCol(Arr, iRow, iCol);
  return 0;
}