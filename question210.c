/*
  Write a program which Display Addition of digits of element from singly linear
  linked list>
  Function Prototype :
  int SumDigit(PNODE Head);
  Input linked list : |110| -> |230| -> |20| -> |240| -> |640|
  Output : 2  5  2  6  10
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
  PNODE newn = NULL;

  newn =  (PNODE)malloc(sizeof(NODE));
  newn -> Next = NULL;
  newn -> Data = iNo;

  if(*Head == NULL){
    *Head = newn;
  }else{
    newn -> Next = *Head;
    *Head = newn;
  }
}

void SumDigit(PNODE Head){
  int temp = 0, iNo = 0;
  while(Head != NULL){
     int iSum = 0;
    temp = Head -> Data;
    while(temp != 0){
    iNo = temp % 10;
    iSum = iNo + iSum;
    temp = temp / 10;
    }
    printf("  %d", iSum);
    Head = Head -> Next;
  }
}

int main(){
  PNODE First = NULL;

  InsertFirst(&First, 640);
  InsertFirst(&First, 240);
  InsertFirst(&First, 20);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  SumDigit(First);
  return 0;
}