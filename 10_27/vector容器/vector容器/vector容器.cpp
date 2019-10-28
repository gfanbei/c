#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;



void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);//v�в���10����
		cout << v.capacity() << endl;//��������������������������� ����������䣨δ֪��

	}

}

#if 0

vector //���캯��
vector<T> v;//����Ĥ����ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(), v.end());//��v[beg��end]�����е����ݸ�ֵ������
vector(n, elem);//���캬����n��elemֵ����������
vector(const vector &vec); //�������캬��

//���� ʹ�õڶ������캯�� ����

int arr[] = { 6,9,8,5,4,7 };
vector<int >(arr, arr + sizeof(arr) / sizeof(int));



vector //���ø�ֵ����
assign(beg, end);//��[beg��end]�����е����ݸ�ֵ������
assign(n, elm);//��n��elem��������ֵ������
vector& operator=(const vector &vec);//���صȺŲ�����
swap(vec);//��vec�뱾��Ԫ�ػ���


vector //��С����
size();//����������Ԫ�صĸ���
empty();//�ж������Ƿ�Ϊ��
resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã���������̣���ĩβ����������Ԫ�ر�ɾ��
resize(int num, elem); // ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�ã������������ĩβ����������Ԫ�ر�ɾ��
capacity();//����������
reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

#endif

//��ӡ�����е�����
void printvector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test02()
{
	vector<int> v;
	int arr[] = { 6,9,8,5,4,7 };
	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//��v[beg��end]�����е����ݸ�ֵ������

	vector<int >v2(v1.begin(),v1.end());
	printvector(v2);

	vector<int> v3(10,100);//���캬����n��elemֵ����������
	printvector(v3);
	
	//��ֵʹ��
	vector<int> v4;
	v4.assign(v3.begin(), v3.end());//��[beg��end]�����е����ݸ�ֵ������
	printvector(v4);


	v4.swap(v2);//��vec�뱾��Ԫ�ػ���
	cout << "�������v4 " << endl;
	printvector(v4);

	cout << "v4�����Ĵ�С " << v4.size() << endl;

	if (v4.empty())//�ж������Ƿ�Ϊ��
	{
		cout << "v4��" << endl;
	}
	else
	{
		cout << "v4����" << endl;
	}


	//v4.resize(10);//��λ�� 0 ���
	v4.resize(10,-1);//��ָ��ֵ-1���
	//v4.resize(3);//���ɾ��
	printvector(v4);
}

//����swap�����ռ�
void test03()
{
	vector<int> v;
	for (int i = 0;i< 100000;++i)
	{
		
		v.push_back(i);

	}
	cout << "v������" << v.capacity() << endl;
	cout << "v�Ĵ�С" << v.size() << endl;

	v.resize(5);
	cout << "v������" << v.capacity() << endl;
	cout << "v�Ĵ�С" << v.size() << endl;

	//����swap
	vector<int>(v).swap(v);
	cout << "v������" << v.capacity() << endl;
	cout << "v�Ĵ�С" << v.size() << endl;
}


//reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
void test04()
{
	vector<int> v;
	v.reserve(100000);//��Ԥ�����ռ䣩��ǰ���� 1��
	int *p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; ++i)
	{
		v.push_back(i);
		if (p != &v[0])//������������100000�ռ����˶��ٴ�
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}

#if 0
vector//���ݴ�ȡ����
at(int idx);//��������idx��ָ���ݣ�Խ��ʱ���׳�out_of_range�쳣
operator[];//��������idx��ָ���ݣ�Խ��ʱ����ֱ�ӱ���
front();//���������е�һ��Ԫ��
back();//�������������һ��Ԫ��


vector//�����ɾ������
insert(const_iterator pos, int count, ele);//��Ԫ��
pop_back();//ɾ�����һ��Ԫ��
erase(const_iterator start, const_iterator end);//ɾ����������start��end֮��Ԫ��
erase(const_iterator pos);//ɾ������ָ���Ԫ��
claer();//ɾ������������Ԫ��

#endif

void test05()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);


	cout << "v��front  " << v.front() << endl;//���������е�һ��Ԫ��
	cout << "v��back  " << v.back() << endl;

	//v.insert(v.begin(), 200);
	v.insert(v.begin(), 2, 200);//��Ԫ�� ����1 ������ ����2 ����ĸ���  ����3  ���������
	printvector(v);

	v.pop_back();//ɾ�����һ��Ԫ��
	printvector(v);

	//v.erase(v.begin(),v.end());//ɾ��
	
	v.clear();//ɾ��
	if (v.empty())
	{
		cout << "Ϊ��" << endl;
	}
}

//�������
void test06()
{
	vector<int >v;

	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}
	printvector(v);

	//�������  reverse_iterator���������

	for (vector<int>::reverse_iterator  it = v.rbegin(); it != v.rend(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;

	//vector��������������ʵĵ�������֧����Ծʽ����
	vector<int>::iterator itBegin = v.begin();
	itBegin = itBegin + 3;
	//�������д���������������������������ʵ�����

	list<int> l;
	for (int i = 0; i < 10; ++i)
	{
		l.push_back(i);
	}
	list<int>::iterator lit = l.begin();
	//lit = lit + 3;//list��������֧���������
}

int main()
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();
	system("pause");
	return 0;
}