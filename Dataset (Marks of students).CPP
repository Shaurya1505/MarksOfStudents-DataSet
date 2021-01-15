#include<iostream.h>
#include<conio.h>
class marks
{
public:
int rn,mar;
char name[100];
void n()
{
cout<<"enter name";
cin>>name;
}
void mark()
{
cout<<"enter marks";
cin>>mar;
}
};
class physics:public marks
{
};
class chemistry:public marks
{
};
class maths:public marks
{
};
int main()
{
clrscr();
int n;
int temp1=0;
int temp2=0;
int temp3=0;
marks s[10];
physics s1[10];
maths s2[10];
chemistry s3[10];
cout<<"enter no. of students in class";
cin>>n;
int i=1;
while(i<=n)
{
s[i].rn=i;
s[i].n();
cout<<"\nenter marks in physicss,maths and chemistry respectively";
s1[i].mark();
s2[i].mark();
s3[i].mark();
i++;
}
for(i=1;i<=n;i++)
{
cout<<"\nROLL NO:"<<s[i].rn;
cout<<"\nNAME:"<<s[i].name;
cout<<"\nTOTAL MARKS:"<<s1[i].mar+s2[i].mar+s3[i].mar;
}
for(i=1;i<=n;i++)
{
temp1=temp1+s1[i].mar;
temp2=temp2+s2[i].mar;
temp3=temp3+s3[i].mar;
}
cout<<"\naverage marks in physics:"<<temp1/n;
cout<<"\naverage marks in maths:"<<temp2/n;
cout<<"\naverage marks in chemistry:"<<temp3/n;
getch();
return 0;
}




