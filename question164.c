/*
  Write a recuresive program which display below pattern.
  Output :  A B C D E F 
  
*/

#include<stdio.h>

void Display(){
  static char arr = 65;
  if(arr  <= 70){
    printf(" %c ", arr);
    arr++;
    Display();
  }
}

int main(){
  Display();
  return 0;
}