#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//const （const修饰的全局变量位于常量区 ，局部变量位于栈区 ）使用场景，


struct Person
{
	char name[64];
	int age;
	int ID;
	double score;

};


//void print_person(struct Person p)
void print_person( const struct Person *p)//规避地址传递的副作用（在使用对象指针的情况下，有可能意外修改数据）
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