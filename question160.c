/*
  Write a program which accept string from user and 
  print below pattern.
  
  Input : "Marvellous"

  Output : m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           m a r v e l l o u s
           
    
  Input :  "PPA"
  Output  : p p a
            p p a
            p p a
  
  Solution :
*/
#include<stdio.h>
void Pattern(char *str){
   int iCnt = 0, i = 0, j = 0;
  if(str == NULL){
    printf("String is Empty!");
  }
  while(str[iCnt] != '\0'){
    if((str[iCnt] >= 65) && (str[iCnt] <= 90)){
       str[iCnt] = str[iCnt] + 32;
    }
    iCnt++;
  }
  while(j != iCnt){
    i = 0;
  while(i != iCnt) {
   printf(" %c ", str[i]);
   i++;
  }
  printf("\n");
  j++;
  }
}
int main(){
  char arr[30];
  printf("Enter String : ");
  scanf("%[^\n]s", arr);
  Pattern(arr);
  return 0;
}