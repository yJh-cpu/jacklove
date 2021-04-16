#include<iostream>
using namespace std;
#include<assert.h>
#include<stdlib.h>
//class Date{
//public:
//	//无参构造函数，可以不用写，系统自动生成
//	Date(){
//	}
//	//带参构造函数
//	Date(int year,int month,int day){
//	_year=year;
//	_month=month;
//	_day=day;
//	cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test (){
//	Date d1(1949, 1, 1);
//	Date d2;
//	Date d3();//无参构造函数创建对象时不要带（），否则就成了函数声明，不再是创建对象
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//C++把类型分成内置类型(基本类型)和自定义类型。内置类型就是语法已经定义好的类型：如
//int / char...，自定义类型就是我们使用class / struct / union自己定义的类型，看看下面的程序，就会发现
//编译器生成默认的构造函数会对自定类型成员_t调用的它的默认成员函数

//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour;
//		_minute = 0;
//		_second = 0;
//		cout << _hour;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//private:
//	// 基本类型(内置类型)
//	int _year;
//	int _month;
//	int _day;
//	// 自定义类型
//	Time _t;
//};
//int main()
//{
//	Date d;
//	system("pause");
//	return 0;
//}





////拷贝构造
//class Date{
//public:
//	Date(){
//		 _year = 1998;
//		 _month = 1;
//		 _day = 1;
//		cout << _year << "-" << _month << "-" << _day<<endl;
//	}
//	Date(const Date &d){
//		_year = d._year;
//		_month = d._month;
//		_day =  d._day;
//		cout << _year << "-" << _month << "-" << _day<<endl;
//	};
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main(){
//	Date d1;
//	Date d2(d1);
//	system("pause");
//	return 0;
//}






//析构函数
//class seqlist{
//public:
//	seqlist(int  capacity = 10)
//	{
//		_data = (int*)malloc(capacity * sizeof(int));
//		cout << _data << endl;
//		assert(_data);
//		_size = 0;
//		_capacity = capacity;
//	}
//	~seqlist(){
//		if (_data)
//		{
//			free(_data);
//			_data = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//private:
//	int* _data;
//	size_t _size;
//	size_t _capacity;
//};
//int main(){
//	seqlist d1(10);
//	system("pause");
//	return 0;
//}




////译器生成的默认析构函数，对会自定类型成员调用它的析构函数
//class string1{
//public:
//	string1(const char* str="theshy"){
//		_str = (char*)malloc(strlen(str)+1);
//		strcpy(_str,str);
//	}
//	~string1(){
//		cout << "~string1()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Person
//{
//private:
//	string1 _name;
//	int _age;
//};
//int main(){
//    Person d1;
//	system("pause");
//	return 0;
//}

////运算符重载
//class Date{
//public:
//	Date(int year = 1990, int month = 1, int day = 1){
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	bool operator==(Date&d2){ //隐藏this指针（Date*this,Date&d2）
//		return _year == d2._year&&
//			_month == d2._month&&
//			_day == d2._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(1990,1,2);
//	Date d2;
//	cout << (d1==d2) << endl;
//	system("pause");
//	return 0;
//}


////赋值运算符重载
//class Date{
//public:
//	Date(int year=1900,int month=1,int day=1){
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date&operator=(const Date &d2){     //Date &operater用了&可以减少拷贝构造
//		if (this != &d2){
//			_year = d2._year;
//			_month = d2._month;
//			_day = d2._day;
//		}
//		return *this;
//	}
//	void fun(){
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main(){
//	Date d1;
//	d1.fun();
//	Date d2(1900,6,6);
//	d2.fun();
//	d2 = d1;
//	d2.fun();
//	system("pause");
//	return 0;
//}

////const修饰的成员变量
//class Time{
//public:
//	void play(){
//		cout << "play()" << endl;
//	}
//	void display()const{
//		cout << "display()"<<endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//void Test(){
//	Time d1;
//	d1.play();
//	const Time d2;
//	d2.display();
//}
//int main(){
//	Test();
//	system("pause");
//	return 0;
//}

////取地址及const取地址操作符重载，这两个默认成员函数一般不用重新定义 ，编译器默认会生成。
//class Date
//{
//public:
//	Date*operator&(){
//		return this;
//	}
//	const Date*operator&()const{
//		return this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};