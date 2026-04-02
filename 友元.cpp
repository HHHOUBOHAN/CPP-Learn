#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
//友元实现的三种方法
//1.全局函数做友元



//class Building
//{
//	//goodGey全局函数是Building好朋友 可以访问Building的私有成员
//	//在谁内部声明就是访问谁的私有变量
//	friend void goodGey(Building* building);
//
//public:
//	Building()
//	{
//		m_Sittingroom = "客厅";
//		m_Bedroom = "卧室";
//
//	}
//public:
//	string m_Sittingroom;
//private:
//	string m_Bedroom;
//
//};
////全局函数
//void goodGey(Building *building)
//{
//	cout << "好基友访问 " << building->m_Sittingroom << endl;
//	cout << "好基友访问 " << building->m_Bedroom << endl;
//}
//void test01() {
//	Building building;
//
//	goodGey(&building);
//
//}
//int main() {
//	test01();
//	return 0;
//
//}

//2.类做友元
//class Building
//{
//	//GoodGay是 Building友元
//	friend class GoodGay;
//
//public:
//	Building();
//
//public:
//	string m_Sittingroom;
//
//private:
//	string m_Bedroom;
//};
////类外实现成员函数
//Building::Building() {
//	m_Sittingroom = "客厅";
//	m_Bedroom = "卧室";
//}
//
//
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();//参观函数访问这个Building属性
//
//	Building* building;
//};
////类外实现成员函数
//GoodGay::GoodGay() {
//	//创建建筑物的对象
//	building = new Building;
//
//}
//void GoodGay::visit() {
//	cout << "好基友正在访问：" << building->m_Sittingroom << endl;
//	cout << "好基友正在访问：" << building->m_Bedroom << endl;
//}
//
//
//
//void test01() {
//	GoodGay goodgay;
//	//.(点操作符)：用于对象实体
//	goodgay.visit();
//	//->（箭头操作符）是：用于指针
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//3.成员函数做友元
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();
//
//	Building* building;
//	//访问私有成员
//	void visit1();
//	//不可以访问私有成员
//	void visit2();
//
//};
//
//
//
//class Building
//{
//	//友元 friend +（函数类型+类::函数名）
//
//	//当你想把类 A 的成员函数设为类 B 的友元时 必须A在前 B在后
//	//在完整定义一个类（看到大表单里的内容）之前，你绝对不能访问这个类里的任何变量成员或成员函数
//
//
//	friend void GoodGay::visit1();
//
//public:
//	Building();
//
//public:
//	string m_Sittingroom;//客厅
//
//private:
//	string m_Bedroom;//卧室
//
//};
//
//Building::Building()
//{
//	m_Sittingroom = "客厅";
//	m_Bedroom = "卧室";
//}
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//void GoodGay::visit1() {
//	cout << "好基友正在访问：" << building->m_Sittingroom << endl;
//	cout << "好基友正在访问：" << building->m_Bedroom << endl;
//}
//void GoodGay::visit2() {
//	cout << "好基友正在访问：" << building->m_Sittingroom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit1();
//	gg.visit2();
//}
//
//
//int main() {
//	test01();
//	return 0;
//}