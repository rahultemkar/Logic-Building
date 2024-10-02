/*
  Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A, B, C, D. Exam 
  of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at
  10.30 AM. (Application should be case insensitive)
  Input : C
  Output : Your exam at 9.20 AM
  Input : d
  Output : Your exam at 10.30 AM
  
*/
#include<stdio.h>
void DisplaySchedule(char chDiv){
  if((chDiv < 65) || (chDiv > 68)){
    printf("Time not found of this division\n");
  }
  switch(chDiv){
    case 'A' : 
           printf("Your exam at 7 AM\n");
           break;
    
    case 'B' : 
           printf("Your exam at 7 AM\n");
           break;
    
    case 'C' : 
           printf("Your exam at 7 AM\n");
           break;
    
    case 'D' : 
           printf("Your exam at 7 AM\n");
           break;
  }
}
int main(){
  char cValue = '\0';

  printf("Enter the devision : ");
  scanf("%c", &cValue);
  DisplaySchedule(cValue);
  return 0;
}