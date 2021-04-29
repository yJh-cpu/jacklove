#include<iostream>
#include<stack>
using namespace std;
//最小栈
class MinStack{
public:
	void push(int x){
		_elem.push(x);
		if (_min.empty() || x <= _min.top())
			_min.push(x);
	}
	void pop()
	{
		// 如果_min栈顶的元素等于出栈的元素，_min顶的元素要移除
		if (_min.top() == _elem.top())
			_min.pop();
		_elem.pop();
	}
private:
	//保存栈中的元素
	stack<int>_elem;
	//保存栈的最小值
	stack<int>_min;
};
