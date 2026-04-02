//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////this指针:指针指向的是被调用的成员函数所属的对象
//
//class Person
//{
//public:
//	int age;//可以写成m_age
//	Person(  int age)
//	{
//		//age = age;
//		//this指针指向的是被调用的成员函数所属的对象
//		this->age = age;
//	}
//	Person& PersonAddAge(Person& p)//引用返回不会创建新的对象 直接返回本体
//	{
//		this->age += p.age;
//		//this 指向的是p2的指针 而*this指向的就是p2这个对象的本体
//		return *this;//返回对象本身
//	}
//};
////1.解决名称冲突问题
////void test01()
////{
////	Person p(10);
////	cout << "age = " << p.age << endl;
////}
////返回对象本身*this
//void test02()
//{
//	Person p(10);
//	Person p1(12);
//	p.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "age = " << p.age << endl;
//	 
//}
//int main() {
//		//test01();
//	test02();
//	system("pause");
//		return 0;	
//}