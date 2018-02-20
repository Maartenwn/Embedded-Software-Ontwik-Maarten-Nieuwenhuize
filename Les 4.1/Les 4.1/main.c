#include <stdio.h>
#define MAX_STACK_SIZE 100
struct Stk {
	int data[MAX_STACK_SIZE];
	int sp;
};
typedef struct Stk Stack;

//proto types
void stack_init(Stack *s);
void stack_push(Stack *s, int item);
int stack_pop(Stack *s);

void main()
{
	Stack st;
	stack_init(&st);
	//Hier dan een aantal testen 

	for (size_t i = 0; i < 101; i++)
	{
		stack_push(&st, i);
	}

	printf("---------------------\n"); 
	for (size_t i = 0; i < 101; i++)
	{
		printf("%i\n",stack_pop(&st));
	}
}

//Function bodies 
void stack_init(Stack*s)
{
	s->sp = NULL;
}
int stack_pop(Stack *s)
{
	if (s->sp != NULL) {
		s->sp--;
		int data = s->data[s->sp];
		s->data[s->sp] = NULL;
		return data;
	}
	return -1;
}
void stack_push(Stack *s,int item)
{
	if (s->sp == NULL) {
		s->data[0] = item;
		s->sp = 1;
	}
	else {
		if (s->sp < 100) {
			s->data[s->sp] = item;
			s->sp++;
		}
		else printf("STACK_SIZE has been reached\n");
	}
}
