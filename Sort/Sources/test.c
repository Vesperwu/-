#include <stdio.h>
#include "sort.h"
#include <time.h>
#include<stdlib.h>
void Menu()
{
     printf("1.��������\n");
     printf("2.�鲢����\n");
     printf("3.�������򣨵ݹ飩\n");
	 printf("4.���������Ż��棨�ݹ飩\n");
	 printf("5.�������򣨷ǵݹ飩\n");
     printf("6.��������\n");
     printf("7.��������\n");
	 printf("8.�˳�\n");
}

void Test_Insert_10000()//�����㷨����10000��
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
	printf("�����㷨����10000�ε�ʱ��Ϊ%dms", diff);
	Printf(a, 10000);
	
}
void Test_Insert_50000()//�����㷨����50000��
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
	printf("�����㷨����50000�ε�ʱ��Ϊ%dms", diff);
}
void Test_Insert_200000()//�����㷨����200000��
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
	printf("�����㷨����200000�ε�ʱ��Ϊ%dms", diff);
}
void charu()//����
{
	int sign;
	while (1)
	{
		printf("�������ݵ�����\n");
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


void MergeSort_Test_10000()//�鲢�㷨����10000��
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
	printf("�鲢�㷨����10000�ε�ʱ��Ϊ%dms", diff);
}
void MergeSort_Test_50000()//�鲢�㷨����50000��
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
	printf("�鲢�㷨����50000�ε�ʱ��Ϊ%dms", diff);
}
void MergeSort_Test_200000()//�鲢�㷨����200000��
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
	printf("�鲢�㷨����200000�ε�ʱ��Ϊ%dms", diff);
}


void sanshukuaipai()//����
{
	int sign;
	while (1)
	{
		printf("�������ݵ�����\n");
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


void Test_QuickSort_Recursion_10000()//���ŵݹ��10000��ʱ
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
	printf("�����㷨����10000�ε�ʱ��Ϊ%dms", diff);
}
void Test_QuickSort_Recursion_50000()//���ŵݹ��50000��ʱ
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
	printf("�����㷨����50000�ε�ʱ��Ϊ%dms", diff);
}
void Test_QuickSort_Recursion_200000()//���ŵݹ��200000��ʱ
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
	printf("�����㷨����200000�ε�ʱ��Ϊ%dms", diff);
}
void kuaipai1()//����
{
	int sign;
	while (1)
	{
		printf("�������ݵ�����\n");
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
	printf("�����Ż���ǵݹ��㷨����10000�ε�ʱ��Ϊ%dms", diff);
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
	printf("�����Ż���ǵݹ����50000�ε�ʱ��Ϊ%dms", diff);
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
	printf("�����Ż���ǵݹ��㷨����200000�ε�ʱ��Ϊ%dms", diff);
}

void kuaipai2()//�����Ż���
{
	int sign;
	while (1)
	{
		printf("�������ݵ�����\n");
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



void CountSort_10000()//�����㷨��10000��
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
	printf("�����㷨����10000�ε�ʱ��Ϊ%dms", diff);
}

void CountSort_50000()//�����㷨��50000��
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
	printf("�����㷨����50000�ε�ʱ��Ϊ%dms", diff);
}

void CountSort_200000()//�����㷨��200000��
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
	printf("�����㷨����200000�ε�ʱ��Ϊ%dms", diff);
}

void jishu0()//����
{
	int sign;
	while (1)
	{
		printf("�������ݵ�����\n");
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


void RadixCountSort_10000()//��������10000��
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
	printf("�����㷨����10000�ε�ʱ��Ϊ%dms", diff);

}
void RadixCountSort_50000()//��������50000����
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
	printf("�����㷨����50000�ε�ʱ��Ϊ%dms", diff);
}
void RadixCountSort_200000()//��������200000����
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
	printf("�����㷨����200000�ε�ʱ��Ϊ%dms", diff);

}
void jishu()
{
	int sign;
	while (1)
	{
		printf("�������ݵ�����\n");
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
		printf("��ѡ����Ҫ���Եĳ���\n");
		Menu();
		scanf_s("%d", &sign);
		switch (sign)
		{
			
		case 1://
		{
			charu();//����
			break;
		}
		case 2:
		{
			
			break;
		}
		case 3:
		{
			kuaipai1();//����

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