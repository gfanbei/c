#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>
using namespace std;


/*
deque//���캯��
deque<T> deqT;//Ĭ�Ϲ�����ʽ
deque(begin,end);//���캯������beg��end�������е�Ԫ�ؿ���������
deque(n,elem);//���캯����n��elem����������
deque(const deque &deq);//�������캯��

deque//��ֵ����
assign(beg,end);//����beg��end�������е�Ԫ�ؿ���������
assign(n,elm);//��n��elem������ֵ������
deque& operator=(const deque &deq);//���صȺŲ�����
swap(deq);//�������캯��

deque//��С����
deque.size();//����������Ԫ�ظ���
deque.empty();//�ж��Ƿ�Ϊ��
deque.resize(num);//����ָ�������ĳ���Ϊnum
deque.resize(num,elem);

*/

void printdeaue(deque<int>&d)
{
	//��ͨ������iteration    ��������� reverse_iterator   ֻ�������� const_iterator
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator  ��֤���ݲ����޸�
	{
		//*it = 10000l;
		cout << *it << " ";

	}
	cout << endl;

}
void test01()
{
	deque<int>d;//Ĭ�Ϲ�����ʽ

	d.push_back(10);//β�巨
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);

	printdeaue(d);//10  20  30  40

	deque<int> d2(d.begin(),d.end());
	d2.push_back(2000);
	printdeaue(d2);//10 20 30 40 2000

	d.swap(d2);
	printdeaue(d);//10 20 30 40 2000

	if (d2.empty())
	{
		cout << "d2Ϊ��" << endl;
	}
	else
	{
		cout << "d2��Ϊ��  ��СΪ" <<d2.size()<< endl;
	}


}


/*
deque//˫�˲����ɾ������
push_back(elem);//������β������һ������
push_front(elem);//������ͷ������һ������
pop_back();//ɾ���������һ������
push_front();//ɾ��������һ������

deque//���ݴ�ȡ
at(idx);//��������idxָ����ֵ ����Խ���׳��쳣
operator[];//��������idxָ����ֵ ����Խ�粻�׳��쳣��ֱ�ӹ�
front();//���ص�һ������
back();//�������һ������

deque//�������
insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
insert(pos,n,elem);//��posλ�ò���n��elemԪ�صĿ��� ,�޷���ֵ
insert(pos,beg,end);//��posλ�ò���(beg,end) �����ֵ���޷���ֵ

deque//ɾ������
clear();
erase(beg,end);
erase(pos);//ɾ��posλ�� ����  ������һ�����ݵ�λ��
*/

void test02()
{
	deque<int> d;
	d.push_back(20);
	d.push_back(60);
	d.push_back(90);
	d.push_front(80);//ͷ��
	d.push_front(40);

	printdeaue(d);//40 80 20 60 90

	//ɾ�� ͷɾ βɾ��
	d.pop_back();//
	d.pop_front();//ͷɾ
	printdeaue(d);//80 20 60

	cout << "d.front " << d.front() << endl;
	cout << "d.front " << d.back() << endl;

	//����
	deque<int> d2;
	d2.push_back(50);
	d2.push_back(70);

	d2.insert(d2.begin(),d.begin(),d.end());//80 20  60 50 70
	printdeaue(d2);


}

bool m_compare(int v1,int v2)
{
	return v1 > v2;//100   10  ��Ϊ�Ӵ�С
}
//sort�����㷨
void test03()
{
	deque<int> d;
	
	d.push_back(6);
	d.push_back(10);
	d.push_back(12);
	d.push_back(2);
	d.push_back(1);

	printdeaue(d);
	sort(d.begin(),d.end());//Ĭ�ϴ�С����
	printdeaue(d);

	//�Ӵ�С

	sort(d.begin(), d.end(),m_compare);//m_compare�ص�����
	printdeaue(d);

}
int main()
{

	//test01();
	//test02();
	test03();
	system("pause");
	return 0;

}