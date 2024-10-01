/*
  Write a program which displays all elements which are perfect from singly
  linear linked list.

  Function Prototype : 
  int DisplayPerfect(PNODE Head);
  Input Linked List :  |11| -> |28| -> |17| -> |41| -> |6| -> |89|
  Output :  6  28

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

void DisplayPerfect(PNODE Head){
  while(Head != NULL){
     int i = 0, iSum = 0;
    for(i = 1; i <= Head -> Data/ 2; i++){
    if((iSum + i) == Head -> Data){
      printf(" %d ", Head -> Data);
    }
    iSum = iSum + i;
    }
    Head = Head -> Next;
  }
}

int main(){
  PNODE First = NULL;

  InsertFirst(&First, 89);
  InsertFirst(&First, 6);
  InsertFirst(&First, 41);
  InsertFirst(&First, 17);
  InsertFirst(&First, 28);
  InsertFirst(&First, 11);

  DisplayPerfect(First);

  return 0;
}
