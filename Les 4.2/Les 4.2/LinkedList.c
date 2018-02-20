#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

const int MAX_FIFO_SIZE = 100;

void llist_show(struct node** pHead) {
	struct node* next = *pHead;
	int size = llist_size(&*pHead);
	for (size_t i = 0; i < size; i++)
	{
		printf("%i\n" ,next->data);
		next = next->next;
	}
	if (size == 0) {
		printf("This is an empty linked list\n");
	}
}

bool llist_excist(struct node** pHead,int data) {
	struct node* next = *pHead;
	while (next != NULL) {
		if (next->data == data) {
			return true;
		}
		next = next->next;
	}
	return false;
}


int llist_size(struct node** pHead) {
	struct node* next = *pHead;
	int index = 1;
	if (*pHead == NULL) {
		return 0;
	}
	while (next->next != NULL)
	{
		next = next->next;
		index++;
	}
	return index;
}

void llist_clear(struct node** pHead) {
	struct node* next = *pHead;
	while (next != NULL) {
		struct node* temp = next;
		next = next->next;
		free(temp);
	}
	*pHead = NULL;
}



void llist_remove(struct node** pHead, int position) {
	struct node* toberemoved = *pHead;
	struct node* pprev = *pHead;
	for (size_t i = 0; i < position; i++)
	{
		pprev = toberemoved;
		toberemoved = toberemoved->next;
	}
	pprev->next = toberemoved->next;
	free(toberemoved);	
}


void llist_enqueue(struct node** pHead, int data) {
	struct node *pn = (struct node*) malloc( sizeof(struct node) );

	if (llist_size(&*pHead) >= MAX_FIFO_SIZE) {
		printf("MAX_FIFO_SIZE error");
		return;
	}

	if (NULL == pn) {
		printf("Out of memory");
	}
	else {
		if (NULL == *pHead) {
			pn->data = data;
			pn->next = NULL;
			*pHead = pn;
		}
		else {
			pn->data = data;
			pn->next = *pHead;
			*pHead = pn;
		}
	}
}



void llist_copy(struct node** list1, struct node** list2) {
	struct node* next = *list1;
	while (next != NULL) {
		struct node *pn = (struct node*) malloc(sizeof(struct node));
		if (NULL == pn) {
			printf("Out of memory");
		}
		else {
			if (NULL == *list2) {
				pn->data = next->data;
				pn->next = NULL;
				*list2 = pn;
			}
			else {
				pn->data = next->data;
				pn->next = *list2;
				*list2 = pn;
			}
		}

		next = next->next;
	}
}

int llist_dequeue(struct node** pHead) {
	if (pHead == NULL) {
		return;
	}
	struct node* pStart = *pHead;
	struct node* pPrev = *pHead;
	while(pStart->next != NULL) {
		pPrev = pStart;
		pStart = pStart->next;
	}
	
	pPrev->next = NULL;
	int data = pStart->data;
	free(pStart);
	if (pStart == pPrev) {
		pHead = NULL;
	}
	
	return data;
}

