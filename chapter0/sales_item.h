#pragma once

#include "head.h"

class sales_item
{
public:
	sales_item() : ISBN(""), price(0), num(0) {} // Ĭ�Ϲ��캯��
	sales_item(const std::string& isbn, double p, int n) : ISBN(isbn), price(p), num(n) {} // �������Ĺ��캯��
	~sales_item() {} // ��������

	// ��Ա����
	const std::string& getISBN(); // ��ȡISBN
	const double getPrice(); // ��ȡ�۸�
	const int getNum(); // ��ȡ����
	const void setISBN(const std::string& isbn) { ISBN = isbn; } // ����ISBN
	const void setPrice(double p) { price = p; } // ���ü۸�
	const void setNum(int n) { num = n; } // ��������
	friend std::istream& operator>> (std::istream& is, sales_item& book); // �������������
	friend std::ostream& operator<< (std::ostream& os, const sales_item& book); // ������������
	sales_item& operator=(const sales_item& item1); // ���ظ�ֵ�����
	sales_item& operator+(const sales_item& item1); // ���ؼӷ������
	sales_item& operator+=(const sales_item& item1); // ���ؼӷ���ֵ�����
private:
	std::string ISBN;
	double price;
	int num;

};