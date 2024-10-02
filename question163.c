/*
  Write a recursive program which display below pattern.

  Output : 5   4  3  2  1
  
*/

#include<stdio.h>

void Display(){
    static int iNo = 5;
    if(iNo > 0){
    printf("%d  ", iNo);
    iNo-- ;
    Display();
    }
}

int main(){
 Display();
  return 0;
}