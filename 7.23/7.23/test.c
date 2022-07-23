#define _CRT_SECURE_NO_WARNINGS

//大端（存储）模式，是指数据的低位保存在内存的高位地址中，而数据的高位，保存在内存的低地址中，小端反之
#include <stdio.h>

//int main()
//{
//	//写一个代码告诉我们当前机器的字节是什么
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端存储\n");
//
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//
//	return 0;
//}

//1 2 3表示方法
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
//	//小端，返回1
//	//大端，返回0
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//
//	}
//
//	return 0;
/*}*///指针类型的意义
//决定了指针解引用操作符能访问几个字节
//a=-1,1000 0001
	int main()
	{

		char a = -1;//在内存中存的是补码 10000001 11111110 11111111
		signed char b = -1;
		//11111111
		unsigned char c = -1;
		char d = -128;
		//11111111  无符号数高位补0 
		printf("%d %d %d", a, b,c );//整形提升认为高位是符号位，补上第一位
		//-1 -1 255
		printf("%u\n", d);
		return 0;
	}