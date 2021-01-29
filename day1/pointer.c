#include <stdio.h>

int main(){

	int a =9;
	int *p = &a;

	*p =100;

	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%p\n", p);
}
