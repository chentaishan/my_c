#include <stdio.h>

// 比较字符串大小
int main(int argc, char const *argv[])
{
	/* code */

	char str1[] ="hello";
		char str2[] ="hello";
		int i=0;
		int ret;	
	while(str1[i]==str2[i]){

		if (str1[i]=='\0'||str2[i]=='\0')
		{
			
			/* code */
			ret =0;
			break;
		}
		printf("same\n");
		i++;
	}
	  ret   = str1[i]>str2[i]? 1: -1;

	printf("%d\n",ret );	

	return 0;
}

int main1(int argc, char const *argv[])
{
	
	char str[] = "hello world";
	char *p = str;
	//指针代表数组的首元素地址
	*p = 'm';//改变首元素内容
	p++;//向右位移
	*p = 'i';//改变第二个元素内容
	printf("%s\n", str);

	p = "mike jiang";
	printf("%s\n", p);

	char *q = "test";
	printf("%s\n", q);
	return 0;
}