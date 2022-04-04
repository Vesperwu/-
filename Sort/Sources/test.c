#include <stdio.h>
#include "sort.h"
#include <time.h>
#include<stdlib.h>
void Menu()
{
     printf("1.插入排序\n");
     printf("2.归并排序\n");
     printf("3.快速排序（递归）\n");
	 printf("4.快速排序优化版（递归）\n");
	 printf("5.快速排序（非递归）\n");
     printf("6.计数排序\n");
     printf("7.基数排序\n");
	 printf("8.退出\n");
}

void Test_Insert_10000()//插入算法测试10000次
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[10000] = {0};
	for (i = 0; i < 10000; i++)
	{
		a[i] = rand()%1000;
	}
	clock_t start = clock();
	insertSort(a, 10000);
	clock_t diff = clock()-start;
	printf("插入算法测试10000次的时间为%dms", diff);
	Printf(a, 10000);
	
}
void Test_Insert_50000()//插入算法测试50000次
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[50000] = { 0 };
	for (i = 0; i < 50000; i++)
	{
		a[i] = rand();
	}
	clock_t start = clock();
	insertSort(a, 50000);
	clock_t diff = clock() - start;
	printf("插入算法测试50000次的时间为%dms", diff);
}
void Test_Insert_200000()//插入算法测试200000次
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[200000] = { 0 };
	for (i = 0; i < 200000; i++)
	{
		a[i] = rand();
	}
	clock_t start = clock();
	insertSort(a, 200000);
	clock_t diff = clock() - start;
	printf("插入算法测试200000次的时间为%dms", diff);
}
void charu()//插入
{
	int sign;
	while (1)
	{
		printf("测试数据的数量\n");
		printf("1. 10000  2. 50000  3. 200000\n");

		scanf_s("%d", &sign);
		switch (sign)
		{

		case 1://
		{
			Test_Insert_10000();
			break;
		}
		case 2:
		{
			Test_Insert_50000();
			break;
		}
		case 3:
		{
			Test_Insert_200000();

			break;
		}
		}
	}
}


void MergeSort_Test_10000()//归并算法测试10000次
{
	int temp[10000];
	srand((unsigned)time(NULL));
	int i = 0;
	int a[200000] = { 0 };
	for (i = 0; i < 200000; i++)
	{
		a[i] = rand();
	}
	clock_t start = clock();
	MergeSort(a, 0, 10000 - 1,temp);
	clock_t diff = clock() - start;
	printf("归并算法测试10000次的时间为%dms", diff);
}
void MergeSort_Test_50000()//归并算法测试50000次
{
	int temp[50000];
	srand((unsigned)time(NULL));
	int i = 0;
	int a[50000] = { 0 };
	for (i = 0; i < 500000; i++)
	{
		a[i] = rand();
	}
	clock_t start = clock();
	MergeSort(a, 0, 50000 - 1, temp);
	clock_t diff = clock() - start;
	printf("归并算法测试50000次的时间为%dms", diff);
}
void MergeSort_Test_200000()//归并算法测试200000次
{
	int temp[200000];
	srand((unsigned)time(NULL));
	int i = 0;
	int a[200000] = { 0 };
	for (i = 0; i < 200000; i++)
	{
		a[i] = rand();
	}
	clock_t start = clock();
	MergeSort(a, 0, 200000 - 1, temp);
	clock_t diff = clock() - start;
	printf("归并算法测试200000次的时间为%dms", diff);
}


void sanshukuaipai()//插入
{
	int sign;
	while (1)
	{
		printf("测试数据的数量\n");
		printf("1. 10000  2. 50000  3. 200000\n");

		scanf_s("%d", &sign);
		switch (sign)
		{

		case 1://
		{
			Test_Insert_10000();
			break;
		}
		case 2:
		{
			Test_Insert_50000();
			break;
		}
		case 3:
		{
			Test_Insert_200000();

			break;
		}
		}
	}
}


void Test_QuickSort_Recursion_10000()//快排递归版10000用时
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[10000] = { 0 };
	for (i = 0; i < 10000; i++)
	{
		a[i] = rand()%1000;
	}
	clock_t start = clock();
	QuickSort_Recursion(a, 0,10000-1);
	clock_t diff = clock() - start;
	printf("快排算法测试10000次的时间为%dms", diff);
}
void Test_QuickSort_Recursion_50000()//快排递归版50000用时
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[50000] = { 0 };
	for (i = 0; i < 50000; i++)
	{
		a[i] = rand()%1000;
	}
	clock_t start = clock();
	QuickSort_Recursion(a, 0, 50000 - 1);
	clock_t diff = clock() - start;
	printf("快排算法测试50000次的时间为%dms", diff);
}
void Test_QuickSort_Recursion_200000()//快排递归版200000用时
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[200000] = { 0 };
	for (i = 0; i < 200000; i++)
	{
		a[i] = rand()%1000;
	}
	clock_t start = clock();
	QuickSort_Recursion(a, 0, 200000 - 1);
	Printf(a, 200000);
	clock_t diff = clock() - start;
	printf("快排算法测试200000次的时间为%dms", diff);
}
void kuaipai1()//快排
{
	int sign;
	while (1)
	{
		printf("测试数据的数量\n");
		printf("1. 10000  2. 50000  3. 200000\n");

		scanf_s("%d", &sign);
		switch (sign)
		{

		case 1://
		{
			Test_QuickSort_Recursion_10000();
			break;
		}
		case 2:
		{
			Test_QuickSort_Recursion_50000();
			break;
		}
		case 3:
		{
			Test_QuickSort_Recursion_200000();
			break;
		}
		case 4:
		{
			break;
		}
	
		}
		if (sign)
			break;
	}
}


