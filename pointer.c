#include<stdio.h>
int main()
{
	int a;
	a=10;
	int *p;
	p=&a;
	printf("%d\n",p);
	printf("%d\n",*p);
}