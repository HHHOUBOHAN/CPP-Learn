//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////左移运算符重载
////1.成员函数
////2.全局函数
//class Person
//{
//	//左移运算符配合友元可以输出自定义类型
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a,int b){
//		m_a = a;
//		m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//	//利用成员函数来重载左移运算符
//	//void operator<<(Person &p) {
//	//	//p.operator<<(cout) 简化版本 p<<cout
//	//	// 通常不会应用成员函数重载<<运算符 因为无法实现cout在左面
//	//}
//};
//ostream & operator<<(ostream& cout, Person& p) {//ostream是标准的输出流对象
//	cout << p.m_a <<" " << p.m_b << endl;
//	return cout;
//	//这个也可以直接把cout改成out 引用的本身就是起别名
//}
//
//void test01() {
//	Person p(10,100);
//	cout << p<<endl;
//	//cout << p.m_a << endl;
//	//cout << p.m_b << endl;
//}
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}