# include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[] ={4,2,7,3,8,6,17};

	int last = sizeof(arr)/sizeof(int);
	printf("总长度=%d\n", last);

	for (int i = 0; i < last-1; ++i)
	{
		for (int y = 0; y < last-1-i; ++y)
		{
			if (arr[y]>arr[y+1])
			{
				int temp = arr[y];
				arr[y] =arr[y+1];
				arr[y+1] = temp;
				/* code */
			}
			
			
		}
		 
	}

	for (int i = 0; i < last; ++i)
	{
		printf("%d\n", arr[i]);
		/* code */
	}

	char cc [] ={'a','b','c'};
	// char cc = "yufsdfhasdflh";

for (int i = 0; i < strlen(cc); ++i)
{
	printf("cc=%c\n", cc[i]);

	/* code */
}
	
	return 0;
}