/*
  Write a program which displays ASCII  table. Table contains symbol,
  Decimal, Hexadecimal and Octal representation of every member from 0 to 255. 
*/

#include<stdio.h>

void DisplayASCII(){

  printf("Symbol  Decimal HexDeci Octal");
  int i = 0;
  for(i = 1; i <= 255; i++){
    printf("    %c       %d       %x       %o  \n", i,i,i,i);
  }
}
int main(){
  DisplayASCII();
  return 0;
}