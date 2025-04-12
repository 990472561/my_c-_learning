#include"../chapter0/head.h"

int main()
{
	/*
//  关键字decltype

int a = 10;
int* b = &a;
decltype(a) c =10; // c是int类型
decltype(*b) d =a; // d是int&类型
decltype(&b) e =nullptr; // e是int**类型

//4.1
std::cout << 5 + 10 * 20 / 2 << std::endl;	

//4.2
	std::vector<int> vec{1,2,3,4,5,6};
	std::cout << *vec.begin() << " " << *(vec.begin()) << std::endl;//vec.begin()返回的是一个迭代器，解引用后得到的是迭代器指向的元素
	std::cout << *(vec.begin() + 1) << std::endl; //vec.begin() + 1返回的是一个迭代器，解引用后得到的是迭代器指向的元素
	std::vector<std::vector<std::string>> vec2{ {"nihao","China"},{"hello","world"} };
	auto it1 = *vec2.begin();//vec2.begin()返回的是一个迭代器，解引用后得到的是迭代器指向的元素
	auto it2 = (*vec2.begin()).begin();//vec2.begin()返回的是一个迭代器，解引用后得到的是迭代器指向的元素，it2是一个迭代器
	
	//4.6
	int a;
	std::cin >> a;
	if (a % 2 == 1)
	{
		std::cout << "奇数" << std::endl;

	}
	else
	{
		std::cout << "偶数" << std::endl;
	}
	
	//4.10
	int a = 0;
	while (std::cin >> a)
	{
		if (a == 42)
		{
			break;
		}
		else
		{
			std::cout << a << std::endl;
		}
	}
	
	//4.11
	int a = 76,b=54,c=32,d=1;
	bool flag = (a > b) ? ((b > c) ?
		((c > d) ? true : false) :
		false) :
		false;
	std::cout << flag << std::endl;
	
	//4.12
	int i = 1,j=-2,k=-3;
	std::cout << (i != j) << std::endl; //!=优先级小，先计算!=，结果为true
	std::cout << (i != j < k) << std::endl; //!=优先级小，先计算<,结果为true
	
	//4.13
	int i;double d;
	i = d = 3.5;

	std::cout << i << " " << d << std::endl; 
	d = i = 3.5;
	std::cout << i << " " << d << std::endl;
	
	//4.14
	int i = 0;
	if (i = 42)
	{
		std::cout << "把42赋给i" << std::endl;//不能把i赋给42
	}
	
	//4.15
	int i = 0;
	double dval;int ival;int* pval=&i;//pval必须初始化
	dval = ival = *pval = 3.5;
	std::cout << dval << " " << ival << " " << *pval << std::endl;
	
	//4.17
	for (int i = 0;i < 5;i)
	{
		std::cout << i++ << " ";//i++是后置自增，先输出i的值，然后i加1
	}
	std::cout << std::endl;
	for (int i = 0;i < 5;i)
	{
		std::cout << ++i << " ";//++i是前置自增，先i加1，然后输出i的值
	}
	
	//4.27
	unsigned long a = 3,b=7;
	std::cout << (a & b) << " " << (a | b )<< " " << (a && b )<<" "<<(a|| b)<< std::endl;
	
	//4.28
	int a = 3;
	char b = 'a';
	std::string c = "hello,world";
	std::vector<int> d = { 1,2,3,4,5,6,7,8,9 };
	std::cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << " " << sizeof(d) << std::endl;
	int e[] = {1,2,3,4,5};
	std::cout << sizeof(e) << " " << sizeof(e[0]) << std::endl;

	return 0;
	
	//4.29
int a = 3;
int* b = &a;
std::cout << sizeof(a) << " " << sizeof(b) << std::endl;
std::string c = "hello,world";
std::cout << sizeof(c) << " " << sizeof(c.begin()) << std::endl;
char d[] = "hello,world";
std::cout << sizeof(d) << " " << sizeof(&d) << std::endl;

	//类型转换强制转换
	//static_cast
int a = 3;
int b = 4;
double c = static_cast<double>(a) / b; //强制转换为double类型
std::cout << c << std::endl; //0.75

//const_cast
const int a = 3;
int* b = const_cast<int*>(&a); //去掉const属性
*b = 4; //修改值
std::cout << a << " " << *b << " " << a - 4 << std::endl; //这里输出a的值是3，因为a在编译时就被优化了，*b的值是4，因为去掉了const属性

//
char str1[10] = "ajsfsgdif";
std::string str2(str1);
*/
return 0;
}
