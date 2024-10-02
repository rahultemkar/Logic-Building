/*
  Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.

Input : Demo.txt  'M'
Output : Frequency of M is 7
  
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char FName[], char ch){
  int fd = 0, iSize = 0, i = 0, iCount = 0;
  char Buffer[100] = {'\0'};

  fd = open(FName, O_RDWR);

  if(fd == -1){
    printf("Unable to open the file\n");
    return 0;
  }

  while((iSize = read(fd, Buffer, sizeof(Buffer))) != 0){
    for(i = 0; i < iSize; i++){
       if(Buffer[i] >= 'M'){
        iCount++;
       }
    }
  }
    close(fd);
    return iCount;
}

int main(){
  char  FileName[30];
  int iRet = 0;
  char cValue;
  
  printf("Enter the character : \n");
  scanf("%c", &cValue);

  printf("Enter file name : \n");
  scanf("%s", FileName);

  iRet = CountChar(FileName, cValue);

  printf("Frequency is %d \n",iRet);

  return 0; 
}