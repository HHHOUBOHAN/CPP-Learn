#define _CRT_SECURE_NO_WARNINGS 1
//////引用
////#include <iostream>
////using namespace std;
////int main() {
////
////	//语法：数据类型 &别名=原名
////	int a=10;//如果不初始化 就会产生垃圾值
////	int& b = a;
////	cout << a << endl;
////	cout << b << endl;
////	b = 20;
////	cout << a << endl;
////	cout << b << endl;
////	//引用之后操纵的是同一块内存
////
////	//引用的注意事项
////	// 引用必须初始化 int& b = a; 必须明确是谁的别名
////	// 引用一旦初始化 就不可以更改 明确是谁的别名 就不能改变成其他别名
////	int a = 10;
////	int& b = a;
////	int c = 10;
////	b = 10;//这个是赋值操作 不是引用
////
////	return 0;
////}
////引用做函数参数
//#include <iostream>
//using namespace std;
////交换函数
////值传递
//void mySwap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
////地址传递
//void mySwap02(int* a,int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void mySwap03(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
////引用传递
//int main() {
//	//值传递  形参不改变实参
//	/*int a = 10;
//	int b = 20;
//	mySwap01(a, b);
//	cout << a << endl;
//	cout << b << endl;*/
//	//地址传递  形参修饰实参
//	/*int a = 10;
//	int b = 20;
//	mySwap02(&a, &b);
//	cout << a << endl;
//	cout << b << endl;*/
//	//引用传递 形参修饰实参
//	//原因 引用去接收 mySwap03(int &a, int &b) 别名可以去一样的名字
//	/*int a = 10;
//	int b = 20;
//	mySwap03(a,b);
//	cout << a << endl;
//	cout << b << endl;*/
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
////引用做函数的返回值
//// 1.不要返回局部变量的引用
////int& test01() {
////	int a = 10;
////	return a;
////}
//// 2.函数的调用可以作为左值(如果函数返回值是引用 )
//int& test02() {
//	static int a = 10;//全局区  由系统释放（程序结束后）
//	return a;
//}
//int main() {
//
//
//	//int &ref = test01();
//	//cout << ref << endl;//编译器做了保存  其实a的内存已经释放
//	//cout << ref << endl;
//	 
//	int& ref2 = test02();
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	test02() = 100;
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	//test02()返回的是a的引用  test02() = 100;  这个相当于a=100;
//	return 0;
//}
//引用的本质（内部实现了一个指针常量）引用一旦初始化 就不能发生改变
//常量引用(主要是修饰形参 防止误操作)
//可以加上const修饰形参 防止形参改变实参
//#include <iostream>
//using namespace std;
//void showValue(const int& val) {
//	//val = 1000;//引用传递 会改变实参  可以加一个const 这样改变不了这个实参
//	cout << val << endl;
//}
//int main() {
//	//int a = 10;
//	//int& ref = a;//引用必须引用一个合法的内存空间
//	////加入const变为只读 不可修改
//	//const int& ref2 = 10;//加上const 编译器将代码修改 int temp=10; const int &ref=temp;
//    int a = 100;
//	showValue(a);
//	return 0;
//}

