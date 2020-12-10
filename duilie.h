#ifndef DUILIE_H_
#define DUILIE_H_

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *left, *right; 
} Deque;

Deque* createDeque();/* {
	Deque *head;
	head = (Deque*)malloc(sizeof(Deque));
	head->left = head->right = head;
	return head;
}*/

int size(Deque *dq);/* {
	node *p = dq->right;
	int k = 0;
	while (p != dq) {
		k++;
		p = p->right;
	}
	return k;
}*/

int empty(Deque *dq);/* {
	return dq->right == dq;
} */

dataType front(Deque *dq);/* {
	if (empty(dq)) exit(1);
	return dq->right->data;
}*/

dataType back(Deque *dq);/* {
	if (empty(dq)) exit(1);
	return dq->left->data;
}*/

void push_front(Deque *dq, dataType x);/* {
	node *s = (node*)malloc(sizeof(node));
	s->data = x;
	s->left = dq;
	s->right = dq->right;
	dq->right->left = s;
	dq->right = s;
}*/

void push_back(Deque *dq,dataType x);/* {
	node *s = (node*)malloc(sizeof(node));
	s->data = x;
	s->left = dq->left;
	s->right = dq;
	dq->left->right = s;
	dq->left =s; 
}*/

void pop_front(Deque *dq);
void pop_back(Deque *dq);

void clear(Deque *dq);

void print(Deque *dq);
#endif
