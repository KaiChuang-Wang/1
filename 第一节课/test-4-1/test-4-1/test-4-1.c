#define _CRT_SECURE_NO_WARNINGS 1

//包含一个叫<stdio.h>的文件
//std-标准 standard input output 
#include<stdio.h>
//int 是整型的意思，main前面的int表示main函数调用返回一个整型值
//main函数格式：
//int main()
int main()//主函数-程序的入口-main函数有且仅有一个
{
	//完成任务的区域（执行代码的区域）
	//函数：printf--打印函数--print function--格式：printf("内容")
	//printf是库函数，C语言本身提供给我们的函数（使用库函数相当于使用别人的东西，需要打招呼，打招呼代码：#include<stdio.h>）
	printf("hello world\n");
	return 0;
}s