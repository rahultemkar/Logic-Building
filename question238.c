/*
  Write a program which accept matrix and return largest number from both the diagonals 
Input :
3	2	5	9   
4	3	2	2   
8	4	1	9   
3	9	7	5   

Output : 9
  
*/
#include<stdio.h>
int MaxDiagonal(int Arr[10][10], int iRow, int iCol){
  int i = 0, iMax = 0, j = 0;
  for (i = 0; i < iRow; i++) {
       if(Arr[i][i] > iMax){
        iMax = Arr[i][i];
       }
    }
  for (i = 0; i < iRow; i++) {
       if(Arr[i][iCol - 1 - i] > iMax){
        iMax = Arr[i][iCol - i];
       }
    }
  return iMax;
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
    int iRet = MaxDiagonal(Arr, iRow, iCol);
    printf("%d", iRet);
    
    return 0;
}