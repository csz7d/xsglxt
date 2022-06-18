void main()
{
struct student stu[N];
int count=0,m=0,j;
char ch,ch1;
int choice,choice3,choice4,choice5; //菜单选项及子菜单选项
int user;
do //此循环体控制用户信息输入错误后是否重输
{

user=quanxian(); //调用拥护权限函数
system("cls");
if(user==1) //此条件结构判断用户权限输入是否正确
{
do //此循环体控制返回主菜单
{ ch1='n'; //如果用户将主菜单选择错误，可用此变量控制是否重输
choice=menu();
system("cls");
switch(choice) //此条件结构控制选择菜单功能后的操作
{
case 1: //输入学生信息
{
do //此循环体控制是否继续输入
{ printf("****************************** 学员信息录入 **********************************/n");
printf("/n/n请输入第%d个学员的成绩:/n/n",count+1);
stu[count]=shuru(); //调用输入函数
printf("/n/n是否继续(y/n)");
fflush(stdin);
ch=getchar();
count++;
system("cls");
}while(ch=='y');
//system("pause");
break;
}

case 2: //显示排序好的学生信息
{
printf("****************************** 学员信息显示 **********************************/n");
printf("/n/n排序后的成绩如下:/n");

sort(stu,count); //调用排序函数
showheader();

for(j=0;j<count;j++)
{
display(stu[j]); //调用显示函数
}

system("pause");
system("cls");
break;
}

case 3://插入功能
{
while(choice3!=3) //此循环体控制是否退出子菜单
{
system("cls");
choice3=menu3(); //调用子菜单函数
system("cls");
if(choice3==1) //此条件结构控制子菜单选项
{
do //此循环体判断是否继续插入
{ printf("****************************** 学员信息插入 **********************************/n");
charu(stu,count); //调用插入函数
count++;

printf("是否继续插入？(y/n)");
fflush(stdin);
ch=getchar();
system("cls");
}while(ch=='y');
}
if (choice3==2) //此条件结构控制子菜单选项
{
printf("/n/n插入学生信息后如下：/n");
showheader();
for(j=0;j<count;j++)
{
display(stu[j]); //调用显示函数
}
system("pause");
}
//
}
break;
}
case 4://删除功能
{
while(choice4!=4) //此循环体控制是否退出子菜单
{
int num;
system("cls");
choice4=menu4(); //调用子菜单函数
system("cls");

if(choice4==1) //此条件结构控制子菜单按照学号删除选项

{
do //此循环体控制是否继续删除
{ printf("*********************** 按照学号删除学员信息 ************************/n");
num=del1(stu,count);//调用删除函数
//system("cls");
if(num==1)
count--;
printf("/n是否继续删除？(y/n)");
fflush(stdin);
ch=getchar();
system("cls");
}while(ch=='y');
}
if(choice4==2) //此条件结构控制子菜单按照姓名删除选项

{
do //此循环体控制是否继续删除
{ printf("************************** 按照姓名删除学员信息 ******************************/n");
num=del2(stu,count);//调用删除函数
if(num==1)
count--;
printf("/n是否继续删除？(y/n)");
fflush(stdin);
ch=getchar();
system("cls");
}while(ch=='y');
}

if(choice4==3) //此条件结构控制子菜单显示删除后的信息选项
{
printf("/n/n删除学生信息后如下：/n");
showheader();
for(j=0;j<count;j++)
{
display(stu[j]); //调用显示函数
}
system("pause");
}

}
break;
}
case 5://查找功能
{
while(choice5!=3) //控制是否继续查找
{
system("cls");
choice5=menu5(); //调用查找子菜单函数
system("cls");
if(choice5==1) //控制按照学号查找
{
chazhao1(stu,count);//调用按照学号查找的函数
system("cls");
}
if(choice5==2) //控制按照姓名查找
{
chazhao2(stu,count);//调用按照姓名查找的函数
system("cls");
}
system("pause");
}
break;
}
case 6://退出
{
printf("确认退出？(y/n)"); //让用户确认是否退出
fflush(stdin);
ch=getchar();
break;
}
default:
{
printf("/a/a警告：您输入错误，是否重输！(y/n)");
fflush(stdin);
ch1=getchar();
system("cls");
break;
}
}
}while(ch=='n'|| ch1=='y');//控制是否要退出系统
}
if(user==0)
{
printf("/a/a警告：您的用户名或密码输入有误！是否重输？（y/n）");
}
fflush(stdin);
ch=getchar();
system("cls");

}while(ch=='y');
}
————————————————
版权声明：本文为CSDN博主「HackersAndPainters」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/l106439814/article/details/1464559