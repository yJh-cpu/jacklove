#include<iostream>
using namespace std;
//模板函数格式
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
//模板函数的匹配规则
//template<typename T>
//T Add(T a, T b){
//	cout << (a + b) << endl;
//	return a + b;
//}
////专门的处理加法的函数
//int Add(int a,int b){
//	cout << a + b << endl;
//	return a + b;
//}
//int main(){
//	int a = 1, b = 2;
//	double c = 1.1, d = 2.2;
//	Add(a, (int)d);     //用户自定义强制转换
//	Add<double>(c, b);  //显示实例化，在函数名后加<实例化类型
//	Add(a, b);			//有专门的处理函数调用专门的处理函数，没有再调用模板函数
//	system("pause");
//	return 0;
//}



//类模板的定义格式
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
//类模板函数在类外进行定义
template<class A>
Vector<A>::~Vector(){
	delete[]_pdata;
	_size = 0;
	_capacity = 0;
}
int main(){
	return 0;
}