/*4. Accept one character from user and convert case of that character.

 Input :  a  Output : A
 Input :  D  output : d

*/

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char CValue){
  if(islower(CValue) ){
    printf("%c", toupper(CValue) );
  }else if(isupper(CValue) ){
    printf("%c", tolower(CValue));
  }
}

int main(){
  char cValue = '\0';

  printf("Enter a Character\n");
  scanf("%c", &cValue);

  DisplayConvert(cValue);

  return 0;
}

