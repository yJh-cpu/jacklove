#include<iostream>
using namespace std;;
//void print(int a,int b,int n);
//	int n = 1;               //全局变量
//	void func()
//	{
//		static int a ;     // 静态局部变量
//		int b = 5;              // 局部变量
//		a += 2;
//		n += 12;
//		b += 5;
//		print(a, b, n);
//	}
//	int main()
//	{
//		static int a=10;           // 静态局部变量
//		int b = -10;          // 局部变量
//		print(a,b,n);
//		b += 4;
//		func();
//		print(a, b, n);
//		n += 10;
//		func();
//	}
//	void print(int a, int b, int n){
//		cout << "a:" << a
//		<< " b:" << b
//		<< " n:" << n << endl;
//	}




//"<<"">>"运算符重载（友元函数解决）
//class Date{
//public:
//	friend ostream& operator<<(ostream& _cout, Date& d);
//	friend istream& operator>>(istream&_cin, Date& d);
//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day){}
//	Date(){};
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream&_cout, Date& d){
//	_cout << d._year << "-" << d._month << "-" << d._day << endl;
//	return _cout;
//}
//istream& operator>>(istream&_cin, Date& d){
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//	return _cin; 
//}
//int main(){
//	Date d(1900,1,1);
//	cout << d << endl;
//	cin >> d;
//	return 0;
//}



////友元类
//class Time{
//public:
//	friend class Date;
//	Time(int hour, int minute, int second);
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//Time::Time(int hour = 12, int minute = 0, int second = 0) :     //在类外定义成员函数
//_hour(hour)
//, _minute(minute)
//, _second(second)
//{
//	cout << _hour << ":" << _minute << ":" << _second << endl;
//}
//class Date{
//public:
//	 Date(int year,int month,int day);
//	 void SetTimeOfDate(int hour, int minute, int second){
//		 _t._hour = hour;
//		 _t._minute = minute;
//		 _t._second = second;
//		 cout << _t._hour <<":"<< _t._minute << ":"<<_t._second << endl;
//	 }
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//Date::Date(int year=1900, int month=1, int day=1){      /在类外也可以使用列表初始化成员变量
//	_year = year;
//	_month = month;
//	_day = day;
//	cout << _year << "-" << _month << "-" << _day << endl;
//}
//int main(){
//	Time _t;
//	Date a;
//	a. SetTimeOfDate(11,11,11);
//	return 0;
//}





class A
{
private:
	static int k;
	int h;
public:
	class B
	{
	public:
		void foo(const A& a)
		{
			cout << k << endl;//OK
			cout << a.h << endl;//OK
		}
	};
};
int A::k = 1;
int main()
{
	A::B b;
	b.foo(A());

	return 0;
}