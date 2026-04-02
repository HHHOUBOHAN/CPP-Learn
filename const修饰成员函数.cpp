//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////常函数 常对象
//class  Person
//{
//public:
//	int m_age;
//	mutable int m_b;//即使在常函数中也能修改（加上mutable）
//	void showPerson()  const
//	{
//		//m_age = 100;//函数体后面加了一个可const  就不能修改
//		//加上const后就变成了this->m_age  修饰了这个this指向  指向的值也不可以修改
//		//this是指针常量 指向不可以修改  （无论是加不加这个CONST 指向都不可以修改）
//		this->m_b = 10000;
//	}
//	void func() {
//		cout << "skajdf" << endl;
//	}
//};
//void test01() {
//	Person p;
//	p.showPerson();
//}
//void test02() {
//	const Person p1;//常对象
//
//	//p1.m_age = 12984;//常对象属性不能修改
//	p1.m_b = 539485;//加上这个mutable 就是可以修改的
//
//	//常对象只能调用这个常函数 不能调用这个普通成员函数（普通成员函数能修改这个属性） 
//	p1.showPerson();
//	//p1.func();
//}
//int main() {
//	test01();
//	return 0;
//}