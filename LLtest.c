#include "LLtest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ListSize = 0;
void addNewNode(LL **head, char command[], int PID)
{
	LL *newNode = malloc(sizeof(LL));
	newNode->next_ptr = NULL;
	strcpy(newNode->command, command);
	newNode->PID = PID;
	ListSize++;
	
	if(*head == NULL)
		*head = newNode;
	else
	{
		newNode->next_ptr = *head;
		*head = newNode;
	}
	
	if(ListSize > 16)
	{
		deleteOldestNode(head);
		ListSize--;
	}
}

void deleteOldestNode(LL **head)
{
	LL *temp_ptr = *head;
	LL *prev = NULL;
	
	while(temp_ptr->next_ptr != NULL)
	{
		prev = temp_ptr;
		temp_ptr = temp_ptr->next_ptr;
	}
	prev->next_ptr = NULL;
	free(temp_ptr);
}

void printList(LL *head)
{
	LL *temp_ptr = head;
	while(temp_ptr != NULL)
	{
		printf("%s %d\n", temp_ptr->command, temp_ptr->PID);
		temp_ptr = temp_ptr->next_ptr;
	}
	free(temp_ptr);
}

void freeList(LL **head)
{
	if((*head)->next_ptr == NULL)
		return;
	LL *temp_ptr = *head;
	*head = (*head)->next_ptr;
	free(temp_ptr);
	freeList(head);
}
