#ifndef LLIST_DEF
#define	LLIST_DEF

typedef int bool;
enum { false, true };

struct node
{
	int data;
	struct node *next;
};

void llist_init(struct node** pHead);
void llist_add(struct node** pHead,int data);
void llist_show(struct node** pHead);
void llist_remove(struct node** pHead,int position);
void llist_clear(struct node** pHead);
int llist_size(struct node** pHead);
bool llist_excist(struct node** pHead, int data);
void llist_copy(struct node** list1,struct node** list2);

#endif // !LLIST_DEF
