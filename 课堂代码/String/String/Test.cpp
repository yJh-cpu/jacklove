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
//	str.resize(5);
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//	cout << str<<endl;
//	str.reserve(100);
//	cout << str.size() << endl;
//	cout << str.capacity() << endl;
//}	
//// ����reserve��߲������ݵ�Ч�ʣ��������ݴ����Ŀ���
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
