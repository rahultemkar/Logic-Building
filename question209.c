/*
  Write a program which return second maximum element from singly linear linked list.
  Function Prototype : 
  int SecMaximum(PNODE Head);
  Input Linked List : |110| -> |230| -> |320| -> |240|
  Output : 240
  
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node{
  int Data;
  struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int iNo){
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));
  newn -> Next = NULL;
  newn -> Data = iNo;

  if(*Head == NULL){
    *Head = newn;
  }else{
    newn -> Next = *Head;
    *Head = newn;
  }
}

int SecMaximum(PNODE Head){
  int Last = 0;
  int SecLast = 0;
  while(Head != NULL){
    if(Head -> Data > Last){
     Last  = Head -> Data;
    }
    if((Head -> Data > SecLast) && (Head -> Data < Last)){
        SecLast = Head -> Data;
    }
    Head = Head -> Next;
  }
  return SecLast;
}

int main(){
  PNODE First = NULL;
  int iRet = 0;
   
  InsertFirst(&First, 240);
  InsertFirst(&First, 320);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  iRet = SecMaximum(First);
  printf(" %d  Second maximum Element of list", iRet);
  return 0;
}
