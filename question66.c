/*
  Accept number of rows and number of columns from user
  and display below pattern.

  Input : iRow = 4  iCol = 4

  Output : A B C D
           A B C D
           A B C D
           A B C D         
*/

#include<stdio.h>

void Pattern(int iRow, int iCol){
  int i = 0, j = 0, iValue = 0;
  for(i = 1; i <= iRow; i++){
    for(j = 1, iValue = 65; j <= iCol; j++, iValue++){
       printf("%c", iValue);
    }
    printf("\n");
  }
}
int main(){
  int iValue1 = 0, iValue2 = 0;
  printf("Enter numbers of rows and columns : ");
  scanf("%d %d",&iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}