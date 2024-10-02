/*
  Write a program which accept file name from use
  and count number of small character from that file.

  Input : Demo.txt
  Output : Number of small characters are 21
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountSmall(char FName[]){
    int fd = 0, iSize = 0, i = 0, iCount = 0;
    char Buffer[100] = {'\0'};
    
    fd = open(FName, O_RDWR);

    if(fd == -1){
      printf("Unable to open the file\n");
      return 0;
    }
    while((iSize = read(fd, Buffer, sizeof(Buffer))) != 0){
      for(i = 0; i < iSize; i++){
        if(Buffer[i] >= 'a' && Buffer[i] <= 'z'){
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
    
    printf("Enter file name : \n");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are %d", iRet);
    return 0;
}