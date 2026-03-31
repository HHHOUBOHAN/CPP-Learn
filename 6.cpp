#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
////对象的初始化清理（构造函数 析构函数）
////构造函数 析构函数都是必须有的实现 如果我们没有自己写系统会默认提供一个空的构造函数和析构函数
//class Person {
//	//构造函数
//	//没有返回值 不用写void
//	//函数名和类名相同
//	// 可以有参数 可以重载  可以有默认参数  可以调用其他构造函数（构造函数之间的调用） 不能递归调用
//	//对象创建时自动调用 只调用一次
//public:
//	Person() {
//		cout << "Person构造函数被调用了" << endl;
//	}
//	//析构函数
//	//没有返回值 不用写void
//	//函数名和类名相同  名称前面加一个~
//	//不能有参数 不能重载 不能调用其他函数
//	//对象销毁前自动调用 只调用一次
//	~Person() {
//		cout << "Person析构函数被调用了" << endl;
//	}
// 
// 
//};
//void test() {
//	Person p1;//在栈上的数据 p1对象创建时自动调用构造函数  当test函数结束时 p1对象销毁 自动调用析构函数
//}
//int main() {
//	//test();
//	Person p1;//如果在main函数中创建对象  只有构造 没有析构  在main函数结束时才会调用析构函数  system("pause"); 这行还没有执行  所以析构函数还没有调用
//	system("pause");
//	return 0;
//}


//构造函数的分类及调用
//分类：
// 按照参数分类 无参构造函数（默认构造）  有参构造函数 
// 按照类型分类 普通构造函数  拷贝构造函数 
class Person
{
public:
	//一定是公共的要不然不能调用
	Person() {
		cout << "Person无参构造函数被调用了" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person有参构造函数被调用了" << endl;
	}
	//拷贝构造函数  参数是本类对象的引用  const修饰 防止修改传入的对象
	Person(const Person& p) {
		 //把传入对象的age值赋值给当前对象的age
		age = p.age;
		cout << "Person拷贝构造函数被调用了" << endl;
	}
	~Person() {
		cout << "Person析构函数被调用了" << endl;
	}
	int age;
};
//调用
void test() {
	Person p;//默认构造函数调用
	//1.括号法
	Person p1(10);//有参构造函数调用
	Person p2(p1);//拷贝构造函数调用
			//注意事项
			//调用默认构造函数时 不能加括号  Person p();  这行代码不是创建了一个对象 而是声明了一个函数  返回值是Person类型  函数名是p  没有参数
			//cout << p2.age << endl;
			//cout << p1.age << endl;
	//2.显示法
	Person p1;
	Person p2 = Person(10);//有参构造函数调用
	Person p3 = p2;//拷贝构造函数调用
			//注意事项
			//1. 当前只有 Person(10) 匿名对象 当前行执行结束后 系统会自动销毁这个匿名对象 
			//不要利用拷贝构造函数 初始化匿名对象   Person(p3);  编译器会认为Person(p3)===Person p3	会认为这个是一个对象的声明
	//3.隐式转换法
	Person p4 = 10;//Person p4 = Person(10);
}
int main() {
	test();
	return 0;
}