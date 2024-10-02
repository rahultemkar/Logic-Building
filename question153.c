/*
  Write a program which accept string from user and
  reverse each word in place.

  Input : "Marvellous Multi OS"
  Output : "suollevraM itluM SO"

*/

#include<stdio.h>
void WordCount(char *str) {
	int i = 0, j = 0, k = 0;
	char temp;
	if(str == NULL) {
		printf("String is NULL");
	}
	while(str[k] != '\0') {
	  i = k;
	  j = k;
	while((str[i] != 32) && (str[i] != '\0')) {
		i++;
		k++;
	}
      
	while(j < i) {
        i--;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
	}
	k++;
  }
}

int main() {
	char arr[50];
	printf("Enter String : ");
	scanf("%[^\n]s", arr);
	WordCount(arr);
	printf("%s",arr);
	return 0;
}