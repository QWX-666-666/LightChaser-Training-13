#include <stdio.h>
int main()
{
	double num1;	//数1 
	double num2;	//数2 
	char a;			//运算符 
	double b;   	//结果 
	
	printf("请输入一个简单的算式\n");
	scanf("%lf %c %lf",&num1,&a,&num2);    //提示输入扫描 

	switch(a)	//分支选择 ，各个情况如下 
	{
	case'+':
		b=num1+num2;
		printf("结果为%lf\n",b);
		break;
	case'-':
		b=num1-num2;
		printf("结果为%lf\n",b);
		break;
	case'*':
		b=num1*num2;
		printf("结果为%lf\n",b);
		break;
	case'/':
		if(num2==0)
			printf("除数为0，无法计算\n"); 	//判断除数为0的情况 
		else{
			b=num1/num2;
			printf("结果为%lf\n",b);}
		break;
	default:
		printf("无法计算\n");	
	}
	
	
	return 0;
 } 
