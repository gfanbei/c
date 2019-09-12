#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#if 0
char str[] = "http://www.ibegroup.com/";
char *p = str;
int n = 10;
printf("%d  ", sizeof(str));
printf("%d  ", sizeof(p));
printf("%d  ", sizeof(n));



//void *p = malloc(100);

//	printf("%d  ", sizeof(p));



//求两个字符串的最大子串

	//test()
//{

	char* SubString(const char* string1, const char* string2)
	{
		if (strstr(string1, string2) != NULL)
			return (char*)string2;

		char* substring = (char*)malloc(256);

		static int len;
		char* result = (char*)malloc(256);

		for (int i = strlen(string2) - 1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				memcpy(substring, &string2[j], i - j);
				substring[i - j] = '\0';

				if (strstr(string1, substring) != NULL)
				{
					if (i - j > len)
					{
						len = i - j;
						memcpy(result, substring, len);
						result[len] = '\0';
					}
				}
			}
		}

		if (len != 0)
			return result;
		else
			return NULL;
	}

	int main()
	{
		char* string2 = "abnovastar";//目标串1
		char* string1 = "cnovadef";//目标串2

		char* result = strlen(string1) > strlen(string2) ? SubString(string1, string2) : SubString(string2, string1);

		printf("%s\n", result);
		return 0;
	}
	
#endif

	


	int main()
	{
		extern const   int a;

		printf("a = %d\n",a);
		return 0;
	}
