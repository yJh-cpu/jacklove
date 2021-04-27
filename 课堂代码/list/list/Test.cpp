#include<iostream>
#include<list>
using namespace std;
//list的构造
int main(){
	list<int>l1;
	list<int>l2(4, 100);
	list<int>l3(l2.begin(), l2.end());
	list<int>l4(l3);
	//以数组方式为迭代器区间构造l5
	int array[] = { 1, 2, 3, 4, 5, 6 };
	//迭代器方式进行遍历l5
	list<int>l5(array, array + sizeof(array) / sizeof(int));
	for (list<int>::iterator it = l5.begin(); it != l5.end(); it++){
		cout << *it << ' ';
	}
	//范围for方式进行遍历
	for (auto e : l5){
		cout << e << ' ';
	}
	return 0;
}
