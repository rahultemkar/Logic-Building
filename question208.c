/*
  Write a program which returns addition of all even elements from singly linear linked list.
  Function Prototype :
  int AdditionEven(PNODE Head);
  Input Linked List : |11| -> |20| -> |32| -> |41|
  Output : 52
  
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

struct node{
  int Data;
  struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int iNo){
  PNODE newn =  NULL;
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

int AdditionEven(PNODE Head){
  int iSum = 0;
  while(Head != NULL){
    if(((Head -> Data) % 2) == 0){
      iSum = iSum + Head -> Data;
    }
  }
  return iSum;
}

int main(){
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First, 41);
  InsertFirst(&First, 32);
  InsertFirst(&First, 20);
  InsertFirst(&First, 11);

  iRet = AdditionEven(First);
  printf("Addition of Even Number : %d", iRet);

  return 0;
}