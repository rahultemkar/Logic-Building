/*
  Write a program which return smallest element from
  singly linear linked list.

  Function protype :
  int Minimum(PNODE Head);
  Input linked list : |110|->|230|->|20|->|240|->|640|
  Output : 20
  
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

int Minimum(PNODE Head){
    int temp = 0;
    temp = Head -> Data;
    while(Head != NULL){
    if(Head -> Data < temp){
      temp = Head -> Data;
    }
    Head = Head -> Next;
    }
    return temp;
}

int main(){
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First, 640);
  InsertFirst(&First, 240);
  InsertFirst(&First, 20);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  iRet = Minimum(First);
  printf("%d", iRet);

  return 0;
}