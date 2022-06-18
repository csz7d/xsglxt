struct student shuru()
{
struct student stu;
printf("/n/n学号：");
scanf("%d",&stu.ID);
printf("/n姓名：");
scanf("%s",stu.name);

printf("/n性别(g/b)：");
fflush(stdin);
scanf("%c",&stu.sex);

printf("/n语文成绩:");
scanf("%f",&stu.score[0]);
printf("/n数学成绩:");
scanf("%f",&stu.score[1]);
printf("/n英语成绩:");
scanf("%f",&stu.score[2]);

return stu;
}

/*自定义显示函数*/
void display(struct student stu)
{
int j;


printf("/t%d/t",stu.ID);
printf("%s/t",stu.name);
printf("%s/t",stu.getSex());
for(j=0;j<3;j++)
{
printf("%.2f/t",stu.score[j]);
}

printf("%.2f/t",stu.Ave());
putchar('/n');
}

/*自定义排序函数*/
void sort(struct student stu[N],int i)
{

int j,k;
struct student temp;
for(j=0;j<i;j++)
{
for(k=0;k<i-j-1;k++)
{
if((stu[k].Ave())<(stu[k+1].Ave()))
{
temp=stu[k];
stu[k]=stu[k+1];
stu[k+1]=temp;
}
}
}

}

/*自定义插入函数*/
void charu(struct student stu[N],int k)
{
int i,l;
struct student in ;

in=shuru();//调用输入函数
for(i=0;i<k;i++)
{
if(in.Ave()>stu[i].Ave())
break;
}
for(l=k;l>i;l--)
{
stu[l]=stu[l-1];
}
stu[i]=in;
}

/*自定义按照学号删除函数*/
int del1(struct student stu[N],int i)
{
int dele,j,k;
char ch;
printf("请选择学号：");
scanf("%d",&dele);


for(j=0;j<i;j++)
{
if(dele==stu[j].ID)
{
break;
}
}
if(j<i)
{
printf("这是您要删除的学生信息/n");
showheader();
display(stu[j]);
printf("确认删除？(y/n)");
fflush(stdin);
ch=getchar();
if(ch=='y')
{
for(k=j+1;k<i;k++)
{
stu[k-1]=stu[k];
}
printf("删除成功");
return 1;
}
else
{
return 0;
}
}
else
{
printf("不存在您要删除的信息");
return 0;
}

}

/*自定义按照姓名删除函数*/
int del2(struct student stu[N],int i)
{
int j,k;
char name[15],ch;
printf("请输入姓名：");
scanf("%s",&name);


for(j=0;j<i;j++)
{
if(strcmp(name,stu[j].name)==0)
{
break;
}
}
if(j<i)
{
printf("这是您要删除的学生信息/n");
showheader();
display(stu[j]);
printf("确认删除？(y/n)");
fflush(stdin);
ch=getchar();

if(ch=='y')
{
for(k=j+1;k<i;k++)
{
stu[k-1]=stu[k];
}
printf("删除成功");
return 1;
}
else
{
return 0;
}
}
else
{
printf("不存在您要删除的信息");
return 0;
}
}
————————————————
版权声明：本文为CSDN博主「HackersAndPainters」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/l106439814/article/details/1464559