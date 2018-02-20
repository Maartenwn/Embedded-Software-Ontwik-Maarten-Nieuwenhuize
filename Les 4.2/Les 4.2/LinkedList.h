#ifndef LLIST_DEF
#define	LLIST_DEF

typedef int bool;
enum { false, true };

struct node
{
	int data;
	struct node *next;
};

void llist_enqueue(struct node** pHead,int data);
void llist_show(struct node** pHead);
void llist_remove(struct node** pHead,int position);
void llist_clear(struct node** pHead);
int llist_size(struct node** pHead);
bool llist_excist(struct node** pHead, int data);
void llist_copy(struct node** list1,struct node** list2);
int llist_dequeue(struct node** pHead);

#endif // !LLIST_DEF
