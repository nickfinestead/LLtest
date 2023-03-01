/*
      Code created for making a Singly Linked List
      Comes with built in functions. Made for storing a command and an integer within a node.
      
        - void addNewNode(LL **head, char command[], int PID);
        - void deleteOldestNode(LL **head);
        - void printList(LL *head);
        - void freeList(LL **head);


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LLtest.h"


int main()
{
  LL *head = NULL;
  char *array[10] = {"cmd0", "cmd1", "cmd2", "cmd3", "cmd4", "cmd5", "cmd6", "cmd7", "cmd8", "cmd9"};
  for(int i = 0; i < 10; i++)
    addNewNode(&head, array[i], i);
  printList(head);
  freeList(&head);
}
