#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int i;
	double sum;
	double average;
	
	printf("请输入数据个数：");
	scanf("%d",&a);
	int*b=(int*)malloc(a*sizeof(int));		// 申请 a 个 int 的空间
	if (b==NULL){
		printf("内存不足\n");
		return 1;							//处理内存不足的情况 
	}
	
	for(i=0;i<a;i++){						//用for循环求和 
		printf("请输入一个数：");
		scanf("%d",&b[i]);
		sum+=b[i];
	}
	printf("该数组平均值为%lf\n",average=sum/a);    //输出平均值 

	free(b);			//自由了！！！ 
	b=NULL;				//置空 
	
	return 0;
 } 
