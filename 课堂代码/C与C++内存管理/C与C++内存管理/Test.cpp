#include<iostream>
using namespace std;
////C与C++开辟与释放空间
//int* p1;
//int*p2;
//int *p3;
//int*p4;
//int*p5;
//int main(){
//	p1 = (int*)malloc(sizeof(int));
//	p2 = (int*)malloc(sizeof(int)* 10);
//	free(p1);
//	free(p2);
//	p3 = new int;
//	p4 = new int[10];
//	p5 = new int(10);          //开辟一个int的空间并将其初始化为10。
//	delete p3;
//	delete[] p4;
//	return 0;
//}




//C++对于自定义类型的内存管理
class Date{
public:
	Date(int year = 1937, int month = 7, int day = 7)
		:_year(year)
		, _month(month)
		, _day(day) {
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	~Date(){
		cout << "~Date()" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main(){
	Date*p0 = (Date*)malloc(sizeof(Date));
	Date*p2 = (Date*)malloc(sizeof(Date)* 10);
	free(p0);
	free(p2);
	Date*p1 = new Date;   //在申请自定义类型的空间时，new会调用构造函数，delete会调用析构函数,而malloc与free不会。
	Date*p3 = new Date[10];
	delete p1;
	delete[]p3;
	return 0;
}

//operator new与operator delete函数
