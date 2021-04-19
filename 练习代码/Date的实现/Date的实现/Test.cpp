#include<iostream>
using namespace std;
class Date{
public:
	int GetMonthDay(int year, int month){
		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = days[month];
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) && year % 400 == 0)){
			day += 1;
		}
				return day; 
	}
	Date(int year=1900, int month=1, int day=1)
	:_year(year)
	, _month(month)
	, _day(day){
		if (year >= 0 && month <= 12 && month > 0 && day > 0 && day <= GetMonthDay(year, month))
			cout << "日期合法" << endl;
		else
			cout << "日期非法" << endl;
	}
	Date operator+=(int day){
		if (day < 0){
			return *this -= -day;
		}
		_day += day;
		while(_day>GetMonthDay(_year, _month)){
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month > 12)
			_year++;
			_month = 1;
		}
		return *this;
	}
	Date operator+(int day1){
		Date ret(*this);
		{
			ret._day += day1;
			while (ret._day>GetMonthDay(ret._year, ret._month)){
				ret._day -= GetMonthDay(ret._year, ret._month);
				ret._month++;
				if (ret._month > 12){
					ret._year++;
					ret._month = 1;
				}
			}
			return ret;
		}
	}
	Date operator-=(int day){
		_day -= day;
		while (_day<=0){
			_day += GetMonthDay(_year, _month);
			_month--;
			if (_month = 0)
			_year--;
			_month = 12;
		}
		return *this;
	}
	Date operator-(int day){
		Date ret(*this);
		ret -= day;
		return ret;
	}
	void print(){
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main(){
	Date d1(1987, 1, 1);
	Date ret1=d1 + (10);
	ret1.print();
	Date d2(1921, 1, 18);
	d2 += 10;
	d2.print();
	Date d3(1987, 1, 20);
	d3 -= 100;
	d3.print();
	Date d4(2021, 1, 10);
	Date ret2 = d4 - 10;
	ret2. print();
	system("pause");
	return 0;
}