/*
  Write a program which accept 2 string from user and concat N
  characters of second string after first string. Value of N should be accepted from user. (Implement strncat() function).
  Note : If third parameter is greater than the size of second string then 
  concat whole string after first string.

  Input : "Marvellous Infosystems"
          "Logic Building"
          5
  Output : "Marvellous Infosystems Logic"
*/
#include<stdio.h>
void StrNCatX(char *src, char *dest, int iCnt){
  int i = 0, j = 0;
  while(src[i] != '\0'){
    i++;
  }
  src[i] = 32;
  while((dest[j] != '\0') && (iCnt != '\0')){
    i++;
    src[i] = dest[j];
    j++;
    iCnt--;
  }
  dest[j] = '\0';
}
int main(){
  int iValue = 0;
  char arr[50] = "Marvellous Infosystems";  
  char brr[30] = "Logic Building";
  printf("Enter the character : \n");
  scanf("%d", &iValue);
  StrNCatX(arr, brr, iValue);
  printf("%s", arr);
  return 0;
}
