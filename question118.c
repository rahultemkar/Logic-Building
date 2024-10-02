/*
  Accept character from user. If it is capital then display all the 
  character from the input characters till Z. If input character is small
  then print all the characters in reverse order till a. In othe cases return
  directly.
  Input : Q
  Output : Q  R S T U V W X Y Z
  Input : m
  Output : m I k j i h g f e d c b a
  Input : 8
  Output : 
*/

#include<stdio.h>

void Display(char ch){
  int i = 0, j = 0;
  if((ch >= 65) && (ch <= 90)){
     for(i = ch; i <= 90; i++){
      printf(" %c ", ch);
      ch++;
     }
  }else if((ch >= 97) && (ch <= 122)){
    for(j = ch; j >= 97; j--){
      printf(" %c ", ch);
      ch--;
    }
  }else{
    printf("%c", ch);
  }
}
int main(){
  char cValue = '\0';
  printf("Enter the characte : ");
  scanf("%c", &cValue);
  Display(cValue);
  return 0;
}