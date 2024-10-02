/*
  Write a program which diaplay all palindrome elements of singly linked list.
  Function Prototype :
  void DisplayPallindrome(PNODE Head);
  Input linked list : |11| -> |28| -> |17| -> |414| -> |6| -> |89|
  Output : 11  6  414
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

void DisplayPallindrome(PNODE Head){
  int temp = 0, iNo = 0;
  while(Head != NULL){
    int iRev = 0;
    temp = Head -> Data;
    while(temp != 0){
    iNo = temp % 10;
    temp = temp / 10;
    iRev =  10 * iRev + iNo;
    }
    if(iRev == Head -> Data){
        printf("  %d  ", Head -> Data);
    }
    Head = Head -> Next;
  }
}

int main(){
  PNODE First = NULL;

  InsertFirst(&First, 89);
  InsertFirst(&First, 6);  
  InsertFirst(&First, 414);
  InsertFirst(&First, 17);
  InsertFirst(&First, 28);
  InsertFirst(&First, 11);

  DisplayPallindrome(First);
  return 0;
}