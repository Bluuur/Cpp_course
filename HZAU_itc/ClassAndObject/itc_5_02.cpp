#include <iostream>
using namespace std;
class CDateInfo
{
 int year,month,day;
 public:
	CDateInfo(){};
 CDateInfo(int y,int m,int d) {year=y,month=m,day=d;};
 void SetDate(int y,int m,int d);
 void GetDate();
};
void CDateInfo::SetDate(int y=2011,int m=10,int d=10)
{
	year=y;
	month=m;
	day=d;
}
void CDateInfo::GetDate()
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
 
int main()
{
CDateInfo data1,data2(2011,10,10); //定义对象data1和data2

int y,m,d;
cin>>y>>m>>d; //输入年月日值
data1.SetDate(y,m,d); //设置data1的年月日为y，m，d
data1.GetDate(); //按year-month-day的格式显示data1的年月日
data2.GetDate(); //按year-month-day的格式显示data2的年月日
return 0;
}
