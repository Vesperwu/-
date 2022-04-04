#include <stdio.h>
#include "sort.h"

void swap(int *a,int *b)
{
	int p=*a;
	*a = *b;
	*b = p;
}

int a[6] = {5,5,8,7,4,9};
int temp[6] = { 0 };
//int a[6] = { 598,777,123,456,987,0};
int b[6] = { 2,1,0,0,1,0 };

void insertSort(int* a, int n)
{
	int i = 1;//������ĵڶ���Ԫ�ؿ�ʼ����������Ԫ�رȽ�
	int j ;
	int temp;
	for (i; i < n; i++)
	{
		temp = a[i];
		j = i - 1;//ΪҪ����Ԫ��ǰ�������������һ��Ԫ��
		for (j;(j>=0&&(temp<a[j]));j--)
		{
			a[j + 1] = a[j];//���Ԫ��������һλ
		}
		a[j+1] = temp;
	}
}
void Printf(int* a,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%10d", a[i]);
	}
}

void MergeArray(int* a, int begin, int mid, int end, int* temp)//�鲢����
{
	int j;
	int k;
	int l;
	for (j=mid+1, k = begin; begin <= mid && j <= end; k++)
	{
		if (a[begin] < a[j])
			temp[k] = a[begin++];
		else 
			temp[k] = a[j++];
	}
	if (begin <= mid)
	{
		for (l = 0; l <= mid - 1; l++)
			temp[k + l] = a[begin + l];
	}
	if (j <= end)
	{
		for (l = 0; l <= end-j; l++)
			temp[k + l] = a[j + l];
	}
}
void MergeSort(int* a, int begin, int end, int* temp)//����
{
	 int temp1[7];
	 if (begin == end)
	 {
		 temp[begin] = a[begin];
	 }
	 else
	 {
        int mid =( begin + end)/2;
	    MergeSort(a, begin, mid, temp1);//��ߵ��ź���
	    MergeSort(a, mid+1, end, temp1);//�ұߵ��ź���
	    MergeArray(temp1, begin, mid , end, temp);//�ϲ�
	 }
     

}

void QuickSort_Recursion(int* a, int begin, int end)//�ݹ��������
{
	if (begin == end)
	{
		return;
	}
	int change;
	int i = begin;
	int right = end;
	int left = begin + 1;
	int mid=(begin+end)/2;
	
	while (left<=right)
	{
			if (a[left] <= a[i])//a[i]Ϊ��׼ֵ
			{
				change = a[left];
				a[left] = a[i];
				a[i] = change;
				left++;
				i++;
			}
			else
			{
				change = a[right];
				a[right] = a[left];
				a[left] = change;
				right--;
			}
		
	}
		/*Printf(a, 6);*/
		QuickSort_Recursion(a, begin, mid);//����ŷ�
		QuickSort_Recursion(a, mid+1, end);//�ұ��ŷ�
}
void QuickSort_Recursion1(int* a, int begin, int end)//������
{
	int mid;
	if(begin<end)
	{
		return;
	}
	mid = Partition(a, begin, end);
	QuickSort_Recursion1(a, begin, mid-1);//����ŷ�
	QuickSort_Recursion1(a, mid , end);//�ұ��ŷ�

}
int Partition(int* a, int begin, int end)
{
	//����ȡ�У���begin����
	int b[3] = { a[begin], a[end], a[(begin + end) / 2] };
	insertSort(b, 3);
	if (b[1] == a[end]) 
	{
		swap(&a[begin], &a[end]);
	}
	else if (b[1] == a[begin + end] / 2) 
	{
		swap(&a[begin], &a[(end + begin) / 2]);
	}
	//������/С�������������������������
	while (begin < end)
	{
		while (a[end] >= b[1] && begin < end)
			end--;
		a[begin] = a[end];
		while (a[begin] <= b[1] && begin < end)
			begin++;
		a[end] = a[begin];
	}

	a[begin] = b[1];
	return begin;
}



void CountSort(int* a, int size, int max)//��������
{
	int i = 0;
	int j = 0;
	int k = 0;
	int Count_arr[1000];
	//��ʼ������,Ĭ��ÿ��Ԫ�صĸ�����Ϊ0
	for (i = 0; i <= max; i++)
	{
		Count_arr[i] = 0;
	}
	//��������,����ÿ��Ԫ�صĸ���
	for (i = 0; i < size; i++)
		Count_arr[a[i]]++;
	
	for (i = 0; i <= max; i++)
	{
	     for ( j = 0; j < Count_arr[i]; j++)
		{
				a[k] = i;
				k++;
		}
	}
}

void RadixCountSort(int* a, int size)//��������
{
	int temp[10000]={0};
	int i = 0;
	int j = 0;
	int k = 0;
	int max=0;
	int m = 1;
	int tong[10]={0};
	//���ҳ����ֵ�����ж���Ҫ���е�ѭ������
	for (i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	int count= 1;    
	while (max >= 10)  //�����ֵ����/10������λ�� 
	{
		max /= 10;
		count++;
	}
	while (count)//��Ҫ���е�ѭ������
	{
		for (j = 0; j < 10; j++)   //ÿ�η���ǰ��ռ�����
		{
			tong[j] = 0;
		}
		for (j = 0; j < size; j++)    //ͳ��ÿ��Ͱ��Ԫ�ظ��� 
		{
			k = (a[j] / m) % 10;
			tong[k]++;
		}

		for (j = 1; j < 10; j++)
			tong[j] = tong[j - 1] + tong[j];

		
		for (j = size - 1; j >= 0; j--)
		{
			k = (a[j] / m) % 10;
			temp[tong[k] - 1] = a[j];
			tong[k]--;
		}
		for (j = 0; j < size; j++) //����ʱ��������ݸ��Ƶ�data��
			a[j] = temp[j];
		m *= 10; 
		count--;
	}
}

void ColorSort(int* a, int size)
{
	int i = 0;
	int p = 0;//����������
	int left = 0;//������
	int right = size-1;//������
	int change = 0;
	
	while (p < right)
	{
		if (a[p] == 2)
		{
			change = a[p];
			a[p] = a[right];
			a[right] = change;
			right--;
		}
		else if(a[p]==0)
		{
			change = a[p];
			a[p] = a[left];
			a[left] = change;
			left++;
			p++;
		}
		else if (a[p] == 1)
		{
			p++;
		}

	}

}

void Find_kmin_Num(int* a,int size,int k)//�ҵ���kС����
{
	insertSort( a,size);
	printf("%d\n", a[k - 1]);
}

//int main()
//{
//	Printf(a, 6);
//	printf("\n");
//	/*QuickSort_Recursion1(a, 0, 5);*/
//	/*MergeSort(a,0,5,a);*/
//	/*insertSort(a, 10);*/
//	/*QuickSort_Recursion(a, 0,5);*/
//	/*CountSort( a, 6, 987);*/
//	/*RadixCountSort(a, 6);*/
//	/*ColorSort(b, 6);*/
//	/*Find_kmin_Num(a, 6, 2);*/
//	Printf(a, 6);
//
//	return 0;
//}