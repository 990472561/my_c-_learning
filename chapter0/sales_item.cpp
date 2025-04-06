#include"sales_item.h"

const std::string& sales_item::getISBN()
{
	return ISBN;
}
const double sales_item::getPrice()
{
	return price;
}
const int sales_item::getNum()
{
	return num;
}

std::istream& operator>> (std::istream& is, sales_item& book) // 重载输入运算符
{
	std::string isbn;
	double price;
	int num;
	if (!(is >> isbn >> price >> num))
	{
		std::cerr << "Error: invalid input" << std::endl;
		is.setstate(std::ios::failbit);  // 设置流为失败状态
		return is;
	}
	book.setISBN(isbn);
	book.setPrice(price);
	book.setNum(num);
	return is;
}
 std::ostream& operator<< (std::ostream& os, const sales_item& book) // 重载输出运算符
{
	os << book.ISBN << " " << book.price << " " << book.num;
	return os;
}
 sales_item& sales_item::operator=(const sales_item& item1)
 {
	 this->ISBN = item1.ISBN;
	 this->price = item1.price;
	 this->num = item1.num;
	 return *this;
 }
 sales_item& sales_item::operator+(const sales_item& item1)
 {
	 if (this->ISBN != item1.ISBN)
	 {
		 std::cerr << "Error: ISBNs do not match" << std::endl;
		 return *this;
	 }
	 this->num += item1.num;
	 this->price = (this->price * this->num + item1.price * item1.num) / (this->num + item1.num);
	 return *this;
 }
 sales_item& sales_item::operator+=(const sales_item& item1)
 {
	 if (this->ISBN != item1.ISBN)
	 {
		 std::cerr << "Error: ISBNs do not match" << std::endl;
		 return *this;
	 }
	 this->num += item1.num;
	 this->price = (this->price * this->num + item1.price * item1.num) / (this->num + item1.num);
	 return *this;
 }