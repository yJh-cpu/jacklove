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
//void Printvector(const vector<int> & v){
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end()){
//		cout << *it << endl;
//		it++;
//	}
//	cout << endl;
//}
//int main(){
//	//使用push_back插入数据
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	//使用迭代器遍历
//	auto it = v.begin();
//	while (it != v.end()){
//		//cout << *it << endl;
//		it++;
//		cout << *it << endl;
//	}
//	cout << endl;
//	//使用迭代器修改数据
//	it = v.begin();
//	while (it != v.end()){
//		cout << *it << endl;
//		*it *= 2;
//		++it;
//	}
//	cout << endl;
//	//使用反向迭代器遍历打印
//	vector<int>::reverse_iterator rit = v.rbegin();
//	while (rit != v.rend()){
//		cout << *rit << endl;
//		rit++;
//	}
//}
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





//vs下vector的capacity增容以1.5倍进行增容
//int main(){
//	size_t sz;
//	vector<int>str;
//	sz = str.capacity();
//	cout << "make grow str:" << endl;
//	for (int i = 0; i < 100; ++i){
//		str.push_back(i);
//		if (sz != str.capacity()){
//			sz = str.capacity();
//			cout << "capacity change:" << sz << endl;
//		}
//		}
//	return 0;
//}

//vector的reserve增容
//int main(){
//	size_t za;
//	vector<int>str;
//	za = str.capacity();
//	str.reserve(100);
//	for (int i = 0; i < 100; i++){
//		str.push_back(i);
//		if (za != str.capacity()){
//			za = str.capacity();
//			cout << "make grow str:" << za << endl;
//		}
//		}
//	return 0;
//}
//使用resize进行增容
//int main(){
//	vector<int>str;
//	for (int i = 0; i < 100; i++){
//	str.push_back(i);
//	}
//	str.resize(5);
//	str.resize(8, 100);
//	str.resize(12);
//	for (int i = 0; i < str.size(); i++){
//		cout << str[i] << endl;
//	}
//	return 0;
//}




//vector的增删查改
//push_back尾插  pop_back尾删
//int main(){
//	int array[] = { 1, 2, 4, 5, 78, 1 };
//	vector<int>v(array, array + sizeof(array) / sizeof(int));
//	vector<int>::iterator it = v.begin();
//	while (it!=v.end()){
//		cout << *it <<' ';
//		it++;
//	}
//	cout << endl;
//	v.push_back(2);
//	v.push_back(100);
//	it=v.begin();
//	while (it != v.end()){
//		cout << *it <<' ';
//		it++;
//	}
//	cout << endl;
//	v.pop_back();
//	v.pop_back();
//	v.pop_back();
//	v.pop_back();
//	v.pop_back();
//	v.pop_back();
//	it = v.begin();
//	while (it != v.end()){
//	cout << *it << ' ';
//	it++;
//	}
//	return 0;
//}

//find查找   insert在position位置所在迭代器之前插入val erase删除position位置迭代器的val
//int main(){
//	int array[] = {1,2,3,4,5,6};
//	vector<int>v(array, array + sizeof(array) / sizeof(int));
//	vector<int>::iterator it = v.begin();
//	while (it!= v.end()){
//		cout << *it << ' ';
//		it++;
//	}
//	cout << endl;
//	//使用find查找3所在位置的迭代器
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	cout << *pos << endl;
//	//在pos位置之前插入100
//	v.insert(pos, 100);              //要再次进行遍历才能访问（其实就是给it重新赋值），否则直接访问会出现迭代器失效（原来的it空间已经被释放没有了）
//	it = v.begin();
//	while (it != v.end()){
//		cout << *it << ' ';
//		it++;
//	}
//	cout << endl;
//	//找到6所在位置的迭代器,并且删除这个位置的数据
//	pos = find(v.begin(), v.end(), 6);
//	v.erase(pos);
//	it = v.begin();
//	while (it != v.end()){
//		cout << *it << ' ';
//		it++;
//	}
//	cout << endl;
//	return 0;
//}



//使用operator[]来进行遍历
//int main(){
//	int array[] = {1,2,3,4,5,6};
//	vector<int>v(array, array + sizeof(array) / sizeof(int));
//	v[0] = 100;
//	cout << v[0] << endl;
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] <<' ';
//	}
//	cout << endl;
//	//swap交换两个vector的数据空间
//	vector<int>_swap(6,1000);
//	_swap.swap(v);
//	cout << "v data:";
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << ' ';
//	}
//	cout << endl;
//	cout << "_swap data:";
//	for (int i = 0; i < _swap.size(); i++) {
//		cout << _swap[i] << ' ';
//	}
//	cout << endl;
//	//范围for进行遍历（只有在c++11和C++11之后支持）
//	for (auto e : v){
//		cout << e << ' ';
//	}
//	cout << endl;
//	return 0;
//}








//erase删除之后迭代器失效了
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	// 使用find查找3所在位置的iterator
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	// 删除pos位置的数据，导致pos迭代器失效。
//	v.erase(pos);
//	cout << *pos << endl;    // 此处会导致非法访问(erase删除pos位置元素后，pos位置之后的元素会往前搬移，没有导致底层空间的改变，理论上讲迭代
//	                         //器不应该会失效，但是：如果pos刚好是最后一个元素，删完之后pos刚好是end的位置，而end位没有元素的，那么pos就失效了
//                           //，因此删除vector中任意位置上元素时，vs就认为该位置迭代器失效了)
//	return 0;
//}
