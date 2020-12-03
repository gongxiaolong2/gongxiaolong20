#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

typedef int dataType;
typedef struct node {
dataType data;
struct node *next;
} LinkStack;

LinkStack* InitStack();
int Empty(LinkStack *s);
void Push(LinkStack *s, dataType x);
void Pop(LinkStack *s);
dataType GetTop(LinkStack *s);
int priority(char x);
double compute(double x,double y,char op);


#endif

