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
//	str.resize(5);
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	cout << str<<endl;
//	str.reserve(100);
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//}	
//// 利用reserve提高插入数据的效率，避免增容带来的开销
//void testpushback(){
//	string s;
//    size_t sz = s.capacity();
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
//	testpushback();
//	testpushbackreserve();
//	system("pause");
//	return 0;
//}


	

	string solve(string str)
	{
			// write code here
			int len = str.size();
			string ans = str;
			for (int i = 0; i < len; i++){
				ans[i] = str[len - 1 - i];
			}
			cout << ans << endl;
			return str;
		}
	int main(){
		solve("abcd");
		system("pause");
		return 0;
	}
