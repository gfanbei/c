#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//const ��const���ε�ȫ�ֱ���λ�ڳ����� ���ֲ�����λ��ջ�� ��ʹ�ó�����


struct Person
{
	char name[64];
	int age;
	int ID;
	double score;

};


//void print_person(struct Person p)
void print_person( const struct Person *p)//��ܵ�ַ���ݵĸ����ã���ʹ�ö���ָ�������£��п��������޸����ݣ�
{
	//p->ID = 50;
	//printf("name:%s age:%d ID:%d double:%f",p.name,p.age ,p.ID,p.score);
	printf("name:%s age:%d ID:%d double:%f", p->name, p->age, p->ID, p->score);

}
void test01()
{
	struct Person p = {"zhangsan", 64 , 256, 59.9};
	//print_person(p);
	print_person(&p);
}
int main()
{

	test01();
	return 0;
}