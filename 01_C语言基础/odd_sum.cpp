#include <stdio.h>
int main()
{
	int sum=0;
	int i;					//定义变量 （和、数） 
	for(i=1;i<100;i+=2)		//	for循环求奇数和 
	{
		sum+=i;				 
	}
	printf("1~100的奇数和为%d\n",sum);
	
	
	
	return 0;
 } 
