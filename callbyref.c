#include<stdio.h>
void Increment(int *p)
{
	*p=*p+1;
	
}
int main()
{
	int a;
	a=10;
	Increment(&a);
	printf("Address of variable in main=%d\n",&a);
	printf("a=%d\n",a );
}