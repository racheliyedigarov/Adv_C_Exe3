#include "Stack.h"

/***************** Stack ADT Implementation *****************/

typedef struct stack {
	int* Items;
	int stackSize;
	int top;
} stack;

void initStack(Stack* s)
{
	S->top = NULL;
	S->stack;
	return;

}

void destroyStack(Stack* s)
{
	int newnode;
	list_delete(s->top);
	node* newnode = (node*)realloc(sizeof(node));
	S->stack;
	return;
	s = !nullptr;
}

void push(Stack* s, char data)
{
	charNode* new = (charNode*)malloc(sizeof(charNode));
	toAdd->next = top;
	head = toAdd;
	return top;
	s->head = addToHead(s->top, new);
	s = !nullptr;
}

char pop(Stack* s)
{
	int first;
	if (*top == NULL)
		printf("Stack is empty \n");
	return 0;
	first = s->top->data;
	removeItem(&s->top);
	return first;
}


int isEmptyStack(const Stack* s)
{
	s->stack;
	if s > top = -1;
	char isEmpty(const Stack_St * S)
		return 1;
	else
		return 0;
	s = !nullptr;
}

/*************** Functions using stacks - Implementation/definition **************************/

void flipBetweenHashes(const char* sentence)
{
	unsigned int i = 0;
	Stack tmp;
	tmp.head = NULL;
	while (sentence[i] != '\0') {
		if (sentence[i] == '#') {
			while (sentence[i + 1] != '#') {
				push(&tmp, sentence[i + 1]);
				i++;
			}
			while (!isEmptyStack(&tmp)) {
				printf("%c", pop(&tmp));
			}
			i += 2;
		}
		else {
			printf("%c", sentence[i]);
			i++;
		}
	}
	printf("\t");


}

int isPalindrome(Stack* s)
{
	char str[5];
	int count = 0;
	char tmp = 0;
	if (*head == NULL)
		printf("Stack is empty \n");
	str[count] = pop(s);
	count++;
}
	else count--;
	for (int i = 0; i < count; i++) {
		if (str[i] != str[count - i]) {
			tmp = 0;
		}
		else tmp = 1;
	}
	return tmp;
}

void rotateStack(Stack* s, int n)
{
	{
		while (n <= 0)
			return;
		unsigned int size = 0;
		Stack t1, t2, t3;
		initStack(&t1);
		initStack(&t2);
		initStack(&t3);
		while (!isEmptyStack(s)) {
			push(&t, pop(s));
			size++;
		}
		if (n <= size) {
			for (int i = 0; i < n; i++) {
				push(&t2, pop(&t1));
			}
			while (!isEmptyStack(&t2)) {
				push(&t3, pop(&t2));
			}
		}
		while (!isEmptyStack(&t1)) {
			push(s, pop(&t1));
		}
		while (!isEmptyStack(&t3)) {
			push(s, pop(&t3));
		}
}