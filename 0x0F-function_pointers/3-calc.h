#ifndef __CALC__
#define __CALC__

#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}op_t;

#endif
