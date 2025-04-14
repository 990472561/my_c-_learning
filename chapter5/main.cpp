#include"..\chapter0\head.h"
#include"chapt6.h"

int fact(int i) {
	if (i <= 0)
	{
		return 0;
	}
	int result = 1;
	while (i > 0)
	{
		result *= i;
		i--;
	}
	return result;
}

int abs(int i) {
	if (i < 0)
	{
		return -i;
	}
	return i;
}

int test() {
	static int i = 0;
	
	return i++;
}

void test1(int*a,int*b) {
	int i = *a;
	*a = *b;
	*b = i;
}
int main()
{
	/*
	//6.3
	std::cout << fact(9) << std::endl;
	//6.4
	int num;
	std::cin >> num;
	std::cout << fact(num) << std::endl;
	//6.5
	std::cout << abs(-9) << std::endl;
	
	//局部静态变量,它的值不变但不可直接访问
	for (int j = 0;j < 10;j++)
	{
		std::cout << test() << std::endl;
	}
	*/
	//6.8  见chapt6.h
	//6.10
	int m = 10, n = 6;
	test1(&m, &n);
	std::cout << m<<" "<<n << std::endl;


}