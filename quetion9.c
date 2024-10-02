/*4. Accept two numbers from user and display first number in second number of times.
 Input  : 12 5
 Output : 12 12 12 12 12

 Input  : -2 3
 Output : -2 -2 -2

 Input  : 21 -3 
 Output : 21 21 21 

 Input  : -2 0
 Output : 
 */

#include<stdio.h>

void Display(int iNo1, int iFrequency){
   int iCnt = 0;
   if(iFrequency < 0){
    iFrequency = -iFrequency;
   }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++){
        printf("%d\t", iNo1);
    }
}


int main(){
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    printf("Enter frequence : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}