
//���������̰���㷨��
#include <stdio.h>
#define M 4
struct node{
  float value;
  float weight;
  int flag;
}Node[M],temp;
float Value,curvalue=0;
float Weight,curweight=0; 
//���Լ۱�����
void sort(){
     int i,j;
	 for(i=0;i<M-1;i++){
		 for(j=i+1;j<M;j++){
if((Node[i].value/(float)Node[i].weight)<Node[j].value/(float)Node[j].weight){
			    temp=Node[i];
				Node[i]=Node[j];
				Node[j]=temp;
			 }
		 }
	 }
}
 
//װ����Ҫ����
void load(){
	int i;
	for(i=0;i<M;i++){
		if((Node[i].weight+curweight)<=Weight){
		 curvalue+=Node[i].value;
		 curweight+=Node[i].weight;
		 Node[i].flag=1;
		}else{
		 Node[i].flag=0;
		}	
	}
}
 
//���н�������
void putout(){
	int i;
	printf("ѡ����Ʒ�������ֱ�Ϊ��");//ÿ����Ʒֻ�ܷ�һ��
	for(i=0;i<M;i++){
	 	if(Node[i].flag){
          printf("%.2f ",Node[i].weight);
		}
	}
printf("\n�ܼ�ֵΪ:%.2f",curvalue);
}
int main()
{
	int i;
	printf("\n�����뱳���ݻ���");
	scanf("%f",&Weight);
	for(i=0;i<M;i++)
	{
	   printf("�������%d����Ʒ�������ͼ�ֵ��",i+1);
	   scanf("%f%f",&Node[i].weight,&Node[i].value);
	}

	sort();
	load();
	putout();
	printf("\n");
	return 0;
}
