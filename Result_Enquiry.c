include<stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define NUM_STU 30
int g_stu = 0; //全局变量，表示已录入的学生数量，每录入一个学生，g_stu加1
struct score
{
	float math;
	float english;
	float physics;
};
struct student
{
	char num[8];
	char name[8];
	struct score score_stu;
} stu[NUM_STU],s;
int input(){
	printf("请输入学号");
	scanf("%s", &stu[g_stu].num);
    printf("请输入姓名"); 
	scanf("%s", &stu[g_stu].name);
	printf("请输入成绩\n数学:");
	scanf("%f", &stu[g_stu].score_stu.math);
	printf("英语:");
	scanf("%f", &stu[g_stu].score_stu.english);
	printf("物理:");
	scanf("%f", &stu[g_stu].score_stu.physics);
	g_stu++;
}
int output(){
	printf("学号\t姓名\t数学\t英语\t物理\t\n");
	int g = g_stu;
	while (g--){ printf("%s\t%s\t%.1f\t%.1f\t%.1f\t\n", stu[g].num, stu[g].name, stu[g].score_stu.math, stu[g].score_stu.english, stu[g].score_stu.physics); }
}
int search(){
	printf("输入要查找的学生姓名然后按回车键");
	scanf("%s", &s.name);
	int n = 30,ff;
	while (n--){ int f = strcmp(s.name, stu[n].name);
	if (f == 0){ printf("学号\t姓名\t数学\t英语\t物理\t\n"); 
	printf("%s\t%s\t%.1f\t%.1f\t%.1f\t\n", stu[n].num, stu[n].name, stu[n].score_stu.math, stu[n].score_stu.english, stu[n].score_stu.physics);
	ff = f; break;
	}
	
	}
	if (ff == 1 && n == 0){ printf("对不起，没有这个学生的成绩信息\n"); }
}
int modify(){
	printf("输入要修改的学生姓名然后按回车键");
	scanf("%s", &s.name);
	int n = 30, ff;
	while (n--){
		int f = strcmp(s.name, stu[n].name);
		if (f == 0){
			printf("学号\t姓名\t数学\t英语\t物理\t\n");
			printf("%s\t%s\t%.1f\t%.1f\t%.1f\t\n", stu[n].num, stu[n].name, stu[n].score_stu.math, stu[n].score_stu.english, stu[n].score_stu.physics);
			while (1){
				int fff;
				printf("选择要修改成绩的科目:1.数学 2.英语 3.物理 4.返回");
				scanf("%d", &fff);
				if (fff == 1){ printf("请输入要修改学生的成绩"); scanf("%f", &stu[n].score_stu.math); }
				if (fff == 2){printf("请输入要修改学生的成绩"); scanf("%f", &stu[n].score_stu.english);}
			    if (fff == 3){ printf("请输入要修改学生的成绩"); scanf("%f", &stu[n].score_stu.physics); }
			    if (fff == 4)break;
				}
			ff = f; break;
			}
			
		}
		if (ff == 1 && n == 0){ printf("对不起，没有这个学生的成绩信息\n"); }
	}
void main()
{
	int item;
	while (1)
	{
		printf("1.输入学生信息\n2.输出学生信息\n3.查找学生信息\n4.修改学生信息\n请输入操作数：");
		scanf("%d", &item);
		switch (item)
		{
		case 1: input(); break;
		case 2: output(); break;
		case 3: search(); break;
		case 4: modify(); break;
		}
	}
}
