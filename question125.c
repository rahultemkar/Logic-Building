/*
  Write a program which accept string from user and 
  display it into reverse order.
  Input : "MarvellouS"
  Output : "SuollevraM"
*/
#include<stdio.h>
void Reverse(char *str){
    int iCnt = 0, i = 0;
    printf("Entered String..\n");
    while(*str != '\0'){
    printf("%c", *str);
    *str++;
    iCnt++;
    }
    printf("\n");
    printf("Reverse String..\n");
   for(i = iCnt; i >= 1; i--){
      *str--;
      printf("%c", *str);
  }
}
int main(){
  char arr[20];
  printf("Enter String : ");
  scanf("%[^'\n']s", arr);
  Reverse(arr);
  return 0;
}