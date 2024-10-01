/*
  Write a program which display all elements which are prime from singly linear linked list.
  Function Prototype : 
  int DisplayPrime(PNODE Head)
  Input LInked List :  |11| -> |20| -> |17| -> |41| -> |22| -> |89|
  Output : 11 17 41 89
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

void DisplayPrime(PNODE Head){
  int i = 0;
  while(Head != NULL){
    for(i = 2; i <= (Head -> Data)/2; i++){
    if(((Head -> Data) % i) == 0){
      printf("  %d ", Head -> Data);
      i = Head -> Data/2 + 1;
    }
    }
    Head = Head -> Next;
  }
}

int main(){
  PNODE First = NULL;

  InsertFirst(&First, 89);
  InsertFirst(&First, 22);
  InsertFirst(&First, 41);
  InsertFirst(&First, 17);
  InsertFirst(&First, 20);
  InsertFirst(&First, 11);  

  DisplayPrime(First);
  return 0;  
}