#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a1 = 0;
	int a2 = 0;
	int sum = 0;
	extern int a3;//extern�Ǵ��ⲿ�ļ���ȡ���ݵ�ָ��
	scanf("%d%d", &a1, &a2);
	sum = a1 + a2 + a3;
	printf("sum = %d\n", sum);
	return 0;
}

//int main()
//{
//	//�����������ֵĺ�
//	int a1 = 1;
//	int a2 = 2;
//	//�������ݣ�ʹ�ú���scanf
//	scanf("%d%d", &a1, &a2);//&��ȡ��ַ���ţ���a1��a2���ڴ���ȡ����
//	int sum = 0;
//	//C�����﷨�涨����Ҫ�����ڵ�ǰ��������ǰ�棨�������Ǵ�ģ����������ȷ�ģ�
//	sum = a1 + a2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int num2 = 20;//ȫ�ֱ������ڴ��������
//
//int main()
//{
//	int num1 = 10;//�ֲ��������ڴ�������棨�������ڵ����ݳ�֮Ϊ����飩
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻ͬ�������ͬ���ܻ����BUG����ͬ��ʱ��ֲ���������
//
//	return 0;
//}


//int main()
//{
//	short age = 20;//���ڴ�����2���ֽڴ������20
//	float weight = 69.8f;//���ڴ�����4���ֽ������С��69.8
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
//	//printf("%d\n", age);//%d�Ǵ�ӡ����ʮ��������
//	//char ch = 'A';//char���ַ����ͣ�
//		//printf("%c\n", ch);//%c�Ǵ�ӡ�ַ���ʽ������
//	//short int --������  int--����  
//	//long num = 100;//������
//	//printf("%d\n", num);
//	//float f = 5.0;������С��
//	//printf("%f\n", f);
//	double d = 3.23;//˫����С��
//	printf("%lf\n", d);
//	return 0;
//}