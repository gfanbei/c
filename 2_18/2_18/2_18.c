# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>

int main()//整形与浮点型的存取
{
   int x = 9;
   float* f = (float*)&x;
   printf("int %d\n",x);
   printf("float %f\n",*f);
    *f = 9.0;
   printf("int %d\n",x);
   printf("float %f\n",*f);

 return 0;
}