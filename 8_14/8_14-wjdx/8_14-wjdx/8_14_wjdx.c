#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//获得文件行数
int getFileLines(FILE *file)
{

	if (NULL == file)
	{
		return -1;
	}

	char buf[1024] = { 0 };

	int lines = 0;

	while (fgets(buf, 1024, file) != NULL)
	{
		++lines;
	}

	//恢复文件指针指向文件起始位置
	fseek(file, 0, SEEK_SET);



	return lines;
}


//读取文件数据
void readFileData(FILE *file, int lines, char ** contents)
{
	if (NULL == file)
	{
		return;
	}

	if (NULL == contents)
	{
		return;
	}

	if (lines <= 0)
	{
		return;
	}

	//创建缓冲区
	char buf[1024] = { 0 };
	int index = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		//printf("buf:%s", buf);
		int curLineLen = strlen(buf) + 1;
		//给当前行分配内存
		char *lineContent = malloc(sizeof(char)* curLineLen);
		//将行数据拷贝到空间中
		strcpy(lineContent, buf);

		contents[index++] = lineContent;

		memset(buf, 0, 1024);
	}

}

void showFileContents(char **contents, int lines)
{
	for (int i = 0; i < lines; ++i)
	{
		printf("%d行:%s", i + 1, contents[i]);
	}
}

//释放文件数据内存
void freeFileSpace(char **contents, int lines)
{
	for (int i = 0; i < lines; ++i)
	{
		if (contents[i] != NULL)
		{
			free(contents[i]);
			contents[i] = NULL;
		}
	}

	free(contents);
	contents = NULL;
}

void test()
{

	//打开文件
	FILE *file = fopen("./text.txt", "r");
	if (NULL == file)
	{
		printf("打开文件失败!\n");
		return;
	}

	//统计文件行数
	int lines = 10;
	lines = getFileLines(file);
	printf("lines:%d\n", lines);

	char **pContents = malloc(sizeof(char *)* lines);

	//读取文件内容
	readFileData(file, lines, pContents);

	//关闭文件
	fclose(file);
	file = NULL;

	//打印文件内容
	showFileContents(pContents, lines);

	//释放文件数据
	freeFileSpace(pContents, lines);
}


int main()
{

	test();

	system("pause");
	return 0;
}