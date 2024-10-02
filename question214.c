/*
  Write a program which display smallest digits of all element from singly
  linear linked list.
  Function Prototype : 
  void DisplaySmall(PNODE Head);
  Input linked list :  |11| -> |250| -> |532| -> |415|
  Output :  1  0  2  1
  
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

void DisplaySmall(PNODE Head){
  int temp = 0, iNo = 0;
  while(Head != NULL){
      int iSmall = 9;
    temp = Head -> Data;
    while(temp != 0){
      iNo = temp % 10;
      temp = temp / 10;
      if(iSmall > iNo){
        iSmall = iNo;
      }
    }
    printf(" %d ", iSmall);
    Head = Head -> Next;
  }
}

int main(){
  PNODE First = NULL;
  
  InsertFirst(&First, 419);
  InsertFirst(&First, 532);  
  InsertFirst(&First, 250);
  InsertFirst(&First, 11);

  DisplaySmall(First);
  return 0;
}