#include<iostream>
#include<string>
using namespace std;
//继承的格式
//class person{
//public:
//	void print(){
//		cout << _name <<' '<< _age << endl;
//	}
//protected:
//	string _name="zhnagsan";
//	int _age = 18;
//};
//class student :public person{
//public:
//	student(){
//		int num = 14124141;
//		_num - num;     
//		cout << _num << ' ';
//	};
//private:
//	int _num;
//};
//class teacher :public person{
//public:
//	teacher(int id=131415926){
//		_id = id;
//		cout << _id << ' ';
//	}
//private:
//	int _id;
//};
//int main(){
//	person p;
//	p.print();
//	student s;
//	s.print();
//	teacher t;
//	t.print();
//	system("pause");
//	return 0;
//}

//基类和派生类赋值转换
//class person{
//protected:
//	string _name;
//	int _age;
//	string _sex;
//};
//class student:public person{
//public:
//	int _num;
//};
//void test(){
//	//子类对象可以赋值给父类对象.父类引用.父类指针（切片或者叫切割->把派生类中那部分父类去掉）
//	student s;
//	person p = s;
//	person&p1 = s;
//	person*p2 = &s;
//	//基类对象不能赋值给派生类对象
//	//s = p;
//	//基类指针可以通过强制类型转换赋值给派生类指针
//	p2 = &s;
//	student *s1 = (student*)p2;//转换之后指向派生类的基类指针就可以调用成员函数（成员对象）
//	s1-> _num = 10;
//}
//int main(){
//	system("pause");
//	return 0;
//}




//隐藏（重定义）->子类成员将屏蔽父类的成员函数
//class A{
//public:
//	void  fun(int i){
//		cout << "class A" <<"="<<i<<endl;
//	}
//};
//class B :public A{
//public:
//	void fun(){
//		cout << "class B" << endl;
//		A::fun(10);//如果要进行访问父类的同名成员函数//基类：：成员函数（显示访问）
//	}
//};
//void test(){
//	B c;
//	c.fun();
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}



//派生类的默认成员函数
//class person{
//	person(const string name="zhangsan")
//	:_name(name){
//		cout << "person()" << endl;
//	}
//
//protected:
//	string _name;
//};
int main(){
	char a = 'Abv';
	cout << a << endl;
	system("pause");
	return 0;
}