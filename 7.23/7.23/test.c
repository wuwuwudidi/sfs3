#define _CRT_SECURE_NO_WARNINGS

//��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸ�λ��ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ�У�С�˷�֮
#include <stdio.h>

//int main()
//{
//	//дһ������������ǵ�ǰ�������ֽ���ʲô
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С�˴洢\n");
//
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//
//	return 0;
//}

//1 2 3��ʾ����
//int check_sys()
//{
//	int a = 1;//1 2 3
//	return *(char*)&a;//3
	// 1 2 char*p = (char*)&a;
	/*1 if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
	//2 return *p;

//}
//
//int main()
//{
//	//С�ˣ�����1
//	//��ˣ�����0
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//
//	}
//
//	return 0;
/*}*///ָ�����͵�����
//������ָ������ò������ܷ��ʼ����ֽ�
//a=-1,1000 0001
	int main()
	{

		char a = -1;//���ڴ��д���ǲ��� 10000001 11111110 11111111
		signed char b = -1;
		//11111111
		unsigned char c = -1;
		char d = -128;
		//11111111  �޷�������λ��0 
		printf("%d %d %d", a, b,c );//����������Ϊ��λ�Ƿ���λ�����ϵ�һλ
		//-1 -1 255
		printf("%u\n", d);
		return 0;
	}