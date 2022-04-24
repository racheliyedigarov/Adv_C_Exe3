#include <stdio.h>
#include "Stack.h"
#include "Queue.h"

void main()
{

	Stack rote;
	initStack(&rote);
	flipBetweenHashes("Remem#reb# thi#crap s#tice");
	flipBetweenHashes("#meR#embe#siht r# practice");
	push(&rote, 'R');
	push(&rote, 'E');
	push(&rote, 'M');
	push(&rote, 'E');
	push(&rote, 'M');
	push(&rote, 'B');
	push(&rote, 'E');
	push(&rote, 'R');

	Queue rote;
	initQueue(&rote);
	enqueue(&rote, 6);
	enqueue(&rote, 1);
	enqueue(&rote, 5);
	enqueue(&rote, 2);
	enqueue(&rote, 3);
	enqueue(&rote, 1);
	enqueue(&rote, 9);

	rotateQueue(&rote);
	cutAndReplace(&rote);
	sortKidsFirst(&rote);
}