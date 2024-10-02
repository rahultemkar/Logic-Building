/*
  Accept string from user and reverse the contents of that 
  string by toggling  the case.

  Input : "aCBdef"
  Output : "FEDcbA"
  
*/
#include<stdio.h>
void StrRevTogX(char *str){
  char temp;
  int i = 0, j = 0;
  while(str[i] != '\0'){
    i++;
  }
  while(j < i){
    if(((str[j] >= 97) && (str[j] <= 122)) || ((str[i] >= 97) && (str[i] <= 122))){
        str[j] = str[j] - 32;
        str[i] = str[i] - 32;
    }else if(((str[j] >= 65) && (str[j] <= 90)) || ((str[i] >= 65) && (str[i] <= 90))){
        str[j] = str[j] + 32;
        str[i] = str[i] + 32;
    }
    temp = str[j];
    str[j] = str[i];
    str[i] = temp;
    i--;
    j++;
  }
}
int main(){
   char arr[50] = "Marvellous";
   StrRevTogX(arr);
   printf("%s", arr);
   return 0;
}

