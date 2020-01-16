
//背包问题的贪心算法。
#include <stdio.h>
#define M 4
struct node{
  float value;
  float weight;
  int flag;
}Node[M],temp;
float Value,curvalue=0;
float Weight,curweight=0; 
//按性价比排序
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
 
//装载主要方法
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
//进行结果的输出
void putout(){
	int i;
	printf("选中物品的重量分别为：");//每个物品只能放一次
	for(i=0;i<M;i++){
	 	if(Node[i].flag){
          printf("%.2f ",Node[i].weight);
		}
	}
printf("\n总价值为:%.2f",curvalue);
}
int main()
{
	int i;
	printf("\n请输入背包容积：");
	scanf("%f",&Weight);
	for(i=0;i<M;i++)
	{
	   printf("请输入第%d个物品的重量和价值：",i+1);
	   scanf("%f%f",&Node[i].weight,&Node[i].value);
	}

	sort();
	load();
	putout();
	printf("\n");
	return 0;
}
