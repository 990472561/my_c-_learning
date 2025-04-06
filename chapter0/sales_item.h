#pragma once

#include "head.h"

class sales_item
{
public:
	sales_item() : ISBN(""), price(0), num(0) {} // 默认构造函数
	sales_item(const std::string& isbn, double p, int n) : ISBN(isbn), price(p), num(n) {} // 带参数的构造函数
	~sales_item() {} // 析构函数

	// 成员函数
	const std::string& getISBN(); // 获取ISBN
	const double getPrice(); // 获取价格
	const int getNum(); // 获取数量
	const void setISBN(const std::string& isbn) { ISBN = isbn; } // 设置ISBN
	const void setPrice(double p) { price = p; } // 设置价格
	const void setNum(int n) { num = n; } // 设置数量
	friend std::istream& operator>> (std::istream& is, sales_item& book); // 重载输入运算符
	friend std::ostream& operator<< (std::ostream& os, const sales_item& book); // 重载输出运算符
	sales_item& operator=(const sales_item& item1); // 重载赋值运算符
	sales_item& operator+(const sales_item& item1); // 重载加法运算符
	sales_item& operator+=(const sales_item& item1); // 重载加法赋值运算符
private:
	std::string ISBN;
	double price;
	int num;

};