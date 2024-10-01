/*
  Write a program which accept matrix and display addition of elements From each column.

Input :
3	2	5	9
4	3	2	2
8	4	1	9
3	9	7	5

Output : 18	18	15	25
*/
#include<stdio.h>

void AddColumn(int Arr[10][10], int iRow, int iCol){
  int i = 0, j = 0;
  int iColume[10] = {0};
  for (i = 0; i < iRow; i++) {
    for(j = 0; j < iCol; j++){
      iColume[j]= iColume[j] + Arr[i][j];
    }
  }
  for(j = 0; j < iCol; j++){
  printf(" %d ", iColume[j]);
  }
}

int main(){
    int Arr[10][10];
    int iRow = 0, iCol = 0, i = 0, j = 0;
    printf("Enter Number of Rows : ");
    scanf("%d", &iRow);
    printf("Enter Number of Columns : ");
    scanf("%d", &iCol);
    
    printf("Enter the elements of the matrix : \n");
    for(i = 0; i < iRow; i++){
        for(j = 0; j < iCol; j++){
            scanf("%d", &Arr[i][j]);
        }
    }
    
    AddColumn(Arr, iRow, iCol);
    return 0;
}