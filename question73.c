/*
  Accept number of rows and number of columns from user
  and display below pattern.

  Input : iRow = 5  iCol =5
  Output : a b c d e
           1 2 3 4 5
           a b c d e
           1 2 3 4 5
           a b c d e    
*/

#include<stdio.h>

void Pattern(int iRow, int iCol){
  int i = 0, j = 0, iValue = 1;
 for(i = 1; i <= ((iRow + 1)/2); i++){
    for(j = 1, iValue = 97; j <= iCol; j++, iValue++){
      printf("%c", iValue);
      if((j == iCol) && (i < ((iRow + 1)/2))){
      printf("\n");
      for(j = 1; j <= iCol; j++){
      printf("%d", j);
      }
      printf("\n");
      }
    }
  }
}
int main(){
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns : ");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);
  return 0;
}