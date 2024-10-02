// CALCULATE TIME COMPLEXITY OF EACH PROGRAM

/*
  Accept single digit number from user and print it into word.

  Input : 9
  Output : Nine

  Input : -3
  Output : Three

  Input : 12
  Output : Invalid Number

*/
#include<stdio.h>

void Number(int iNo){
  if((iNo > 10) && (iNo < 0)){
    printf("Invalid Number ");
  }
  switch(iNo){
    case 0 : 
    printf("Zero");
    break;
    case 1 : 
    printf("One");
    break;
    case 2 : 
    printf("Two");
    break;
    case 3 : 
    printf("Three");
    break;
    case 4 : 
    printf("Four");
    break;
    case 5 : 
    printf("Five");
    break;
    case 6 : 
    printf("Six");
    break;
    case 7 : 
    printf("Seven");
    break;
    case 8 : 
    printf("Eight");
    break;
    case 9 : 
    printf("Nine");
    break;
  }
}
int main(){
  int iValue = 0;
  printf("Enter Number : ");
  scanf("%d", &iValue);

  Number(iValue);
  return 0;
}