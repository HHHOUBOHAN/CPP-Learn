//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//* 重新敲一遍 
//深拷贝于浅拷贝
//初始化列表
//类对象作为类成员  
// 
//LNK1168: 无法打开 D:\code\VisualStudio code\C++\x64\Debug\C++.exe 进行写入 表示链接器无法写入可执行文件。这通常是因为目标 exe 文件正在被其他进程占用。 
//看看是否有之前运行的程序没有关闭，或者是否有其他程序正在使用这个 exe 文件。解决方法是关闭占用该文件的程序，或者重新启动计算机来释放文件占用。确保在运行新的编译和链接操作之前，之前的程序已经完全退出。

//深拷贝于浅拷贝
//浅拷贝：简单的复制拷贝操作  编译器操作  仅仅时等号 复制 时同一个地址
//深拷贝：在进行拷贝操作时  不仅仅复制对象的成员变量的值 还要复制对象成员变量所指向的内存空间  也就是堆区内存  需要自己写拷贝构造函数来实现深拷贝
//深拷贝 拷贝堆区时 会重新找一块内存重新开辟内存空间  进行拷贝  这样就不会出现浅拷贝中两个对象的成员变量指向同一块内存空间的问题了
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认无参构造函数被调用了" << endl;
//	}
//	int m_Age;
//	int *m_Height;
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person默认无参构造函数被调用了" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person默认有参构造函数被调用了" << endl;
//	}
//	//深拷贝
//	Person(const Person& p) {
//		m_Age = p.m_Age;
//		//深拷贝  重新开辟内存空间  进行拷贝
//		m_Height = new int(*p.m_Height);
//		cout << "Person默认拷贝构造函数被调用了" << endl;
//	}
//	~Person()
//	{
//		//如果在构造函数中开辟了堆区内存  在析构函数中必须释放堆区内存 
//		if(m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;//释放堆区内存后 将指针置空 以防止野指针的出现
//		}
//		cout << "Person析构函数被调用了" << endl;
//	}
//};
//void test01() {
//	Person p1(10,130);
//	cout << "p1的年龄为：" << p1.m_Age << endl;
//	cout << "p1的身高为：" << *p1.m_Height << endl;
//	Person p2(p1);//调用拷贝函数
//	cout << "p1的年龄为：" << p1.m_Age << endl;
//	cout << "p1的身高为：" << *p1.m_Height << endl;//输出要解引用
//}
//int main() {
//	test01();
//	//这个如果是浅拷贝  p1和p2的m_Height指针指向同一块内存  当p1和p2对象销毁时 会调用析构函数  在析构函数中会释放堆区内存  但是这个堆区内存已经被释放了  当另一个对象的析构函数也要释放这个堆区内存时 就会出现问题  因为这个堆区内存已经被释放了  所以会出现野指针的问题
//	//堆区内存重复释放
//	system("pause");
//	return 0;
//}
// 
// 
// 
//
//初始化列表
//class Person
//{
//public:
//	int a;
//	int b;
//	int c;
	//1.传统初始化操作
	/*Person(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}*/
	//2.初始化但写死
	//Person() :a(10), b(100), c(1000)//这种已经写死了
	//{
	//}
	//初始化
	/*Person(int a, int b, int c) :a(b), b(b), c(c)//一定注意这个冒号的位置
	{
	}*/

//};
//void test01() {
//	/*Person p(10, 101, 12);*/
//	Person p(100,129,122390);
//
//	cout << p.a << endl;
//	cout << p.b << endl;
//	cout << p.c << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//类对象作为类成员  （类中成员可以是另一个类的对象  称为对象成员）
//当其他类的对象作为一个类的成员时  在创建这个类的对象时  这个成员对象也会被创建  在销毁这个类的对象时  这个成员对象也会被销毁   
//先调用创建后销毁 这个成员对象先创建后销毁
//class Phone
//{
//public:
//	//手机品牌初始化
//	string m_pname;
//	Phone(string name) :m_pname(name)
//	{
//		cout << "Phone有参构造函数被调用了" << endl;
//	}
//	~Phone() {
//		cout << "Phone析构函数被调用了" << endl;
//	}
//};
//class Person
//{
////***一定要注意这个权限
//public:
//	Person(string name, string m_phone) :m_name(name), m_phone(m_phone)//m_phone(m_phone)等同于m_phone(Phone(m_phone)) 隐式转换法
//	{
//		/*this->name = name;
//		this->m_phone = Phone.m_name;*/
//		cout << "Person有参构造函数被调用了" << endl;
//
//	}
//	~Person() {
//		cout << "Person析构函数被调用了" << endl;
//	}
//	//姓名手机拥有人
//	string m_name;
//	//手机
//	Phone m_phone;
//};
//void test01()
//{
//	Person p("张三", "苹果");
//	cout << p.m_name << endl;
//	cout << p.m_phone.m_pname << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//静态成员变量和静态成员函数
// 
// 
//静态成员变量 
// 1.编译阶段就分配内存（全局区）2.所有对象共享同一份数据 3.类内声明  类外初始化
//静态成员变量不属于某个对象上 所有对象都共享同一份数据
//从而产生了两种访问方式 1.对象访问 2.类名访问
//静态成员变量都是有访问权限的

//class Person
//{
//public:
//	static int m_Age;//类内声明
//private:
//	static int m_c;
//
//};
////类外初始化
//int Person::m_Age = 10;//类外初始化  只能在类外
//int Person::m_c = 13213;
//
////void test01() {
////	/*Person p1;
////	Person p2;
////	p2.m_Age = 200;
////	//静态成员变量所有对象共享同一份数据  所以p1和p2的m_Age值都是200
////	cout << p1.m_Age << endl;*/
////}
//void test02() {
//	Person p;
//	//cout << p.m_Age << endl;//对象访问
//	//cout << Person::m_Age << endl;//类名访问
//	//cout << Person::m_c << endl;//私有权限类外访问  不能访问  只能在类内访问
//}
//int main() {
//		//test01();
//	test02();
//		return 0;
//}
//静态成员函数
//1.所有对象共享同一个函数  2.静态成员函数只能访问静态成员变量  3.静态成员函数没有this指针  4.静态成员函数可以类名访问  对象访问
//class Person
//{
//	public:
//	int m_c;
//	static int m_Age;//类内声明
//	static void func() {
//		cout << "这是一个静态成员函数" << endl;
//		cout << "m_Age = " << m_Age << endl;//静态成员函数只能访问静态成员变量
//		//cout << m_c << endl;//静态成员函数不能访问非静态成员变量 无法区分到底哪个是哪个对象的m_c
//	}
//	//有访问权限、
//private :
//	static void func9() {
//		cout << "这是一个静态成员函数" << endl;
//	}
//};
//int Person::m_Age = 1000;//类外初始化
//void test01() {
//	Person p;
//	p.func();//对象访问
//	Person::func();//类名访问
//	//person::func9();//类名访问  私有权限类外访问  不能访问  只能在类内访问
//}
//int main() {
//	return 0;
//}