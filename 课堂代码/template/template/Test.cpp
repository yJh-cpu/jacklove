#include<iostream>
using namespace std;
//ģ�庯����ʽ
//template<typename T>
//void swap(T right, T left){
//	T tmp = right;
//	right = left;
//	left = tmp;
//	cout << right << ";" << left << endl;
//}
//int main() {
//	swap(1,2);
//	swap(1.8, 2.6);
//	swap('a','b');
//	system("pause");
//	return 0;
//}
//ģ�庯����ƥ�����
//template<typename T>
//T Add(T a, T b){
//	cout << (a + b) << endl;
//	return a + b;
//}
////ר�ŵĴ���ӷ��ĺ���
//int Add(int a,int b){
//	cout << a + b << endl;
//	return a + b;
//}
//int main(){
//	int a = 1, b = 2;
//	double c = 1.1, d = 2.2;
//	Add(a, (int)d);     //�û��Զ���ǿ��ת��
//	Add<double>(c, b);  //��ʾʵ�������ں��������<ʵ��������
//	Add(a, b);			//��ר�ŵĴ���������ר�ŵĴ�������û���ٵ���ģ�庯��
//	system("pause");
//	return 0;
//}



//��ģ��Ķ����ʽ
template<class A>
class Vector{
public:
	Vector(size_t capacity=10)
		:_pdata(new(A)[capacity])
		, _size(0)
		, _capacity(capacity){}
	~Vector();
	A& operator[](size_t pos)
	{
		assert(pos < _size);
		return _pdata[pos];
	}
private:
	A* _pdata;
	size_t _size;
	size_t _capacity;
};
//��ģ�庯����������ж���
template<class A>
Vector<A>::~Vector(){
	delete[]_pdata;
	_size = 0;
	_capacity = 0;
}
int main(){
	return 0;
}