#include<iostream>
#include<string>
using namespace std;
//�̳еĸ�ʽ
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

//����������ำֵת��
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
//	//���������Ը�ֵ���������.��������.����ָ�루��Ƭ���߽��и�->�����������ǲ��ָ���ȥ����
//	student s;
//	person p = s;
//	person&p1 = s;
//	person*p2 = &s;
//	//��������ܸ�ֵ�����������
//	//s = p;
//	//����ָ�����ͨ��ǿ������ת����ֵ��������ָ��
//	p2 = &s;
//	student *s1 = (student*)p2;//ת��֮��ָ��������Ļ���ָ��Ϳ��Ե��ó�Ա��������Ա����
//	s1-> _num = 10;
//}
//int main(){
//	system("pause");
//	return 0;
//}




//���أ��ض��壩->�����Ա�����θ���ĳ�Ա����
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
//		A::fun(10);//���Ҫ���з��ʸ����ͬ����Ա����//���ࣺ����Ա��������ʾ���ʣ�
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



//�������Ĭ�ϳ�Ա����
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