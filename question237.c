/*
  Write a program which accept matrix and one number from user and return frequency of that number.

Input :
Number : 9
3	2	5	9
4	3	2	2
8	4	1	9
3	9	7	5

Output : 9

*/
#include<stdio.h>
int AddDiagonal(int Arr[10][10], int iRow, int iCol, int iNo){
  int Freq = 0, i = 0, j = 0, iCnt = 0;
  for(i = 0; i < iRow; i++){
    for(j = 0; j < iCol; j++){
    if(Arr[i][j] == iNo){
      iCnt++;
    }
    }
  }
  return iCnt;
}

int main(){
    int Arr[10][10];
    int iRow = 0, iCol = 0, i = 0, j = 0, iValue = 0;
    printf("Enter Number of Rows : ");
    scanf("%d", &iRow);
    printf("Enter Number of Columns : ");
    scanf("%d", &iCol);
    printf("Enter One Number : ");
    scanf("%d", &iValue);
    
    printf("Enter the elements of the matrix : \n");
    for(i = 0; i < iRow; i++){
        for(j = 0; j < iCol; j++){
          scanf("%d", &Arr[i][j]);
        }
      }
    int iRet = AddDiagonal(Arr, iRow, iCol, iValue);
    printf("%d", iRet);
    
    return 0;
}