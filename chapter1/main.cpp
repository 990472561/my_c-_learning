#include"../chapter0/head.h"

int main()
{
	// ��������ʡ�ԣ�ָ������ã�
	int a = 10;
	int* p1 = &a;
	int* p2 = p1;
	int& r1 = a;
	int& r2 = *p1;// ���ú�ָ����������������Ǳ�����ָ���ǵ�ַ
	int** p3 = &p1;// ָ��ָ���ָ��
	std::cout << "a = " << a << std::endl;
	std::cout << "p1 = " << *p1 << std::endl;
	std::cout << "p2 = " << *p2 << std::endl;
	std::cout << "r1 = " << r1 << std::endl;
	std::cout << "r2 = " << r2 << std::endl;
	std::cout << "p3 = " << **p3 << std::endl;
}