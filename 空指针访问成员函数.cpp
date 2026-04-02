//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////空指针访问成员函数
//class Person {
//	public:
//		int m_age;
//	void showfunc() {
//		cout << "func函数被调用了" << endl;
//	}
//	void showfunc2() {
//		if (this == NULL) {
//			return;
//		}
//		cout << this->m_age << endl;
//	}
//};
//void test01() {
//	Person* p = NULL;//空指针
//	p->showfunc();//空指针访问成员函数  这个是可以的 因为这个成员函数中没有访问成员变量  没有访问成员变量就不会出现问题  这个时候this指针也是一个空指针 但是没有访问成员变量 所以不会出现问题
//	//p->showfunc2();//空指针访问成员函数  这个是错误的 因为这个成员函数中访问了成员变量  访问了成员变量就会出现问题  因为this指针是一个空指针  当访问成员变量时 就会出现问题
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}