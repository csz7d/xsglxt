# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <conio.h>
# define N 20

/*********************自定义函数声明部分**************************/
void showheader(); //声明显示表头部分
int menu(); //声明主菜单函数
int menu3(); //声明插入功能子菜单函数
int menu4(); //声明删除功能子菜单函数
int menu5(); //声明查找功能子菜单函数
int quanxian(); //声明用户权限管理函数
void SavePass();
struct student shuru(); //声明学生信息录入函数
void display(struct student); //声明显示函数
void sort(struct student stu[N],int); //声明排序函数
void charu(struct student stu[N],int); //声明插入函数
int del1(struct student stu[N],int); //声明按照学号删除函数
int del2(struct student stu[N],int); //声明按照姓名删除函数
void chazhao1(struct student stu[N],int i); //声明按照学号查找函数
void chazhao2(struct student stu[N],int i); //声明按照姓名查找函数


/*********定义结构体************/
struct student
{
int ID;
char name[15];
char sex;
float score[3];
char *getSex() //构造结构成员
{
if(sex=='g')
return "女";
else
return "男";
}

float Ave() //构造结构成员
{

return (score[0]+score[1]+score[2])/3;

}
student() //构造函数
{
score[0]=0;
score[1]=0;
score[2]=0;
}
————————————————
版权声明：本文为CSDN博主「HackersAndPainters」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/l106439814/article/details/1464559