/*
  Accept character from user and display its ASCII value in decimal,
  octal and hexadecimal format.
  Input : A
  Output : Decimal   65
           Octal   0101
           Hexadecimal  0x41
*/

#include<stdio.h>

void Display(char ch){
  printf("ASCII value of %c is : \n", ch);
  printf(" Decimal    Octal   HexaDecimal\n");
  printf(" %-10d %-10o %-10x \n", ch, ch, ch);
}
int main(){
  char cValue = '\0';
  printf("Enter the character : ");
  scanf("%c", &cValue);

  Display(cValue);
  return 0;
}