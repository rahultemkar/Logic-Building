/*
  Accept number of rows and number of columns form user
  and display below pattern.

  Input : iRow = 5 iCol = 5

  Output : $ * * * *
           # $ * * *
           # # $ * *
           # # # $ *
           # # # # $   
*/

#include<stdio.h>

void Pattern(int iRow, int iCol){
  int i = 0, j = 0;
  for(i = 1; i <= iRow; i++){
    for(j = 1; j <= iCol; j++){
      if(i < j){
        printf(" * ");
      }else if(i == j ){
        printf(" $ ");
      }else{
        printf(" # ");
      }
    }
    printf("\n");
  }
}
int main(){
  int iValue1 = 0, iValue2 = 0;
  printf("Enter Number of rows and columns : ");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);
  return 0;
}