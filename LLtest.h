#ifndef LL_H

#define LL_H

typedef struct LL
{
	int PID;
	char command[255];
	struct LL *next_ptr;
}LL;


void addNewNode(LL **head, char command[], int PID);
void deleteOldestNode(LL **head);
void printList(LL *head);
void freeList(LL **head);

#endif
