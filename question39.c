/*
  Write a program which accept temperature in fahrenheit and convert it into 
  celsius. (1 celsius = (Fahrenheit - 32) * (5/9))

  Input : 10
  Output : -12.2222 (10 - 32) * (5/9)

  Input : 34 
  Output : 1.11111 (34 - 32) * (5/9)
  
*/
#include<stdio.h>

double FhtoCs(float fTemp){
    float Cels = 0.0f;
    Cels = ((fTemp - 32) * (5/9));
    return Cels;
}
int main(){
  float fValue = 0;
  double dRet = 0.0;

  printf("Enter Temperature in Faherenheit : ");
  scanf("%d", &fValue);

  dRet = FhtoCs(fValue);
  printf("Temp in Celsius : %d", dRet);
  return 0;
}