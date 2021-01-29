#include <stdio.h>

int main(){

	int a =9;
	int *p = &a;

	//修改指针变量指向的内容	
	*p =100;

	printf("%d\n", a);//100
	printf("%d\n", *p);//100
	printf("%p\n", p);//0x7ffeeb70e8ec
}
