#include<stdio.h>
int main()
{
	int a = 100;
	void *ptr = &a;
	printf("%d", *(int *)ptr);
	return 0;
}