#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
struct Computer
{
	char type[20];
	int price;
};
int main()
{
	struct Computer C1 = { "暗影精灵6", 7500};

	struct Computer *mt = &C1;
	//C1.price = 6000;//可直接更改。
	//printf("%s\n", (*mt).type);
	//printf("%d\n", (*mt).price);
	printf("%s\n", mt->type);
	printf("%d\n", mt->price);//两种表达效果相同但是形式不同


	//printf("电脑类型是：%s\n", C1.type);
	//printf("价格为：%d\n", C1.price);
	return 0;
}