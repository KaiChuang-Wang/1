#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//#define MAX(X,Y) (X>Y?X:Y)//�˴�����꺬��Ϊ��������������MAX��ʱ���Զ��������滻Ϊ��������ݽ��м���

int main()
{
	int a = 15;
	int* p = &a;//ָ�������������һ���ռ�洢����a�ĵ�ַ
	printf("%p\n", a);//%p��ӡ��ַ�ķ���
	*p = 30;//˳�����ҵ�aȻ��ı�a
	printf("%d\n", a);
	return 0;
}


//void test()
//{
//	static int a = 1;//�˴�static�ӳ��˱���a���������ڣ������ٴν���������������¶���a��ȡֵ
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


//�߼�������
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
//	int a = (int)3.14;//�˴��ᾯ��3.14Ϊdouble������ֵ�����ܻ������ֵ��ʧ�����Կ�����3.14ǰ�����ӷ���(int)��3.14ת��Ϊint���͵����ݡ�
//	return 0;
//}