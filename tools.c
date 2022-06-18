int menu()
{ int choice;
printf("/t/t****************************************************/n/n/t/t/t 欢迎您访问学生成绩管理系统 (GLY 1.0版)小强工作室/n/n/t/t****************************************************/n/n");
printf("/t/t/t***************主菜单***************/n/n");
printf("/t/t/t/t1> 学生信息录入/n/n");
printf("/t/t/t/t2> 学生信息显示/n/n");

printf("/t/t/t/t3> 插入学生信息/n/n");
printf("/t/t/t/t4> 删除学生信息/n/n");
printf("/t/t/t/t5> 查找学生信息/n/n");

printf("/t/t/t/t6> 退出/n");
printf("/n/n请选择功能选项：");
scanf("%d",&choice);

return choice;
}

/*自定义插入功能子菜单函数*/
int menu3()
{ printf("/t*******************这里显示的是插入功能子菜单*******************/n/n");
printf("/t/t/t/t1、插入学生信息/n/n");
printf("/t/t/t/t2、显示插入后的学生信息/n/n");
printf("/t/t/t/t3、退出子菜单，返回上一级菜单/n/n");

printf("/n/n请选择功能选项：");
int choice3;
scanf("%d",&choice3);
return choice3;
}

/*自定义删除功能子菜单函数*/
int menu4()
{
printf("/t*******************这里显示的是删除功能子菜单*******************/n/n");
printf("/t/t/t/t1、按照学号删除学生信息/n/n");
printf("/t/t/t/t2、按照姓名删除学生信息/n/n");
printf("/t/t/t/t3、显示删除后的学生信息/n/n");
printf("/t/t/t/t4、退出子菜单，返回上一级菜单/n/n");

printf("/n/n请选择功能选项：");
int choice4;
scanf("%d",&choice4);
return choice4;
}

/*自定义按照学号查找函数*/
void chazhao1(struct student stu[N],int i)
{
int select,j;
char ch;
printf("/t*******************您选择的是按照学号查找：*******************/n/n");
do
{
printf("/n/n请输入学号：");
scanf("%d",&select);
for(j=0;j<i;j++)
{
if(select==stu[j].ID)
{

break;
}

}
if(j<i)
{
showheader();
display(stu[j]);
}
else
{
printf("你查找的信息不存在/n");
}
printf("是否继续查找？(y/n)");
fflush(stdin);
ch=getchar();
system("cls");
}while(ch=='y');
}

/*自定义按照姓名查找函数*/
void chazhao2(struct student stu[N],int i)
{
int j;
char name[15];

char ch;
printf("/t*******************您选择的是按照姓名查找：*******************/n/n");
do
{
printf("/n/n请输入姓名：");
scanf("%s",name);

for(j=0;j<i;j++)
{
if(strcmp(name,stu[j].name)==0)
{
break;
}
}
if(j<i)
{
showheader();
display(stu[j]);
}
else
{
printf("你查找的信息不存在/n");
}

printf("是否继续查找？(y/n)");
fflush(stdin);
ch=getchar();
system("cls");
}while(ch=='y');
}

/*自定义查找功能子菜单函数*/
int menu5()
{
printf("/t*******************这里显示的是查找功能子菜单*******************/n/n");
printf("/t/t/t/t1、按照学号查找/n/n");
printf("/t/t/t/t2、按照姓名查找/n/n");
printf("/t/t/t/t3、退出子菜单，返回上一级菜单/n/n");

printf("/n/n请选择功能选项：");
int choice5;
scanf("%d",&choice5);
return choice5;
}

/*自定义用户权限函数*/
char chrPass[20];
int quanxian()
{
char user[15];
printf("/t/t*****************************************/n/n/t/t 欢迎您访问学生成绩管理系统 (GLY 1.0版)小强工作室/n/n/t/t*****************************************/n/n");
printf("/n/n/t/t/t提示 用户名：lizhiqiang 密码：1984-10-27");
printf("/n/n/t/t/t用户名：");
scanf("%s",user);

printf("/n/nt/t/t/t密 码：");
SavePass();

if((strcmp(chrPass,"1984-10-27")==0)&&(strcmp(user,"lizhiqiang")==0))
return 1;
else
return 0;
}

/*密码显示为"*"的函数*/
void SavePass()
{
char chr;
int count;
count = 0;
while((chr=getch())!=13)
{
chrPass[count] = chr;
printf("*");
count++;
}
chrPass[count+1] = '/0';
}

/*自定义表头函数*/
void showheader()
{ printf("/n/n/t*********************************************************/n");
printf("/t学号/t姓名/t性别/t语文/t数学/t英语/t平均成绩/n");
printf("/t*********************************************************/n");
}
————————————————
版权声明：本文为CSDN博主「HackersAndPainters」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/l106439814/article/details/1464559