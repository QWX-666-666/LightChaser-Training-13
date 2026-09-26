#include <stdio.h>
int main()
{
	int sum=0;
	int i;
	printf("请输入学生总人数：");
	scanf("%d",&sum);		//先看看有多少个人 
	
	struct stu				//定义结构体类型 
	{
		char name[10];		//定义名字 
		double score;		//定义分数 
		}stu[sum];			///定义结构体数组 
			
	printf("请输入学生姓名和成绩\n");
	for(i=0;i<sum;i++){
		scanf("%s %lf",&stu[i].name,&stu[i].score);		//来存储信息吧！ 
	}
	printf("学生成绩单如下\n");				//胡言乱语中...... 
	 for(i=0;i<sum;i++)
	 printf("%s %lf\n",stu[i].name,stu[i].score);
	 
	return 0;
 } 
