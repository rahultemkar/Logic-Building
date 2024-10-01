/*
  Write application which accept file name from user and create that
  file.
  Input : Demo.txt
  Output : File created successfully.
   
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(){
  int fd = 0;
  char fileName[30];

  printf("Enter file name that you want create : \n");
  scanf("%s", fileName);

  fd = creat(fileName, 0777);

  if(fd == -1){
    printf("Unable to create the file\n");
  }else{
    printf("File gets successfully create with fd %d\n", fd);
  }

  return 0;
}