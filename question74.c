/*
  Accept number of rows and number of columns from user and 
  display below pattern.

  Input : iRow = 5 iCol = 5
  Output : 1  2  3  4  5
           -1 -2 -3 -4 -5
           1  2  3  4  5
           -1 -2 -3 -4 -5
           1  2  3  4  5    
*/

#include<stdio.h>

void Pattern(int iRow, int iCol){
  int i = 0, j = 0, k = 0;
 for(i = 1; i <= ((iRow + 1)/2); i++){
    for(j = 1; j <= iCol; j++){
      printf("%d", j);
      if((j == iCol) && (i < ((iRow + 1)/2))){
      printf("\n");
      for(k = -1; k >= -iCol; k--){
      printf("%d", k);
      }
      printf("\n");
      }
    }
  }
}
int main(){
  int iValue1 = 0, iValue2 = 0;
  printf("Enter Number of rows and columns : ");
  scanf("%d %d",&iValue1, &iValue2);

  Pattern(iValue1, iValue2);
  return 0;
}