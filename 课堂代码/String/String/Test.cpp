#include<iostream>
#include<string>
using namespace std;
void stringtest(){
	string str("aasdasfsadf");
	cout << str.size() << endl;     //返回字符串有效长度
	cout << str.length() << endl;   //返回字符串有效长度
	cout << str.capacity() << endl; //返回空间总大小
	cout << str<< endl;
	str.clear();
	cout << str.size() << endl;
	cout << str.capacity() << endl;// 将s中的字符串清空，注意清空时只是将size清0，不改变底层空间的大小
	str.resize(10, 'a');
	cout << str.size() << endl;
	cout << str.capacity() << endl;//将s中有效字符个数增加到10个，多出位置用'a'进行填充
}	
int main(){
	stringtest();
	system("pause");
	return 0;
}