#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
struct Computer
{
	char type[20];
	int price;
};
int main()
{
	struct Computer C1 = { "��Ӱ����6", 7500};

	struct Computer *mt = &C1;
	//C1.price = 6000;//��ֱ�Ӹ��ġ�
	//printf("%s\n", (*mt).type);
	//printf("%d\n", (*mt).price);
	printf("%s\n", mt->type);
	printf("%d\n", mt->price);//���ֱ��Ч����ͬ������ʽ��ͬ


	//printf("���������ǣ�%s\n", C1.type);
	//printf("�۸�Ϊ��%d\n", C1.price);
	return 0;
}