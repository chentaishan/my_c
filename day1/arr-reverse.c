#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int arr[] ={1,2,3,4,5,6,7};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("lenght =  %d\n",length);
	for (int i = 0; i < length/2; ++i)
	{
		int temp =0;
		printf("t=%d  i=%d  l-i=%d\n",temp,arr[i],arr[length-1-i]);
		
		temp = arr[i];
		arr[i] = arr[length-1-i];
		arr[length-1-i] = temp;
		/* code */
	}

	for (int i = 0; i < length; ++i)
	{
		printf("%d\n", arr[i]);
		/* code */
	}


	return 0;
}