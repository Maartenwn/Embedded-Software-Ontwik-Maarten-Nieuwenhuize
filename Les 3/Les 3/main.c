#include "LinkedList.h"
#include <stdio.h>

void main() {
	struct node* array1 = NULL;
	struct node* array2 = NULL;
	//llist_init(array1);
	llist_add(&array1,5);
	llist_add(&array1,2);
	llist_add(&array1,3);
	llist_add(&array1,4);
	llist_add(&array1,5);
	printf("Exist %i\n", llist_excist(&array1,4));
	llist_remove(&array1,1);
	printf("Exist %i\n", llist_excist(&array1,4));
	llist_show(&array1);
	
	llist_copy(&array1, &array2);
	llist_clear(&array2);
	llist_show(&array2);
	llist_show(&array1);

	
}