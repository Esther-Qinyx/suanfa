//用递归调用的方式实现二分查找
#include <stdio.h>
#include <stdlib.h>
// 二分查找-数据有序
int _binary_find(int arr[],int left,int right,int key)
{
	int p;
	if(left >= right) return -1;
	p = (left+right)/2;
	if(arr[p] == key) return p;
	if(arr[p] > key)
	return _binary_find(arr,left,p,key);
	else
	return _binary_find(arr,p+1,right,key);
}

int binary_find(int arr[],size_t len,int key)
{
	
	return _binary_find(arr,0,len,key);
}
int main()
{
	int i;
	int arr[10];
	for(i=0; i<10; i++)
	{
		arr[i] = i+10;
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("%d\n",binary_find(arr,10,18)); //在arr队列中生成从10开始的递增值为1的10个数中18的位置
}
