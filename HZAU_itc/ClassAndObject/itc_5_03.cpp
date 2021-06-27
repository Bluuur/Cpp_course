#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	char chOne[100];
	int iSex;
	int iOld;
public:
	
      void  SetName(char *name);
      void SetGender(int sex);
      void SetAge(int age)
	  {
		  iOld=age;
	  }
	  int GetAge(){return iOld;}
	   int GetGender(){return iSex;}
	   void GetName(char *name);
};
void Student::SetName(char *name)
	{
		strcpy(chOne,name);
	}
	void Student::SetGender(int sex)
	{
	  iSex=sex;
	}
	void Student::GetName(char *name) 
	{
         strcpy(chOne,name);
	}
int main()
{
Student Zhang_San; //创建Student类对象Zhang_San
char*chOne;
int iSex;
unsigned iOld;
chOne=new char[11]; //创建动态字符数组用来存放姓名，指针chOne指向该数组
cin>>chOne; //输入姓名，存放在chOne所指向的动态字符数组中
cin>>iSex; //输入性别，输入1表示性别为“男”，输入0表示性别为“女”
cin>>iOld; //输入年龄
Zhang_San.SetName(chOne); //用输入的姓名设置对象Zhang_San用来表示姓名的数据成员
Zhang_San.SetGender(iSex); //设置对象Zhang_San用来表示性别的数据成员
Zhang_San.SetAge(iOld); //设置对象Zhang_San用来表示年龄的数据成员
cout<<endl;
Zhang_San.GetName(chOne); //调用GetName(char *)成员函数将对象Zhang_San表示姓名的数据成员值
//存放到chOne所指向的动态字符数组中
cout<<"Zhang_San's name is "<<chOne<<endl; //显示姓名
cout<<"Zhang_San's gender is "<<Zhang_San.GetGender()<<endl; //显示性别：1（男），0（女）
cout<<"Zhang_San's age is "<<Zhang_San.GetAge()<<endl; //显示年龄
delete []chOne;
return 0;
}
