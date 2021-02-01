#include <stdio.h>


// 多级指针
int main(int argc, char const *argv[])
{

	int a=3;
	int *p =&a;

	int **m = &p;

	int ***n = &m;

	printf("p=%p\n m=%p\n n=%p\n",p,m,n);
	
	return 0;
}
int main3(int argc, char const *argv[])
{
	//指针数组
	int *p[3];
	int a = 1;
	int b = 2;
	int c = 3;
	int i = 0;

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++ )
	{
		printf("%d, ", *(p[i]));
	}
	printf("\n");
	return 0;
}

int main2(int argc, char const *argv[])
{
	int a;
	int *p = &a;
	printf("%p\n", p);
	p++;

	printf("%p\n", p);
	return 0;
}

int main1(int argc, char const *argv[])
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	
	printf("%d\n",*a);

	for (i = 0; i < n; i++)
	{
		//printf("%d, ", a[i]);
		printf("%d, ", *(a+i));
	}
	printf("\n");


	int *p = a; 	//定义一个指针变量保存a的地址
	for (i = 0; i < n; i++)
	{
		p[i] = 2 * i;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(p + i));
	}
	printf("\n");
	return 0;
}