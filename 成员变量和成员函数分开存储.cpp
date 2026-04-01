//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////成员变量和成员函数分开存储
//class Person
//{
//	int m_a;//非静态成员变量 属于对象上 每个对象都有一份  存储在栈区
//	static int m_b;//静态成员变量 不属于对象上 所有对象共享同一份数据 存储在全局区
//
//	void func() {}//非静态成员函数  不属于类对象上 
//
//	static void func2() {}//静态成员函数 不属于类对象上  
//};
//int Person::m_b = 100;//静态成员变量必须在类外初始化 只能在类外初始化
//void test01() {
//	Person p;
//	//空对象占用内存空间是一个字节（编译器会分配一个字节空间 会区分占用位置）  这是为了区分空对象和空指针  以防止编译器优化掉空对象
//	//每一个空对象都要有一个独立的地址  以区分不同的对象  以防止编译器优化掉空对象
//	cout <<sizeof(p) << endl; 
//}
//void test02() {
//	Person p1;
//	cout << sizeof(p1) << endl;
//}
//int main() {
//	//test01();
//	test02();
//	return 0;
//}