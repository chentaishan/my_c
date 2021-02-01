#include <stdio.h>

void getOne();

int main(){

	int a =9;
	int *p = &a;

	//修改指针变量指向的内容	
	*p =100;

	// printf("%d\n", a);//100
	// printf("%d\n", *p);//100
	// printf("%p\n", p);//0x7ffeeb70e8ec

	getOne();
}

void getOne(){

	int arr [] = {2,3,4,5,6,7};
	int length = sizeof(arr)/sizeof(int);
	for (int i = 0; i < length; ++i)
	{
		printf("%p\n", &arr[i]);
		/* code */
	}
}