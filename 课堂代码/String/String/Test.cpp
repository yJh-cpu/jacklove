#include<iostream>
#include<string>
using namespace std;
void stringtest(){
	string str("aasdasfsadf");
	cout << str.size() << endl;     //�����ַ�����Ч����
	cout << str.length() << endl;   //�����ַ�����Ч����
	cout << str.capacity() << endl; //���ؿռ��ܴ�С
	cout << str<< endl;
	str.clear();
	cout << str.size() << endl;
	cout << str.capacity() << endl;// ��s�е��ַ�����գ�ע�����ʱֻ�ǽ�size��0�����ı�ײ�ռ�Ĵ�С
	str.resize(10, 'a');
	cout << str.size() << endl;
	cout << str.capacity() << endl;//��s����Ч�ַ��������ӵ�10�������λ����'a'�������
}	
int main(){
	stringtest();
	system("pause");
	return 0;
}