#include<iostream>
#include<string>
using namespace std;


//��char��int����������� ��������� �Ӵ�С ����ѡ������
//��������ģ��
template<class T>
void swap1(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;

}

//ѡ������ģ�壨�Ӵ�С���ڲ����������������Ƚϣ��������±꣬��㽻�����ݣ�
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
				//�����±�
				Max = j;
			}
		}
		if (Max != i)
		{
			//��������
			swap1(arr[Max], arr[i]);

		}
	}

}

//�����������ģ��
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