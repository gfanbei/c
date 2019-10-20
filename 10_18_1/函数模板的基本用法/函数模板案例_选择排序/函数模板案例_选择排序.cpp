#include<iostream>
#include<string>
using namespace std;


//对char和int数组进行排序 ，排序规则 从大到小 利用选择排序
//交换数据模板
template<class T>
void swap1(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;

}

//选择排序模板（从大到小，内层相邻两个数组作比较，并交换下标，外层交换数据）
template<class T>
void Arraysort(T arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		int Max = i;
		for (int j = i + 1; j < len; ++j)
		{
			if (arr[Max] < arr[j])
			{
				//交换下标
				Max = j;
			}
		}
		if (Max != i)
		{
			//交换数据
			swap1(arr[Max], arr[i]);

		}
	}

}

//输出数组数据模板
template<class T>
void Printarr(T arr[],int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}
void test01()
{
	//char arr[] = "hellowaord";
	int arr[] = { 2,5,6,8,4,3,9,10 };
	int num = sizeof(arr) / sizeof(arr[0]);//sizeof(arr) / sizeof(char)
	Arraysort(arr, num);
	Printarr(arr, num);

	
}
int main()
{
	test01();
	system("pause");
	return 0;
}