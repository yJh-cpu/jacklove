#include<iostream>
#include<string>
using namespace std;
//void stringtest(){
//	string str("aasdasfsadf");
//	cout << str.size() << endl;     //�����ַ�����Ч����
//	cout << str.length() << endl;   //�����ַ�����Ч����
//	cout << str.capacity() << endl; //���ؿռ��ܴ�С
//	cout << str<< endl;
//	str.clear();
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;// ��s�е��ַ�����գ�ע�����ʱֻ�ǽ�size��0�����ı�ײ�ռ�Ĵ�С
//	str.resize(10, 'a');
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;//��s����Ч�ַ��������ӵ�10�������λ����'a'�������
//	cout << str << endl;
//	str.resize(20);
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	cout << str << endl;
//	str.resize(5);                       //��s����Ч�ַ��ĸ�����С��5�����ռ��С����
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	cout << str<<endl;
//	str.reserve(100);                      //��s�д�С���䵽100������Ч�ַ���������
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	str.reserve(1);                          
//	cout << str.size() << endl;                //��s�пռ��С��С��1�������ܸı�ײ�ռ��С������Ч�ַ�����Ҳ����ı䣩��ʵ�ʵײ�ռ��СС�Ļ�������û����
//	cout <<str. capacity() << endl;
//	cout << str << endl;
//}	



//// ����reserve��߲������ݵ�Ч�ʣ��������ݴ����Ŀ���
//void testpushback(){
//	string s;
//  size_t sz = s.capacity();
//	cout << sz << endl;
//	for (int i = 0; i < 100; i++){
//		s.push_back('c');
//		if (sz != s.capacity()){
//			sz = s.capacity();
//			cout << "change capacity" << sz << endl;
//		}
//		}
//}
//void testpushbackreserve(){
//	string s;
//	s.reserve(100);
//	size_t sz = s.capacity();
//	cout << sz << endl;
//	for (int i = 0; i < 100; i++){
//		s.push_back('c');
//		if (sz != s.capacity()){
//			sz = s.capacity();
//			cout << "change capacity" << sz << endl;
//		}
//	}
//}
//int main(){
//	stringtest();
//	//testpushback();
//	//testpushbackreserve();
//	system("pause");
//	return 0;
//}


	

//string�����ı�������
//void test(){
//	string s1("vabcdefg");
//	const string s2("vabcdefg");
//	s1[0] = '0';
//	//s2[0] = '0';       //const���ε�string���󲻿��޸�
//}
//
//void Teststring(){
////1.operator[]+for
//	string s("zhulaosan");
//	for (int i = 0; i < s.size(); i++){
//		cout << s[i];
//	}
//	cout << endl;
////2.iterator�����������ʷ�ʽ��
//	string::iterator it = s.begin();
//	while (it != s.end()){
//		cout << *it;
//		it++;
//	}
//	cout << endl;
////3.��Χfor
//	for (auto e : s){
//		cout << e ;
//	}
//}
//int main(){
//	Teststring();
//	system("pause");
//	return 0;
//}

//string�������޸Ĳ���
//void test(){
//	string s("https://www.runoob.com/python3/python3-conditional-statements");
//	s += ".ht";
//	s.append("m");//���������ַ���
//	s.push_back('l');//push_backֻ�������ַ�
//	cout << s << endl;
//	size_t start=s.find("://");
//	cout << start << endl;
//	size_t finsh = s.find("/", start+3);
//	cout << finsh << endl;
//	start += 3;
//	string adress=s.substr(start, finsh - start);
//	cout << adress << endl;
////ɾ��url��.tml
//	size_t r_start = s.rfind(".html");
//	s.erase(r_start);
//	cout << s << endl;
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<string.h>
char*ss = "qq";
char* sss = new char;
int main(){
	//strcpy(sss, ss);
	int b = strlen(ss);
	int a = strlen(sss);
	cout << a << b;
	system("pause");
	return 0;
}