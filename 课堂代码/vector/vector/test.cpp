#include<iostream>
#include<vector>
using namespace std;
//vector的使用
//int main(){
//	vector<int>v1;
//	vector<int>v2(4, 100);
//	vector<int>v3(v2.begin(), v2.end());
//	for (vector<int>::iterator it = v3.begin(); it != v3.end(); ++it){
//		cout << ' ' << *it << endl;
//	}
//	vector<int>v4(v3);
//	int array[] = { 1, 2, 3, 4 };
//	vector<int>v5(array, array + sizeof(array) / sizeof(int));
//	for (vector<int>::iterator it = v5.begin(); it != v5.end(); ++it){
//		cout << ' ' <<*it<< endl;
//	}
//	return 0;
//}
//const iterator的使用
void Printvector(const vector<int> & v){
	vector<int>::const_iterator it = v.begin();
	while (it != v.end()){
		cout << *it << endl;
		it++;
	}
	cout << endl;
}
int main(){
	//使用push_back插入数据
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//使用迭代器遍历
	auto it = v.begin();
	while (it != v.end()){
		//cout << *it << endl;
		it++;
		cout << *it << endl;
	}
	cout << endl;
	//使用迭代器修改数据
	it = v.begin();
	while (it != v.end()){
		cout << *it << endl;
		*it *= 2;
		++it;
	}
	cout << endl;
	//使用反向迭代器遍历打印
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend()){
		cout << *rit << endl;
		rit++;
	}
}
//int main(){
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	auto pos = find(v.begin(), v.end(), 3);  
//	cout << *pos << endl;
//	v.insert(pos, 30);   //迭代器失效重新赋值
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}