#include"../chapter0/head.h"

int main()
{
	// 数据类型省略，指针和引用；
	int a = 10;
	int* p1 = &a;
	int* p2 = p1;
	int& r1 = a;
	int& r2 = *p1;// 引用和指针的区别在于引用是别名，指针是地址
	int** p3 = &p1;// 指向指针的指针
	std::cout << "a = " << a << std::endl;
	std::cout << "p1 = " << *p1 << std::endl;
	std::cout << "p2 = " << *p2 << std::endl;
	std::cout << "r1 = " << r1 << std::endl;
	std::cout << "r2 = " << r2 << std::endl;
	std::cout << "p3 = " << **p3 << std::endl;
}