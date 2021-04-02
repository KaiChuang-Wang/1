#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//#define 定义的量为标识符常量，所定义的变量全局定义默认认为常量
//#define MIN 15  此代码含义为定义MIN为常量，数值为15

//int arr[10] = {0,1,2,3,4,5,6,7,8,9}//定义一个容量大小为10的数组库


int JIA(int m, int n)//此处是定义函数的代码，定义了JIA 这个函数，在下面的运行代码中可以引用JIA这个函数辅助运算
{
	int p = m + n;
	return p;
}
int main()
{
	int a = 8;
	int b = 15;
	int sum = 0;
	sum = JIA(a, b);//此处引用函数
	printf("sum = %d\n", sum);
	return 0;
}

//（循环代码）
//int main()
//{
//	int level = 1;
//	printf("加入魔王砍杀游戏\n");
//
//	while(level<9999)//大条件
//	{
//		printf("升级之后打魔王%d\n", level);
//		level = level +2;//此处可更改循环的条件
//	}
//	if (level >= 9999)//出条件
//		printf("恭喜您击杀魔王\n");
//
//	return 0;
//}

//(选择代码)
//int main()
//{
//	int input = 0;
//	printf("忘川PK场\n");
//	printf("王开创打得过马存倩吗？（选择1 or 0， 1为肯定， 0为否定）>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("你很机智，猜对了\n");
//	else
//		printf("不可能的傻子\n");
//	return 0;
//}//选择代码的敲法


//int main()
//{
//	printf("%c\n", '\32');//此处\32代表的是八进制数字，需要换算成十进制数字并对应ASC数值表相对应十进制编号的符号，即为\32代表的含义
//格式，\ddd为八进制数字，\xdd为十六进制数字
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "\"");//此处\改变了“原有的引号含义，仅作为一个符号出现，所以能够顺利打印出“符号，去除\就会出现错误，\为转义符号
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//实际上此字符串隐藏了\0内容
//	char arr2[] = { 'a', 'b', 'c' };//此字符组不含\0内容
//	printf("%d\n", strlen(arr1));//strlen是求字符串长度的关键词
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//定义数组，其内容默认含有\0，\0为终止字符
//	char arr2[] = { 'a', 'b', 'c'};//不含有终止字符，所以出现乱码（随机值），加入终止字符0或\0之后就会正常运行
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//在程序运行监视中可看到a对应数值常量97，b对应98,0对应0
//	//这种编码称之为ASCII 编码，后面对应的数值为ASC码值
//	return 0;
//}


//枚举常量使用方法

//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//此处一定要有分号，此过程为定义枚举常量（枚举常量不能改变）
//int main()
//{
//	enum SEX WKC = MALE;//定义WKC性别为MALE
//	printf("WKC's SEX = %d\n", WKC);
//	return 0;
//}//此代码运行结果打印为=0，三个性别分别对应0、1、2常量代码


//int main()
//{
//	const int num1 = 12;//const修饰的变量变为常变量，有常量的性质，无法被改变，故此代码无法运行
//	printf("%d\n", num1);
//	num1 = 15;
//	printf("%d\n", num1);
//	return 0;
//}