/*
  Write a program which search first occurrence of particular element
  from singly linear linked list.
  function should return position at which element is found.

  Function Protytype :

  int SearchFirstOcc(PNODE Head, int no);

  Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

  Input element : 30

  Output : 3

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

int SearchFirstOcc(PNODE Head, int no){
    int iCnt = 0;
    while(Head != NULL){
    iCnt++;
    if(Head -> Data == no){
      return iCnt;
    }
    Head = Head -> Next;
    }
    return -1;
}

int main(){
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First, 70);
  InsertFirst(&First, 30);
  InsertFirst(&First, 50);
  InsertFirst(&First, 40);
  InsertFirst(&First, 30);
  InsertFirst(&First, 20);
  InsertFirst(&First, 10);

  iRet = SearchFirstOcc(First, 30);
  printf("%d", iRet);

  return 0;
}


