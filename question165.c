/*
  Write a recuresive program which display below pattern.
   output :  a b c d e f

*/

#include<stdio.h>

void Display(){
  static char arr = 97;
  if(arr <= 102){
  printf(" %c ", arr);
  arr++;
  Display();
  }
}

int main(){
    Display();
    return 0;
}