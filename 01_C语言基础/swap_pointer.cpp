#include <stdio.h>

void swap(int*p1,int*p2);	//函数声明 

int main()
{
	printf("请输入两个数:\n");
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);		//将ab传入p1p2地址 

	printf("%d %d\n",a,b);
	
	return 0;
 } 
 
 void swap(int*p1,int*p2)
 {
 	int	t=*p1;		//暂存p1指向值于t中 
	*p1=*p2;		// p2指向值赋予p1中 
	*p2=t;			//暂存值t赋予p2指向值 
}
