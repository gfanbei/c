#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Person
{
	char name[64];
	int age;
};
void PersonEat(struct Person *p)
{

	printf("%s �ڳ��˷�\n", p->name);

}
void test01()
{

	struct Person p1;
	strcpy(p1.name, "����ɽ��");
	PersonEat(&p1);
}



struct Dog
{
	char name[64];
	int age;
};
void DogEat(struct Dog *dog)
{

	printf("%s �ڳԹ���\n", dog->name);

}

void test02()
{
	 
	struct Dog d1;
	strcpy(d1.name, "����");
	DogEat(&d1);

	struct Person p1; 
	strcpy(p1.name, "����");
	DogEat(&p1);//DogEat(����Ĳ���ӦΪstruct Dog *�� ������û�м��

}
//1.c���Է�װ��Ϊ�����Էֿ�����
//2.���ͼ�ⲻ��

int main()
{
	  
	test02();
	//test01();
	system("pause");
	return 0;
}