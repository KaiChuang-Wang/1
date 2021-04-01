#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a1 = 0;
	int a2 = 0;
	int sum = 0;
	extern int a3;//extern是从外部文件提取数据的指令
	scanf("%d%d", &a1, &a2);
	sum = a1 + a2 + a3;
	printf("sum = %d\n", sum);
	return 0;
}

//int main()
//{
//	//计算两个数字的和
//	int a1 = 1;
//	int a2 = 2;
//	//输入数据，使用函数scanf
//	scanf("%d%d", &a1, &a2);//&是取地址符号，把a1和a2从内存里取出来
//	int sum = 0;
//	//C语言语法规定变量要定义在当前代码块的最前面（所以这是错的，上面的是正确的）
//	sum = a1 + a2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int num2 = 20;//全局变量，在代码块外面
//
//int main()
//{
//	int num1 = 10;//局部变量，在代码块里面（大括号内的内容称之为代码块）
//	//局部变量和全局变量的名字建议不同，如果相同可能会产生BUG，相同的时候局部变量优先
//
//	return 0;
//}


//int main()
//{
//	short age = 20;//向内存申请2个字节存放数字20
//	float weight = 69.8f;//向内存申请4个字节来存放小数69.8
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//	return 0;
//}
//int main()
//{
//	//int age = 20;
//	//printf("%d\n", age);//%d是打印整型十进制数据
//	//char ch = 'A';//char是字符类型，
//		//printf("%c\n", ch);//%c是打印字符格式的数据
//	//short int --短整型  int--整型  
//	//long num = 100;//长整型
//	//printf("%d\n", num);
//	//float f = 5.0;单精度小数
//	//printf("%f\n", f);
//	double d = 3.23;//双精度小数
//	printf("%lf\n", d);
//	return 0;
//}