#include<iostream>
#include<vector>
using namespace std;
//vector��ʹ��
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
//const iterator��ʹ��
//void Printvector(const vector<int> & v){
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end()){
//		cout << *it << endl;
//		it++;
//	}
//	cout << endl;
//}
//int main(){
//	//ʹ��push_back��������
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	//ʹ�õ���������
//	auto it = v.begin();
//	while (it != v.end()){
//		//cout << *it << endl;
//		it++;
//		cout << *it << endl;
//	}
//	cout << endl;
//	//ʹ�õ������޸�����
//	it = v.begin();
//	while (it != v.end()){
//		cout << *it << endl;
//		*it *= 2;
//		++it;
//	}
//	cout << endl;
//	//ʹ�÷��������������ӡ
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
//	v.insert(pos, 30);   //������ʧЧ���¸�ֵ
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}





//vs��vector��capacity������1.5����������
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

//vector��reserve����
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
//ʹ��resize��������
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




//vector����ɾ���
//push_backβ��  pop_backβɾ
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

//find����   insert��positionλ��֮ǰ����val ɾ��position��val
int main(){
	int array[] = {1,2,3,4,5,6};
	vector<int>v(array, array + sizeof(array) / sizeof(int));
	vector<int>::iterator it = v.begin();
	while (it!= v.end()){
		cout << *it << ' ';
		it++;
	}
	cout << endl;
	//ʹ��find����3����λ�õĵ�����
	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
	cout << *pos << endl;
	v.insert(pos, 100);
	return 0;
}