void Test_QuickSort_Recursion1_10000()
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[10000] = { 0 };
	for (i = 0; i < 10000; i++)
	{
		a[i] = rand() % 1000;
	}
	clock_t start = clock();
	QuickSort_Recursion1(a, 0, 10000 - 1);
	clock_t diff = clock() - start;
	printf("快速优化版非递归算法测试10000次的时间为%dms", diff);
}
void Test_QuickSort_Recursion1_50000()
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[50000] = { 0 };
	for (i = 0; i < 50000; i++)
	{
		a[i] = rand() % 1000;
	}
	clock_t start = clock();
	QuickSort_Recursion1(a, 0, 50000 - 1);
	clock_t diff = clock() - start;
	printf("快速优化版非递归测试50000次的时间为%dms", diff);
}
void Test_QuickSort_Recursion1_200000()
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[200000] = { 0 };
	for (i = 0; i < 200000; i++)
	{
		a[i] = rand() % 1000;
	}
	clock_t start = clock();
	QuickSort_Recursion1(a, 0, 200000 - 1);
	clock_t diff = clock() - start;
	printf("快速优化版非递归算法测试200000次的时间为%dms", diff);
}

void kuaipai2()//快排优化版
{
	int sign;
	while (1)
	{
		printf("测试数据的数量\n");
		printf("1. 10000  2. 50000  3. 200000\n");

		scanf_s("%d", &sign);
		switch (sign)
		{

		case 1://
		{
			Test_QuickSort_Recursion1_10000();
			break;
		}
		case 2:
		{
			Test_QuickSort_Recursion1_50000();
			break;
		}
		case 3:
		{
			Test_QuickSort_Recursion1_200000();
			break;
		}
		case 4:
		{
			break;
		}

		}
		if (sign)
			break;
	}
}



void CountSort_10000()//计数算法测10000次
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[10000] = { 0 };
	for (i = 0; i < 10000; i++)
	{
		a[i] = rand()%1000;
	}
	clock_t start = clock();
	CountSort(a,10000,999);
	clock_t diff = clock() - start;
	printf("计数算法测试10000次的时间为%dms", diff);
}

void CountSort_50000()//计数算法测50000次
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[50000] = { 0 };
	for (i = 0; i < 50000; i++)
	{
		a[i] = rand() % 1000;
	}
	clock_t start = clock();
	CountSort(a, 50000, 999);
	clock_t diff = clock() - start;
	printf("计数算法测试50000次的时间为%dms", diff);
}

void CountSort_200000()//计数算法测200000次
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[200000] = { 0 };
	for (i = 0; i < 200000; i++)
	{
		a[i] = rand()%100 ;
	}
	clock_t start = clock();
	CountSort(a, 200000, 999);
	clock_t diff = clock() - start;
	printf("计数算法测试200000次的时间为%dms", diff);
}

void jishu0()//计数
{
	int sign;
	while (1)
	{
		printf("测试数据的数量\n");
		printf("1. 10000  2. 50000  3. 200000\n");

		scanf_s("%d", &sign);
		switch (sign)
		{

		case 1://
		{
			CountSort_10000();

			break;
		}
		case 2:
		{
			CountSort_50000();
		}
		case 3:
		{
			CountSort_200000();

			break;
		}
		case 4:
		{
			break;
		}

		}
		if (sign==4)
			break;
		
	}

}


void RadixCountSort_10000()//基数排序10000次
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[10000] = { 0 };
	for (i = 0; i < 10000; i++)
	{
		a[i] = rand();
	}
	clock_t start = clock();
	RadixCountSort(a, 10000);
	clock_t diff = clock() - start;
	printf("基数算法测试10000次的时间为%dms", diff);

}
void RadixCountSort_50000()//基数排序50000个数
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[50000] = { 0 };
	for (i = 0; i < 50000; i++)
	{
		a[i] = rand();
	}
	clock_t start = clock();
	RadixCountSort(a, 50000);
	clock_t diff = clock() - start;
	printf("基数算法测试50000次的时间为%dms", diff);
}
void RadixCountSort_200000()//基数排序200000个数
{
	srand((unsigned)time(NULL));
	int i = 0;
	int a[200000] = { 0 };
	for (i = 0; i < 200000; i++)
	{
		a[i] = rand() ;
	}
	clock_t start = clock();
	RadixCountSort(a, 200000);
	clock_t diff = clock() - start;
	printf("基数算法测试200000次的时间为%dms", diff);

}
void jishu()
{
	int sign;
	while (1)
	{
		printf("测试数据的数量\n");
		printf("1.10000  2.50000  3.200000\n");
		
		scanf_s("%d", &sign);
		switch (sign)
		{

		case 1://
		{
			RadixCountSort_10000();
			
			break;
		}
		case 2:
		{
			RadixCountSort_50000();
			break;
		}
		case 3:
		{
			RadixCountSort_200000();

			break;
		}
		case 4:
		{
			break;
		}

		}
		if (sign == 4)
			break;
	
	}

}

int main()
{
	int sign;

	while (1)
	{
		printf("请选择你要测试的程序\n");
		Menu();
		scanf_s("%d", &sign);
		switch (sign)
		{
			
		case 1://
		{
			charu();//插入
			break;
		}
		case 2:
		{
			
			break;
		}
		case 3:
		{
			kuaipai1();//快排

			break;
		}
		case 4:
		{
			kuaipai2();
			break;
		}
		case 5:
		{

			break;
		}
		case 6:
		{
			jishu0();
			break;
		}
		case 7:
		{
			jishu();
			break;
		}
		case 8:
		{

			break;
		}
		}
		if (sign == 8)
			break;

	}
}