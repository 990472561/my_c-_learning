#include"../chapter0/head.h"

int main()
{
	/*
//  �ؼ���decltype

int a = 10;
int* b = &a;
decltype(a) c =10; // c��int����
decltype(*b) d =a; // d��int&����
decltype(&b) e =nullptr; // e��int**����

//4.1
std::cout << 5 + 10 * 20 / 2 << std::endl;	

//4.2
	std::vector<int> vec{1,2,3,4,5,6};
	std::cout << *vec.begin() << " " << *(vec.begin()) << std::endl;//vec.begin()���ص���һ���������������ú�õ����ǵ�����ָ���Ԫ��
	std::cout << *(vec.begin() + 1) << std::endl; //vec.begin() + 1���ص���һ���������������ú�õ����ǵ�����ָ���Ԫ��
	std::vector<std::vector<std::string>> vec2{ {"nihao","China"},{"hello","world"} };
	auto it1 = *vec2.begin();//vec2.begin()���ص���һ���������������ú�õ����ǵ�����ָ���Ԫ��
	auto it2 = (*vec2.begin()).begin();//vec2.begin()���ص���һ���������������ú�õ����ǵ�����ָ���Ԫ�أ�it2��һ��������
	
	//4.6
	int a;
	std::cin >> a;
	if (a % 2 == 1)
	{
		std::cout << "����" << std::endl;

	}
	else
	{
		std::cout << "ż��" << std::endl;
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
	std::cout << (i != j) << std::endl; //!=���ȼ�С���ȼ���!=�����Ϊtrue
	std::cout << (i != j < k) << std::endl; //!=���ȼ�С���ȼ���<,���Ϊtrue
	
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
		std::cout << "��42����i" << std::endl;//���ܰ�i����42
	}
	
	//4.15
	int i = 0;
	double dval;int ival;int* pval=&i;//pval�����ʼ��
	dval = ival = *pval = 3.5;
	std::cout << dval << " " << ival << " " << *pval << std::endl;
	
	//4.17
	for (int i = 0;i < 5;i)
	{
		std::cout << i++ << " ";//i++�Ǻ��������������i��ֵ��Ȼ��i��1
	}
	std::cout << std::endl;
	for (int i = 0;i < 5;i)
	{
		std::cout << ++i << " ";//++i��ǰ����������i��1��Ȼ�����i��ֵ
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

	//����ת��ǿ��ת��
	//static_cast
int a = 3;
int b = 4;
double c = static_cast<double>(a) / b; //ǿ��ת��Ϊdouble����
std::cout << c << std::endl; //0.75

//const_cast
const int a = 3;
int* b = const_cast<int*>(&a); //ȥ��const����
*b = 4; //�޸�ֵ
std::cout << a << " " << *b << " " << a - 4 << std::endl; //�������a��ֵ��3����Ϊa�ڱ���ʱ�ͱ��Ż��ˣ�*b��ֵ��4����Ϊȥ����const����

//
char str1[10] = "ajsfsgdif";
std::string str2(str1);
*/
return 0;
}
