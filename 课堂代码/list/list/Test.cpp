#include<iostream>
#include<list>
#include<vector>
using namespace std;
//list的构造
//int main(){
//	list<int>l1;
//	list<int>l2(4, 100);
//	list<int>l3(l2.begin(), l2.end());
//	list<int>l4(l3);
//	//以数组方式为迭代器区间构造l5
//	int array[] = { 1, 2, 3, 4, 5, 6 };
//	list<int>l5(array, array + sizeof(array) / sizeof(int));
//  //迭代器方式进行遍历l5
//	for (list<int>::iterator it = l5.begin(); it != l5.end(); it++){
//		cout << *it << ' ';
//	}
//	//范围for方式进行遍历
//	for (auto e : l5){
//		cout << e << ' ';
//	}
//	return 0;
//}

//list迭代器的使用
//int main(){
//	int array[] = { 1, 2, 3, 4, 5,6};
//	list<int>ls(array,array+sizeof(array)/sizeof(int));
//	//正向迭代器
//	for( list<int>::iterator it = ls.begin(); it != ls.end(); it++){
//		cout << *it <<' ';
//	}
//	cout << endl;
//	//反向迭代器
//	for (list<int>::reverse_iterator it = ls.rbegin(); it != ls.rend(); it++){
//		cout << *it << ' ';
//	}
//	system("pause");
//	return 0;
//}


//list中的各种函数
//void print(list<int>&l){
//	for (auto e : l){
//		cout << e << ' ';
//	}
//	cout << endl;
//}
//int main(){
//	int array[] = { 1, 2, 3 };
//	list<int>ls(array, array + sizeof(array) / sizeof(int));
//	
//使用push_back进行尾插
//	ls.push_back(100);
//	ls.push_back(116);
//	ls.push_back('Q');
//	print(ls);

//	//push_front头插
//	ls.push_front(1314);
//	print(ls);

//	//pop_back尾删
//	ls.pop_back();
//	ls.pop_back();
//	print(ls);

//	//pop_front头删
//	ls.pop_front();
//	ls.pop_front();
//	print(ls);

//	//insert插入
//	auto pos = ls.begin();
//	pos++;
//	ls.insert(pos, 123);

//	//插入区间元素
//	vector<int>v = { 1, 2, 3 };
//	ls.insert(pos, v.begin(), v.end());
//	print(ls);

//	//erase删除
//	auto pos1 = ls.end();
//	pos1--;
//	ls.erase(pos1);

//	//删除区间元素
//	ls.erase(++ls.begin(), ls.end());
//	print(ls);

//	//swap交换函数
//	int array1[] = { 1232, 123124, 14325325 };
//	list<int>ls2(array1, array1 + sizeof(array1) / sizeof(int));
//	print(ls2);
//	ls.swap(ls2);
//	print(ls2);

//	//clear清空链表中的所有元素
//	ls2.clear();
//	cout << ls2.size() << endl;
//	system("pause");
//	return 0;
//}



//list迭代器失效（插入不会，只有删除才会，并且只有删除的哪一个节点会失效）
//int main(){
//	list<int>ls(6, 99);
//	for (auto it = ls.begin(); it != ls.end(); it++){
//		cout << *it << ' ';
//	}
//	list<int>::iterator it = ls.begin();
//	ls.erase(it);
//	it++; //此处出现了迭代器失效的问题，erase()函数执行后，it所指向的节点已被删除，因此it无效，在下一次使用it时，必须先给其赋值
//	system("pause");
//	return 0;
//}


//迭代器失效进行改正(重新遍历即可)
//int main(){
//	list<int>ls(6, 99);
//	for (auto it = ls.begin(); it != ls.end(); it++){
//		cout << *it << ' ';
//	}
//	cout << endl;
//	list<int>::iterator it = ls.begin();
//	ls.erase(it++);// it = l.erase(it);
//	for (auto e : ls){
//		cout << e << ' ';
//	}
//	system("pause");
//	return 0;
//}
