//��ѭ������ʵ�ֿ����������Բ��ޣ���������ɲ�������
#include<stdio.h>
void quick_sort(int s[], int l, int r)  
{  
    if (l < r)  
    {  
        //Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ�������� �μ�ע1  
        int i = l, j = r, x = s[l];  
        while (i < j)  
        {  
            while(i < j && s[j] >= x) // ���������ҵ�һ��С��x����  
                j--;    
            if(i < j)   
                s[i++] = s[j];  
              
            while(i < j && s[i] < x) // ���������ҵ�һ�����ڵ���x����  
                i++;    
            if(i < j)   
                s[j--] = s[i];  
        }  
        s[i] = x;  
        quick_sort(s, l, i - 1); // �ݹ����   
        quick_sort(s, i + 1, r);  
    }  
}
int main()
{
    int i,n;
	int arr[20];
	printf("�����������Ԫ�ظ��� n: ");
	scanf("%d",&n);
	printf("������%d��������",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	quick_sort(arr,0,n-1);
	printf("�����");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}