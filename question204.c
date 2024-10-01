/*
  Write a program which return largest element from singly linear
  linked list.

  Function Protype :

  int Maximum(PNODE Head);

  Input linked list : |110|->|230|->320|->|240|
  Output : 320
  
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
  int Data;
  struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no){
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->Next = NULL;
  newn->Data = no;


  if(*Head == NULL){
    *Head = newn;
  }else{
    newn-> Next = *Head;
    *Head = newn;
  }
}

int Maximum(PNODE Head){
    int temp = 0;
    while(Head != NULL){
    if(Head -> Data > temp){
      temp = Head -> Data;
    }
    Head = Head -> Next;
    }
    return temp;
}

int main(){
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First, 240);
  InsertFirst(&First, 320);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  iRet = Maximum(First);
  printf("%d", iRet);

  return 0;
}