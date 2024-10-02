/*
  Write a program which accept string from user and copy that
  characters of that string into another string in reverse order.

  Input : "Marvellous Python"

  Output : "nohtyP suollevraM"

*/

void StrCpyRev(char *src, char *dest){
  int iCnt = 0, i = 0, j = 0;
  while(src[iCnt] != '\0'){
    iCnt++;
  }
  j = iCnt;
  while(*dest != iCnt){
   dest[i] = src[j];
   i++;
   j--;
  }

}

int main(){
  char arr[30] = "Marvellous Python";
  char brr[30];

  StrCpyRev(arr,brr);

  printf("%s",brr);

  return 0;
}