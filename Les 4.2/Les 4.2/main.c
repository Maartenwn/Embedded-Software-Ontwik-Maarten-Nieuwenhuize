#include <stdio.h>
#include "LinkedList.h"

void main()
{
	struct node* FIFO = NULL;
	for (size_t i = 0; i < 101; i++)
	{
		llist_enqueue(&FIFO,i);
	}
	for (size_t i = 0; i < 101; i++)
	{
		printf("%i\n", llist_dequeue(&FIFO));
	}
}


