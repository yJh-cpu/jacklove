#include<iostream>
#include<string>
using namespace std;
//void stringtest(){
//	string str("aasdasfsadf");
//	cout << str.size() << endl;     //返回字符串有效长度
//	cout << str.length() << endl;   //返回字符串有效长度
//	cout << str.capacity() << endl; //返回空间总大小
//	cout << str<< endl;
//	str.clear();
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;// 将s中的字符串清空，注意清空时只是将size清0，不改变底层空间的大小
//	str.resize(10, 'a');
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;//将s中有效字符个数增加到10个，多出位置用'a'进行填充
//	cout << str << endl;
//	str.resize(20);
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	cout << str << endl;
//	str.resize(5);                       //将s中有效字符的个数缩小至5个，空间大小不变
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	cout << str<<endl;
//	str.reserve(100);                      //将s中大小扩充到100个，有效字符个数不变
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	str.reserve(1);                          
//	cout << str.size() << endl;                //将s中空间大小缩小到1个（不能改变底层空间大小）（有效字符个数也不会改变）比实际底层空间大小小的话这句代码没有用
//	cout <<str. capacity() << endl;
//	cout << str << endl;
//}	



//// 利用reserve提高插入数据的效率，避免增容带来的开销
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


	

//string类对象的遍历访问
//void test(){
//	string s1("vabcdefg");
//	const string s2("vabcdefg");
//	s1[0] = '0';
//	//s2[0] = '0';       //const修饰的string对象不可修改
//}
//
//void Teststring(){
////1.operator[]+for
//	string s("zhulaosan");
//	for (int i = 0; i < s.size(); i++){
//		cout << s[i];
//	}
//	cout << endl;
////2.iterator（迭代器访问方式）
//	string::iterator it = s.begin();
//	while (it != s.end()){
//		cout << *it;
//		it++;
//	}
//	cout << endl;
////3.范围for
//	for (auto e : s){
//		cout << e ;
//	}
//}
//int main(){
//	Teststring();
//	system("pause");
//	return 0;
//}

//string类对象的修改操作
//void test(){
//	string s("https://www.runoob.com/python3/python3-conditional-statements");
//	s += ".ht";
//	s.append("m");//可以输入字符串
//	s.push_back('l');//push_back只能输入字符
//	cout << s << endl;
//	size_t start=s.find("://");
//	cout << start << endl;
//	size_t finsh = s.find("/", start+3);
//	cout << finsh << endl;
//	start += 3;
//	string adress=s.substr(start, finsh - start);
//	cout << adress << endl;
////删除url的.tml
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