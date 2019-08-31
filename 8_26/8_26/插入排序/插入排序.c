#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void PrintArray(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%d ",arr[i]);
	}
}


void InsertSort(int arr[] ,int len)
{
	for (int i = 1; i < len; ++i)
	{

		if (arr[i] < arr[i - 1])
		{
			int temp = arr[i];
			int j = i - 1;
			for (; j >= 0 && temp < arr[j]; j--)
			{
				arr[j + 1] = arr[j];

			}
			arr[j + 1] = temp;
		}
	}
}
 void test()
{
	 int arr[] = {3,9,8,5,4,6,1,7};
	 int len = sizeof(arr) / sizeof(int);

	 PrintArray(arr, len);
	 InsertSort(arr, len);
	 printf("\n");
	 PrintArray(arr, len);
}


int main()
{
	test();

	return 0;
}
