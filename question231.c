/*
  Write a program which accepts file name from user and count number of
  capital characters from that file.

  Input : Demo.txt
  Output : Number of capital characters are 23

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountCapital(char FName[]){
    int fd = 0, iSize = 0, i = 0, iCount = 0;
    char Buffer[100] = {'\0'};
    
    fd = open(FName, O_RDWR);

    if(fd == -1){
      printf("Unable to open the file\n");
      return 0;
    }
    while((iSize = read(fd, Buffer, sizeof(Buffer))) != 0){
      for(i = 0; i < iSize; i++){
        if(Buffer[i] >= 'A' && Buffer[i] <= 'Z'){
          iCount++;
        }
      }
    }

    close(fd);
    return iCount;
}

int main(){
    char FileName[30];
    int iRet = 0;
    
    printf("Enter file name : ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital characters are %d", iRet);
    return 0;
}