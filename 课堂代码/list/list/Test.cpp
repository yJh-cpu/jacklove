#include<iostream>
#include<list>
#include<vector>
using namespace std;
//list�Ĺ���
//int main(){
//	list<int>l1;
//	list<int>l2(4, 100);
//	list<int>l3(l2.begin(), l2.end());
//	list<int>l4(l3);
//	//�����鷽ʽΪ���������乹��l5
//	int array[] = { 1, 2, 3, 4, 5, 6 };
//	list<int>l5(array, array + sizeof(array) / sizeof(int));
//  //��������ʽ���б���l5
//	for (list<int>::iterator it = l5.begin(); it != l5.end(); it++){
//		cout << *it << ' ';
//	}
//	//��Χfor��ʽ���б���
//	for (auto e : l5){
//		cout << e << ' ';
//	}
//	return 0;
//}

//list��������ʹ��
//int main(){
//	int array[] = { 1, 2, 3, 4, 5,6};
//	list<int>ls(array,array+sizeof(array)/sizeof(int));
//	//���������
//	for( list<int>::iterator it = ls.begin(); it != ls.end(); it++){
//		cout << *it <<' ';
//	}
//	cout << endl;
//	//���������
//	for (list<int>::reverse_iterator it = ls.rbegin(); it != ls.rend(); it++){
//		cout << *it << ' ';
//	}
//	system("pause");
//	return 0;
//}


//list�еĸ��ֺ���
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
//ʹ��push_back����β��
//	ls.push_back(100);
//	ls.push_back(116);
//	ls.push_back('Q');
//	print(ls);

//	//push_frontͷ��
//	ls.push_front(1314);
//	print(ls);

//	//pop_backβɾ
//	ls.pop_back();
//	ls.pop_back();
//	print(ls);

//	//pop_frontͷɾ
//	ls.pop_front();
//	ls.pop_front();
//	print(ls);

//	//insert����
//	auto pos = ls.begin();
//	pos++;
//	ls.insert(pos, 123);

//	//��������Ԫ��
//	vector<int>v = { 1, 2, 3 };
//	ls.insert(pos, v.begin(), v.end());
//	print(ls);

//	//eraseɾ��
//	auto pos1 = ls.end();
//	pos1--;
//	ls.erase(pos1);

//	//ɾ������Ԫ��
//	ls.erase(++ls.begin(), ls.end());
//	print(ls);

//	//swap��������
//	int array1[] = { 1232, 123124, 14325325 };
//	list<int>ls2(array1, array1 + sizeof(array1) / sizeof(int));
//	print(ls2);
//	ls.swap(ls2);
//	print(ls2);

//	//clear��������е�����Ԫ��
//	ls2.clear();
//	cout << ls2.size() << endl;
//	system("pause");
//	return 0;
//}



//list������ʧЧ�����벻�ᣬֻ��ɾ���Żᣬ����ֻ��ɾ������һ���ڵ��ʧЧ��
//int main(){
//	list<int>ls(6, 99);
//	for (auto it = ls.begin(); it != ls.end(); it++){
//		cout << *it << ' ';
//	}
//	list<int>::iterator it = ls.begin();
//	ls.erase(it);
//	it++; //�˴������˵�����ʧЧ�����⣬erase()����ִ�к�it��ָ��Ľڵ��ѱ�ɾ�������it��Ч������һ��ʹ��itʱ�������ȸ��丳ֵ
//	system("pause");
//	return 0;
//}


//������ʧЧ���и���(���±�������)
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
