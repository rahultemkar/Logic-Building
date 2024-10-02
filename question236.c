/*
  Write a program which accept matrix from user and return addition of diagonal elements.

Input :
3	2	5	9	
4	3	2	2
8	4	1	5
3	9	7	5

Output : 12

*/
#include <stdio.h>

int AddDiagonal(int Arr[10][10], int iRow, int iCol) {
    int isum = 0, i = 0;
    for (i = 0; i < iRow; i++) {
        isum = isum + Arr[i][i];
    }
    return isum;
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
    int iRet = AddDiagonal(Arr, iRow, iCol);
    printf("%d", iRet);
    
    return 0;
}


