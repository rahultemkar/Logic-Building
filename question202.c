/*
 Write a program which search last occureence of particular element from singly linear linked list.
 Function should return position at which element is found.
 Function Prototype : 
 int SearchLastOcc(PNODE Head, int no);
 Input Linked list : |10| -> |20| -> |30| -> |40| -> |50| -> |30| -> |70|
 Input element : 30
 Output : 6
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

int SearchLastOcc(PNODE Head, int no){
    int iCnt = 0;
    int iPos = 0;
    while(Head != NULL){
    iCnt++;
    if(Head -> Data == no){
      iPos = iCnt;
    }
    Head = Head -> Next;
    }
    return iPos;
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

  iRet = SearchLastOcc(First, 30);
  printf("%d", iRet);

  return 0;
}


