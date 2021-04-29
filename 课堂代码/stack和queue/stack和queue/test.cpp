#include<iostream>
#include<stack>
using namespace std;
//��Сջ
class MinStack{
public:
	void push(int x){
		_elem.push(x);
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
private:
	//����ջ�е�Ԫ��
	stack<int>_elem;
	//����ջ����Сֵ
	stack<int>_min;
};
