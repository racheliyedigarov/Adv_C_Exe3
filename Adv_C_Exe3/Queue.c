#include "Queue.h"

/***************** Queue ADT Implementation *****************/

void initQueue(Queue* q)
{
	q->top = NULL;
	q->tail = NULL;
	return;
}

void destroyQueue(Queue* q)
{
	int newnode;
	list_delete2(s->head);
	node* newnode = (node*)realloc(sizeof(node));
	q->Queue;
	return;
}

void enqueue(Queue* q, unsigned int data)
{
	intNode* new = (intNode*)malloc(sizeof(intNode));
	new->next = NULL;
	if (!isEmptyQueue(q)) q->tail->next = new;
	else q->top = new;
	q->tail = new;
}

unsigned int dequeue(Queue* q)
{
	if (*head == NULL)
	{
		printf("Stack is empty \n");
		return 0;
	}
	else {
		unsigned int tmp = q->top->data;
		intNode* old = q->top;
		q->head = q->top->next;
		if (q->top == NULL) q->tail = NULL;
		free(old);
		return tmp;
	}
}

int isEmptyQueue(const Queue* q)
{
	if (*head == NULL)
		return 1;
	else return 0;
	q->tail == NULL && q->top == NULL;
}

/***************** Functions using Queues - Implementation/definition **************************/

void rotateQueue(Queue* q)
{

	if (q == NULL) {
		printf("the Queue is not invaild \n");
	}
	else {
		Queue* tmp = (Queue*)malloc(sizeof(Queue));
		initQueue(tmp);
		while (q->head != q->tail) {
			enqueue(tmp, dequeue(q));
		}

		while (!isEmptyQueue(tmp)) {
			enqueue(q, dequeue(tmp));
		}
		q->Queue;
	}
}

void cutAndReplace(Queue* q)
{
	unsigned int count = 0, num = 0, sum = 0;
	Queue* t1 = (Queue*)malloc(sizeof(Queue));
	Queue* t2 = (Queue*)malloc(sizeof(Queue));
	initQueue(t1);
	initQueue(t2);
	while (!isEmptyQueue(q)) {
		num = dequeue(q);
		sum += num;
		enqueue(t1, num);
		count++;
	}
	if (count % 2 != 0) {
		int avrg = sum / count;
		enqueue(t1, avrg);
		count++;
	}
	for (int i = 0; i < count / 2; i++) {
		enqueue(t2, dequeue(t1));
	}
	while (!isEmptyQueue(tm)) {
		rotateQueue(t1);
		enqueue(q, dequeue(t1));
	}
	while (!isEmptyQueue(t2)) {
		enqueue(q, dequeue(t2));
	}
}

void sortKidsFirst(Queue* q)
{
	int val = 0;
	Queue* tmp = (Queue*)malloc(sizeof(Queue));
	initQueue(tmp);
	while (!isEmptyQueue(q)) {
		enqueue(tmp, dequeue(q));
	}

	while (!isEmptyQueue(tmp)) {
		rotateQueue(tmp);
		val = dequeue(tmp);
		while (!isEmptyQueue(q) && q->tail > val) {
			enqueue(tmp, dequeue(q));
		}
		enqueue(q, val);
	}
	while (!isEmptyQueue(tmp)) {
		enqueue(q, dequeue(tmp));

	}
}