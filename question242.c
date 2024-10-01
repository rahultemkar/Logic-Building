/*
  Write a program which accept matrix and reverse the contents of each row.
Input : 
3	2	5	9    11  21  31  41
4	3	2	2    21  22  32  42
8	4	1	9    31  32  33  34
3	9	7	5    41  42  43  44
output :
9	5	2	3
2	2	3	4
9	1	4	8
5	7	9	3
*/

#include<stdio.h>

void ReverseRow(int Arr[10][10], int iRow, int iCol){
  int i = 0, j  = 0, temp[10];
   for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
       temp[i] = Arr[i][j];
       Arr[i][j] = Arr[i][iCol - 1 - j];
       Arr[i][iCol - 1 - j] = temp[i];
       j++;
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

  ReverseRow(Arr, iRow, iCol);
  return 0;
}