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

	printf("%s 在吃人饭\n", p->name);

}
void test01()
{

	struct Person p1;
	strcpy(p1.name, "亚历山大");
	PersonEat(&p1);
}



struct Dog
{
	char name[64];
	int age;
};
void DogEat(struct Dog *dog)
{

	printf("%s 在吃狗粮\n", dog->name);

}

void test02()
{
	 
	struct Dog d1;
	strcpy(d1.name, "旺财");
	DogEat(&d1);

	struct Person p1; 
	strcpy(p1.name, "老王");
	DogEat(&p1);//DogEat(）里的参数应为struct Dog *的 ，但是没有检测

}
//1.c语言封装行为和属性分开处理
//2.类型检测不够

int main()
{
	  
	test02();
	//test01();
	system("pause");
	return 0;
}