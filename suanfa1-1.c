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
	int i,n,t,a;
	int arr[20];
	printf("请输入一个数组的长度：");
	scanf("%d",&n);
	printf("请输入一个从小到大排序的数组：");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	
	}
	for(i=0; i<n; i++)
	{printf("%d ",arr[i]);}
	printf("\n");
	printf("请输入需要查找的数：");
	scanf("%d",&t);
	printf("元素%d的位置为：",t);
	a=binary_find(arr,n-1,t);
	printf("%d\n",a); 
