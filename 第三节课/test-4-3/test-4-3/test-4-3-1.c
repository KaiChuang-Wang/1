#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//#define MAX(X,Y) (X>Y?X:Y)//此处定义宏含义为当后面内容引用MAX宏时，自动将内容替换为后面的内容进行计算

int main()
{
	int a = 15;
	int* p = &a;//指针操作符，定义一个空间存储变量a的地址
	printf("%p\n", a);//%p打印地址的符号
	*p = 30;//顺网线找到a然后改变a
	printf("%d\n", a);
	return 0;
}


//void test()
//{
//	static int a = 1;//此处static延长了变量a的生命周期，所以再次进入这个函数不重新定义a的取值
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int m = 0;
//	while (m < 5)
//	{
//		test();
//		m++;
//	}
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int m = 0;
//	while (m < 5)
//	{
//		test();
//		m++;
//	}
//	return 0;
//}


//逻辑操作符
//int main()
//{
//	int a = 5;
//	int b = 2;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//此处会警告3.14为double类型数值，可能会产生数值丢失，所以可以在3.14前面增加符号(int)将3.14转化为int整型的数据。
//	return 0;
//}