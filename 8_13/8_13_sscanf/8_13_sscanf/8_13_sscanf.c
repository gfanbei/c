#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
//%*s��%*d  ��������
//void test01()
{

	char *str = { "12345abcdef" };
	char buf[1024] = {0};
	sscanf(str,"%*d%s",buf);
	printf("%s\n",buf);

#endif

#if 0
	//char *str = { "abcdef\t12345" };//�����ַ������ո��\t
	char *str = { "12345abcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%*s%s", buf);//��ָ��λ�ÿ�ʼ������һ��������ֱ���˳�
	printf("%s\n", buf);
}
#endif

#if  0
//%[width]  ��ȡָ���������
void test02()
{
	char *str = { "12345abcdef" };
	char buf[1024] = {0};
	sscanf(str,"%6s", buf);
	printf("buf��%s\n",buf);


}
#endif
#if 0

// %[a-z]ƥ��a��z�������ַ��������ܶ��ƥ�䣩
void test03()
{
	char *str = { "12345abAcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%*d%[a-z]", buf);//����Aʱ����a-z��ߺ���
	printf("buf��%s\n", buf);


}
#endif
#if 0
//%[aBc]ƥ��aBc��һԱ
void test04()
{
	char *str = { "aBcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%[aB]", buf);
	printf("buf��%s\n", buf);


}
#endif

#if 0
//%[^a]ƥ���a�������ַ�
void test05()
{
	char *str = { "aBcdef" };
	char buf[1024] = { 0 };
	sscanf(str, "%[^e]", buf);
	printf("buf��%s\n", buf);


}
#endif
#if 0


//%[^a-z]��ʾ��ȡa-z����������ַ�
void test06()
{
	char *str = { "aBcdef12345678" };
	char buf[1024] = { 0 };
	sscanf(str, "%[^0-9]", buf);
	printf("buf��%s\n", buf);


}
#endif

void test07()//ƥ��12345678
{
	char *str = { "aBcdef#12345678@lckld" };
	char buf[1024] = { 0 };
	sscanf(str, "%*[^#]#%[^@]", buf);
	printf("buf��%s\n", buf);


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