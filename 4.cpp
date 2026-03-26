//#define _CRT_SECURE_NO_WARNINGS 1
//函数重载(提高复用性)  根据不同的传入参数来对应
//  同一个作用域下
//  函数名称相同
//  函数的参数类型不同 个数不同 顺序不同 （满足之一就可以了）
//注意 函数的返回值不作为函数重载的条件
//#include <iostream>
//using namespace std;
//void func() {
//	cout << "0" << endl;
//}
//void func(int a) {
//	cout << "1 " << a << endl;
//}
//void func(double a) {
//	cout << "1 " << a << endl;
//}
//void func(int a, double b) {
//	cout << "1 " << a << endl;
//}
//void func(double a, int b) {
//	cout << "1 " << a << endl;
//}
//int main() {
//	func(10);
//	func(3.23);
//	func(10, 3.12);
//	func(10.32, 3);
//	return 0;
//}
//重载的注意事项
//1. 引用作为重载条件
//void func(int &a) {
//	cout << "func(int &a)" << endl;
//}
//void func(const int& a) {
//	cout << "func(const int &a)" << endl;
//}
////int 和 const int  参数类型不同
//int main() {
//	//int a;
//	//func(a);//func(int &a) 
//
//	func(10);//func(const int& a)
//	//如果是第一个 void func(int &a)    这个是 int &a =10;  不合法 引用必须有一个合法的内存空间
//	//如果是第二个 void func(const int& a)  这个是const int& a=10
//
//	return 0;
//}
//2.函数重载碰到默认参数(函数重载尽量不要默认参数)
//void func2(int a,int b=10) {
//	cout << "void func2(int a,int b=10)" << endl;
//}
//void func2(int a) {
//	cout << "void func2(int a)" << endl;
//}
//int main() { 
//	return 0;
//}