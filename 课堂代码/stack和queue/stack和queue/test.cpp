#include<iostream>
#include<stack>
using namespace std;
//��Сջ
class MinStack{
public:
	void push(int x){
		// ֻҪ��ѹջ���Ƚ�Ԫ�ر��浽_elem
		_elem.push(x);
		//���xС��ջ��Ԫ�أ���xѹ��ջ��
		if (_min.empty() || x <= _min.top())
			_min.push(x);
	}
	void pop()
	{
		// ���_minջ����Ԫ�ص��ڳ�ջ��Ԫ�أ�_min����Ԫ��Ҫ�Ƴ�
		if (_min.top() == _elem.top())
			_min.pop();
		_elem.pop();
	}
	int top(){ 
		return _elem.top(); }
	int getMin(){ 
		return _min.top(); }
private:
	//����ջ�е�Ԫ��
	stack<int>_elem;
	//����ջ����Сֵ
	stack<int>_min;
};
