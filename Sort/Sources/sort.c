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
	int i = 1;//从数组的第二个元素开始与有序区的元素比较
	int j ;
	int temp;
	for (i; i < n; i++)
	{
		temp = a[i];
		j = i - 1;//为要插入元素前的有序区的最后一个元素
		for (j;(j>=0&&(temp<a[j]));j--)
		{
			a[j + 1] = a[j];//大的元素往后走一位
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

void MergeArray(int* a, int begin, int mid, int end, int* temp)//归并排序
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
void MergeSort(int* a, int begin, int end, int* temp)//分组
{
	 int temp1[7];
	 if (begin == end)
	 {
		 temp[begin] = a[begin];
	 }
	 else
	 {
        int mid =( begin + end)/2;
	    MergeSort(a, begin, mid, temp1);//左边的排好序
	    MergeSort(a, mid+1, end, temp1);//右边的排好序
	    MergeArray(temp1, begin, mid , end, temp);//合并
	 }
     

}

void QuickSort_Recursion(int* a, int begin, int end)//递归非枢轴存放
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
			if (a[left] <= a[i])//a[i]为标准值
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
		QuickSort_Recursion(a, begin, mid);//左边排放
		QuickSort_Recursion(a, mid+1, end);//右边排放
}
void QuickSort_Recursion1(int* a, int begin, int end)//枢轴存放
{
	int mid;
	if(begin<end)
	{
		return;
	}
	mid = Partition(a, begin, end);
	QuickSort_Recursion1(a, begin, mid-1);//左边排放
	QuickSort_Recursion1(a, mid , end);//右边排放

}
int Partition(int* a, int begin, int end)
{
	//三数取中，与begin交换
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
	//将大于/小于枢轴的数，放置于枢轴两边
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



void CountSort(int* a, int size, int max)//计数排序
{
	int i = 0;
	int j = 0;
	int k = 0;
	int Count_arr[1000];
	//初始化数组,默认每个元素的个数均为0
	for (i = 0; i <= max; i++)
	{
		Count_arr[i] = 0;
	}
	//遍历数组,记下每个元素的个数
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

void RadixCountSort(int* a, int size)//基数排序法
{
	int temp[10000]={0};
	int i = 0;
	int j = 0;
	int k = 0;
	int max=0;
	int m = 1;
	int tong[10]={0};
	//先找出最大值用来判断需要进行的循环次数
	for (i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	int count= 1;    
	while (max >= 10)  //将最大值不断/10，计算位数 
	{
		max /= 10;
		count++;
	}
	while (count)//需要进行的循环次数
	{
		for (j = 0; j < 10; j++)   //每次分配前清空计数器
		{
			tong[j] = 0;
		}
		for (j = 0; j < size; j++)    //统计每个桶的元素个数 
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
		for (j = 0; j < size; j++) //将临时数组的内容复制到data中
			a[j] = temp[j];
		m *= 10; 
		count--;
	}
}

void ColorSort(int* a, int size)
{
	int i = 0;
	int p = 0;//遍历的索引
	int left = 0;//左索引
	int right = size-1;//右索引
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

void Find_kmin_Num(int* a,int size,int k)//找到第k小的数
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