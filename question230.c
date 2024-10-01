/*
  Write application which accept file name from user and one string from user. 
  Write that string at the end of file.
  Input : Demo.txt
          Hello World

  Output : Write Hello World at the end of Demo.txt file
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(){
  int fd = 0;
  char FileName[30];
  char AppendString[100]; 

  printf("Enter the file name that you want to open : \n");
  scanf("%s", FileName);

  fd = open(FileName, O_WRONLY | O_APPEND);

  if(fd == -1){
    printf("Unable to open the file\n");
    return 0;
  }

  printf("Enter the string you want to append: \n");
  scanf(" %[^\n]s", AppendString);

  write(fd, AppendString, strlen(AppendString));
  write(fd, "\n", 1);

  close(fd);

  printf("Successfully appended '%s' to %s\n", AppendString, FileName);

  return 0;
}

