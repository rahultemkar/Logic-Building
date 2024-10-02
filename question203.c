/*
  Write a program which return addition of all element from singly linear
  linked list.

  Function Protype :

  int Addition(PNODE Head)

  Input linked list : |10|->|20|->30|->|40|
  Output : 100
  
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

int Addition(PNODE Head){
    int iSum = 0;
    while(Head != NULL){
    iSum = iSum + Head -> Data;
    Head = Head -> Next;
    }
    return iSum;
}

int main(){
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First, 40);
  InsertFirst(&First, 30);
  InsertFirst(&First, 20);
  InsertFirst(&First, 10);

  iRet = Addition(First);
  printf("%d", iRet);

  return 0;
}
