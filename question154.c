/*
  Write a program which accept string from user and 
  copy the contents into another string by removing extra
  white spaces.

  Input : "Marvel lous multi OS"
  Output : "Marvellous multi OS"
  
*/
#include<stdio.h>

void StrCpyX(const char *src, char *dest){
  if(src == NULL) {
		printf("String is NULL");
	}
	int i = 0, j = 0;
  while(src[i] != '\0'){
    if(src[i] == 32){
      i++;
    }
    dest[j] = src[i];
    i++;
    j++;
  }
}

int main(){
  char arr[30] = "Marvellous multi OS";
  char brr[30];
  StrCpyX(arr, brr);
  printf("%s", brr);
  return 0;
}