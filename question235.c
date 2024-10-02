/*
  Write a program which accept file name and one count from user and read that number of characters from starting position.

Input : Demo.txt   12
Output : Display first 12 characters from Demo.txt

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayN(char FName[], int iSize){
 int fd = 0, i  = 0;
 char Buffer[100] = {'\0'};
 fd = open(FName, O_RDWR);

 if(fd == -1){
  printf("Unable to open the file!\n");
  return;
 }

 while((read(fd, Buffer, sizeof(Buffer))) != 0){
   for(i = 0; i < iSize; i++){
     printf("%c", Buffer[i]);
   }
 }
 close(fd);
}


int main(){

    char FileName[30];
    int iValue = 0;

    printf("Enter the number of characters : ");
    scanf("%d", &iValue);
    
    printf("Enter file name : ");
    scanf("%s",FileName);

    DisplayN(FileName, iValue);

    return 0;
}