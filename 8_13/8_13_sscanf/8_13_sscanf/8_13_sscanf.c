#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
//%*s或%*d  跳过数据
//void test01()
{

	char *str = { "12345abcdef" };
	char buf[1024] = {0};
	sscanf(str,"%*d%s",buf);
	printf("%s\n",buf);

#endif

#if 0
	//char *str = { "abcdef\t12345" };//忽略字符串到空格或\t
	char *str = { "12345abcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%*s%s", buf);//从指定位置开始，若第一个不是则直接退出
	printf("%s\n", buf);
}
#endif

#if  0
//%[width]  读取指定宽度数据
void test02()
{
	char *str = { "12345abcdef" };
	char buf[1024] = {0};
	sscanf(str,"%6s", buf);
	printf("buf：%s\n",buf);


}
#endif
#if 0

// %[a-z]匹配a—z中任意字符（尽可能多的匹配）
void test03()
{
	char *str = { "12345abAcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%*d%[a-z]", buf);//遇到A时不再a-z后边忽略
	printf("buf：%s\n", buf);


}
#endif
#if 0
//%[aBc]匹配aBc中一员
void test04()
{
	char *str = { "aBcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%[aB]", buf);
	printf("buf：%s\n", buf);


}
#endif

#if 0
//%[^a]匹配非a的任意字符
void test05()
{
	char *str = { "aBcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%[^e]", buf);
	printf("buf：%s\n", buf);


}
#endif
#if 0


//%[^a-z]表示读取a-z以外的所有字符
void test06()
{
	char *str = { "aBcdef12345678" };
	char buf[1024] = { 0 };
	sscanf(str, "%[^0-9]", buf);
	printf("buf：%s\n", buf);


}
#endif

void test07()//匹配12345678
{
	char *str = { "aBcdef#12345678@lckld" };
	char buf[1024] = { 0 };
	sscanf(str, "%*[^#]#%[^@]", buf);
	printf("buf：%s\n", buf);


}
int main()
{
	  test07();
	 //test06();
	//test05();
	// test04();
	//test03();
	//test02();
	//test01();
	return 0;
}