#define _CRT_SECURE_NO_WARNINGS 1
//类和对象
//类：相同性质的对象 我们可以抽象成类
//封装 把属性和行为作为一个整体 并且加以权限控制
#include <iostream>
#include <string>
using namespace std;
////设计圆类 求周长
//const double PI = 3.14;
//class C {
//	//访问权限
//public:
//	//属性
//	double r=100;
//	//行为
//	double cal() {
//		return 2 * PI * r;
//	}
//};
//int main() {
//	//实例化：对象的创建（通过类）
//	C s;
//	printf("%f", s.cal());
//	return 0;
//}
//学生类
//class Student {
//public:
//	//类中的属性和成员 统称成员
//	//属性 成员属性 成员变量
//	//行为 成员函数 成员方法
//
//	string name;
//	int id;
//	void showname() {
//		cout << name << endl;
//	}
//	void showid() {
//		cout << id << endl;
//	}
//	void setid(int id) {
//		this->id = id;
//	}
//	void setname() {
//		this->name = name;
//	}
//};
//int main() {
//	Student s9;
//	s9.name = "hakfsd";
//	s9.id = 78098;
//	s9.showid();
//	s9.showname();
//	return 0;
//}
//访问权限
//公共权限 public      成员 类内类外都可以访问
//保护权限 protected   成员 类内可访问   类外不可以访问  子类也可以访问父类的保护内容
//私有权限 private     成员 类内可访问   类外不可以访问  子类不可以访问父类的私有内容
//class Person {
//public:
//	string name;
//protected:
//	string car;
//private:
//	int password;
//public:
//	void func() {
//		name = "中";
//		car = "小米";
//		password = 80239854;
//	}
//};
//int main() {
//	Person p;
//	p.name = "喝咖啡";
//	//p.car = "奔驰";//保护权限 类外不可以访问
//	//p.password = 6789;//私有权限 类外不可以访问
//}
//struct和class 区别
//默认权限不同 struct 默认权限是公有  class  默认权限是私有
//class c1 {
//	int a1;
//};
//struct c2 {
//	int a2;
//};
//int main() {
//	c1 ap;
//	c2 bp;
//	//ap.a1 = 100;//私有权限
//	bp.a2 = 100;
//
//}
//成员属性设置为私有（控制读写权限   写权限 检测数据的有效性 （在这个写入中进行写入内容验证））
class Person {
public:
	void setname(string name){
		this->name = name;
	}
	string getname() {
		return name;
	}
	void setage (int age){
		if (age < 0 || age>150) {
			cout << "年龄输入有误" << endl;
			return;
		}
		this->age = age;
	}
	int getage() {
		return age;
	}
	void setidol(string idol) {
		this->idol = idol;
	}
private:
	string name;//可读可写
	int age=12;//只读 也可写  （年龄必须是在0~150之间）
	string idol;//只写
};
int main() {
	return 0;
}