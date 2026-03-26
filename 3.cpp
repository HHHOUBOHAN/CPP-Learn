//#define _CRT_SECURE_NO_WARNINGS 1
////***函数默认参数（函数形参列表可以有默认值）
//#include <iostream>
//using namespace std;
////int func(int a, int b,int c) {
////	return a + b + c;
////}
////如果自己传入数据  就用自己的数据 如果没有  就用默认值
////注意事项  
////    如果某个位置已经有了默认参数 那么从这个位置以后 从左到右必须有默认值
////    如果函数的声明有了默认参数 那么函数的实现不能有默认参数
//int func(int a, int b = 10, int c = 100) {
//	return a + b + c;
//}
////    如果函数的声明有了默认参数 那么函数的实现不能有默认参数
////    声明和实现只能有一个默认参数 防止二义性
//int func1(int a, int b = 10, int c = 100);
//int func1(int a, int b, int c) {
//	return a + b + c;
//}
//int main() {
//	/*cout << func(19, 32, 32) << endl;*/
//	cout << func(19) << endl;
//	return 0;
//}
//函数的占位参数
//函数值返回类型 函数名（数据类型）{}
//目前占位参数 用不到  
//占位参数 可以有默认参数
//void func(int a,int) {
//	cout << "this is func" << endl;
//}
//int main() {
//	func(10,12);
//}