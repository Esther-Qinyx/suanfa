//�õݹ���õķ�ʽʵ�ֶ��ֲ���
#include <stdio.h>
#include <stdlib.h>
// ���ֲ���-��������
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
	printf("%d\n",binary_find(arr,10,18)); //��arr���������ɴ�10��ʼ�ĵ���ֵΪ1��10������18��λ��
}