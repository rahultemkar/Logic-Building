/*
  Write a program which display product of all digits of all element from singly linear linked list. (Don't consider 0)
  Function Prototype : 
  void DisplayProduct(PNODE Head);
  Input linked list :  |11| -> |20| -> |32| -> |41|
  Output : 1   2  6   4
  
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

void DisplayProduct(PNODE Head){
  int temp = 0, iNo = 0;
  while(Head != NULL){
     int iProd = 1;
    temp = Head -> Data;
    while(temp != 0){
      iNo = temp % 10;
      temp = temp / 10;
      if(iNo == 0){
        iNo = 1;
      }
      iProd = iProd * iNo;
    }
    printf(" %d ", iProd);
    Head = Head -> Next;
  }
}

int main(){
  PNODE First = NULL;

  InsertFirst(&First, 41);
  InsertFirst(&First, 32);  
  InsertFirst(&First, 20);
  InsertFirst(&First, 11);

  DisplayProduct(First);
  return 0;
}