/*
  Write application which accept file name from user and read all data from
  that file and display contents on screen.
  Input : Demo.txt
  Output : Display all data of file.
  
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int fd = 0;
  char FileName[30];
  char Arr[100];
  int iRet = 0;
  printf("Enter the file name that you want to display data : \n");
  scanf("%s", FileName);

  fd = open(FileName, O_RDWR);

  if(fd == -1){
    printf("Unable to open the file \n");
    return 0;
  }
  while((iRet = read(fd, Arr, sizeof(Arr) - 1)) > 0){
    Arr[iRet] = '\0';
    printf("%s", Arr);
  }
  printf("Number of bytes successfully read from the file : %d\n", iRet);
  printf("Data from file : %s\n", Arr);

  close(fd);
  return 0;
}