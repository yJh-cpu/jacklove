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
class person{
protected:
	string _name;
	int _age;
	string _sex;
};
class student:public person{
private:
	int _num;
};
void test(){
	//���������Ը�ֵ���������.��������.����ָ�루��Ƭ���߽��и�->�����������ǲ��ָ���ȥ����
	student s;
	person p = s;
	person&p1 = s;
	person*p2 = &s;
}
int main(){

	system("pause");
	return 0;
}