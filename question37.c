/*
  Write a program which accept width & height of rectangle from
  user and Calculate its area. (Area = Width * Height)

  Input : 5.3 9.78
  Output : 51.834
*/
#include<stdio.h>
double RectArea(float fWidth, float fHeight){
  float Area = 0.0f;
  Area = fWidth * fHeight;
  return Area;
}
int main(){
  float fValue1 = 0.0, fValue2 = 0.0;
  double dRet = 0.0;

  printf("Enter Width : ");
  scanf("%f", &fValue1);

  printf("Enter Height : ");
  scanf("%f", &fValue2);

  dRet = ReactArea(fValue1, fValue2);
  printf("Area of Rectangle : %d", dRet);
  return 0;
}
