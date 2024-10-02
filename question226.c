/*
  Write application which accept file name from user and that file in read mode.
    Input : Demo.txt
    Output : File opened successfully.

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(){
  int fd = 0;
  char FileName[30];

  printf("Enter file name that you want to open : \n");
  scanf("%s", FileName);

  fd = open(FileName, O_RDWR);

  if(fd == -1){
    printf("Unable to open the file\n");
  }else{
    printf("File gets successfully opened with fd %d\n", fd);
  }                             

  return 0;                   
}