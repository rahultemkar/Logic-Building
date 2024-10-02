/*
  Write a program which accept string from user and print
  below pattern.

  Input  : "Marvellous"

  Output : M
           M a 
           M a r
           M a r v
           M a r v e
           M a r v e l 
           M a r v e l l
           M a r v e l l o
           M a r v e l l o u
           M a r v e l l o u s

  Input : " P P A"

  Output : P
           P P
           P P A

  Solution :
  
*/

#include<stdio.h>
void Pattern(char *str){
   int iCnt = 0, i = 0, j = 0, k = 0;
  if(str == NULL){
    printf("String is Empty!");
  }
  while(str[iCnt] != '\0'){
    iCnt++;
  }
  k = 1;
  while(j != iCnt){
    i = 0;
  while(i != k) {
   printf(" %c ", str[i]);
   i++;
  }
  printf("\n");
  j++;
  k++;
  }
}
int main(){
  char arr[30];
  printf("Enter String : ");
  scanf("%[^\n]s", arr);
  Pattern(arr);
  return 0;
}