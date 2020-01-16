//用递归调用实现快速排序，语言不限，并随机生成测试算例，统计比较两种算法占用的时间。

#include<stdio.h>
#include<stdlib.h>
 
int Partition(int *arr,int low,int high)
{
	int datum;
    if(arr == NULL || low < 0 || low > high)
    {
        return -1;
    }
     datum= arr[low];
    while(low < high)
    {
		while((low<high) && arr[high]>=datum)
			high--;
		arr[low] = arr[high];
		while((low<high) && arr[low]<=datum)
			low++;
		arr[high] = arr[low];
    }
    arr[low] = datum;
    return low;
}
 
static void Quick(int *arr,int start,int end)
{
    int par = Partition(arr,start,end);
    if(start < par-1)
    {
	Quick(arr,start,par-1);
    }
    if(par < end-1)
    {
	Quick(arr,par+1,end);
    }
 
}
 
void QuickSort(int *arr,int len)
{
    Quick(arr,0,len-1);
 
}
 
int main()
{
	int i,n;
	int arr[20];
	printf("请输入数组的元素个数 n: ");
	scanf("%d",&n);
	printf("请输入%d个整数：",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	QuickSort(arr,n);
	printf("排序后：");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	} 
	printf("\n");
	return 0;
}
