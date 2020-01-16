//用循环实现二分查找
#include <stdio.h>
#include <stdlib.h>
int binary_find(int arr[],size_t len,int key)
{
	int p;
	int left = 0 , right = len;
	while(left < right)
	{
		p = (left + right) / 2;
		if(arr[p] == key) return p;
		if(arr[p] > key)
		right = p;
		else
		left = p+1;
	}
	return -1;
}
int main()
{
	int i,t;
	int arr[10];
	printf("请输入一个队列：");
	for(i=0; i<10; i++)
	{
		scanf("%d",&t);
		arr[i] = t;
	}
	for(i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("%d\n",binary_find(arr,10,5)); //在arr队列中生成从10开始的递增值为1的10个数中18的位置
}