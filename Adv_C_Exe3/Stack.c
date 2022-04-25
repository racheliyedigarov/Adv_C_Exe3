#include "Stack.h"
#include <stdio.h>

/***************** Stack ADT Implementation *****************/

charNode* addToHead(charNode* head, charNode* toAdd);
void removeItem(charNode** head);

void initStack(Stack* s)
{
	s->head = NULL;
	return;

}

void destroyStack(Stack* s)
{
		while (s.head != NULL)
	{
		pop(s);
	}
	free(s);
}

void push(Stack* s, char data)
{
	
		 charNode* newnode = (charNode*)malloc(sizeof(charNode));
		if (newnode == NULL) {
			printf("push: memory allocation problem\n");
			return;
		}
		newnode->data = data;
		s->head = addToHead(s->head, newnode);
}
charNode* addToHead(charNode* head, charNode* toAdd) {
	toAdd->next = head;
	head = toAdd;
	return head;
}


char pop(Stack* s)
{
	int res;
		if (s->head== NULL) { printf("\nSTACK IS EMPTY"); return 0; }
		res = s->head->data;
		removeItem(&(s->head));
			return(res);
}
void removeItem(charNode** head) {
	if (*head == NULL) return; //if stack empty
	charNode* tmp = *head;
	*head = (*head)->next;
	free(tmp);
}


int isEmptyStack(const Stack* s)
{
	return (!(s->head));
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
	if (s->head == NULL)
		printf("Stack is empty \n");
	str[count] = pop(s);
	count++;
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
			push(&t1, pop(s));
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
