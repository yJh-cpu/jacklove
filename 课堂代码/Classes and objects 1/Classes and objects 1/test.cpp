#include<iostream>
using namespace std;
#include<assert.h>
#include<stdlib.h>
//class Date{
//public:
//	//�޲ι��캯�������Բ���д��ϵͳ�Զ�����
//	Date(){
//	}
//	//���ι��캯��
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
//	Date d3();//�޲ι��캯����������ʱ��Ҫ������������ͳ��˺��������������Ǵ�������
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//C++�����ͷֳ���������(��������)���Զ������͡��������;����﷨�Ѿ�����õ����ͣ���
//int / char...���Զ������;�������ʹ��class / struct / union�Լ���������ͣ���������ĳ��򣬾ͻᷢ��
//����������Ĭ�ϵĹ��캯������Զ����ͳ�Ա_t���õ�����Ĭ�ϳ�Ա����

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
//	// ��������(��������)
//	int _year;
//	int _month;
//	int _day;
//	// �Զ�������
//	Time _t;
//};
//int main()
//{
//	Date d;
//	system("pause");
//	return 0;
//}





////��������
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






//��������
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




////�������ɵ�Ĭ�������������Ի��Զ����ͳ�Ա����������������
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

////���������
//class Date{
//public:
//	Date(int year = 1990, int month = 1, int day = 1){
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	bool operator==(Date&d2){ //����thisָ�루Date*this,Date&d2��
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


////��ֵ���������
//class Date{
//public:
//	Date(int year=1900,int month=1,int day=1){
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date&operator=(const Date &d2){     //Date &operater����&���Լ��ٿ�������
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

////const���εĳ�Ա����
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

////ȡ��ַ��constȡ��ַ���������أ�������Ĭ�ϳ�Ա����һ�㲻�����¶��� ��������Ĭ�ϻ����ɡ�
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