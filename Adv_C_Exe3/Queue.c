#include "Queue.h"
#include <stdio.h>

/***************** Queue ADT Implementation *****************/

void initQueue(Queue* q)
{
	q->head = NULL;
	q->tail = NULL;
	return;
}

void destroyQueue(Queue* q)
{
	while (q->head != NULL)
	{
		intNode* temp = q->head;
		q->head = q->head->next;
		free(temp);
	}
	free(q);
}

void enqueue(Queue* q, unsigned int data)
{
	intNode* new = (intNode*)malloc(sizeof(intNode));
	new->next = NULL;
	if (!isEmptyQueue(q)) q->tail->next = new;
	else q->head = new;
	q->tail = new;
}

unsigned int dequeue(Queue* q)
{
	if (q->head == NULL)
	{
		printf("Stack is empty \n");
		return 0;
	}
	else {
		unsigned int tmp = q->head->data;
		intNode* old = q->head;
		q->head = q->head->next;
		if (q->head == NULL) q->tail = NULL;
		free(old);
		return tmp;
	}
}

int isEmptyQueue(const Queue* q)
{
	if (q->head == NULL)
		return 1;
	else return 0;
	q->tail == NULL && q->head == NULL;
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
	while (!isEmptyQueue(t2)) {
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
		while (!isEmptyQueue(q) && q->tail > data) {
			enqueue(tmp, dequeue(q));
		}
		enqueue(q, data);
	}
	while (!isEmptyQueue(tmp)) {
		enqueue(q, dequeue(tmp));

	}
}