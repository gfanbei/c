#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct LinkNode  //��С4�ֽ�
{
	struct LinkNode *next;

};

struct Person
{

	struct LinkNode node; //4�ֽ�  ��Ҳ����int����Ҫע�� �����ǵ���Ļ���˫��ģ�
	char name[64];
	int age;

};
void test()
{
	struct Person p1 = { NULL,"aaa",10 };
	struct Person p2 = { NULL,"bbb",20 };
	struct Person p3 = { NULL,"ccc",30 };
	struct Person p4 = { NULL,"ddd",40 };
	struct Person p5 = { NULL,"eee",50 };

	struct LinkNode *PP1 = ( struct LinkNode * )&p1;//PP1���p1��ǰ4���ֽڣ�������p1������
	struct LinkNode *PP2 = ( struct LinkNode * )&p2;
	struct LinkNode *PP3 = ( struct LinkNode * )&p3;
	struct LinkNode *PP4 = ( struct LinkNode * )&p4;
	struct LinkNode *PP5 = ( struct LinkNode * )&p5;

	PP1->next = PP2;//PP1��nextָ��PP2����p2deǰ4���ֽڣ�
	PP2->next = PP3;
	PP3->next = PP4;
	PP4->next = PP5;
	PP5->next = NULL;

	struct LinkNode *pcurrent = PP1;
	while (pcurrent != NULL)
	{
		struct Person *person = (struct Person *)pcurrent;//(ǿתΪstruct person * ��ȫ������p1����)
		printf("name;%s  age:%d\n", person->name, person->age);
		pcurrent = pcurrent->next;//ָ����һ����ǰ4�ֽ�
	}
}






int main()
{

	test();
	return 0;

}