#include"../chapter0/head.h"

//本章节为string和vector相关内容 2025年4月7日

int main()
{
	/*
	//string 构造
	std::string str1;
	std::string str2{"这是初始化列表构造"};
	std::string str3(10, 'a'); // 10个'a'
	std::string str4 = "这是赋值构造";
	str3 += "helloworld";
	std::string str5 = str4; // 赋值构造
	std::string str7 = str3.substr(12,3);//截取字符串构成新字符串
	std::string str6 = str4.substr(0, 3); // 截取前3个字符,由于str4是汉字utf-8编码，所以str6实际有异常，不展开讨论了
	std::cout << str7 << std::endl;
	//string 常用函数
	std::cout << str1.empty() << std::endl; // 判断是否为空
	std::cout << str1.size() << std::endl; // 返回字符串长度
	std::cout << str1.length() << std::endl; // 返回字符串长度
	auto size = str1.size(); // 返回字符串长度,size是一个unsigned int类型
	getline(std::cin, str1); // 从标准输入流中读取一行字符串
	str1.clear(); // 清空字符串
	str2.clear(); // 清空字符串
	str2 = str1 + "helloworld"; // 连接字符串,字符串的连接是通过+运算符实现的
	char a = str1[0]; // 访问字符串的第一个字符,字符串是一个字符数组，所以可以通过下标访问
	for (auto& it : str1)
	{
		it = isupper(it) ? tolower(it) : it; // is开头的函数是判断函数, to开头的函数是转换函数，类似的有判断数字、判断字母、判断空格等函数
	}
	for (auto it = str3.begin();it != str3.end();++it)
	{
		std::cout << *it << std::endl; // 迭代器访问字符串,迭代器是一个指针，可以通过*运算符访问指向的元素
	}
	//(*it).size()=it->size(); // 迭代器访问字符串的长度,解引用迭代器得到一个字符串对象,然后调用size()函数等价于->符号
	//std::cout << str3.find("helloworld") << std::endl; // 查找字符串,返回第一个匹配的下标
	//vector
	std::vector<int> vec1; // 默认构造函数
	std::vector<int> vec2(10); // 10个默认值0
	std::vector<int> vec3(10, 1); // 10个1
	std::vector<int> vec4{ 1,2,3,4,5 }; // 初始化列表构造
	std::vector<int> vec5(vec4); // 赋值构造
	std::vector<int> vec6(vec4.begin(), vec4.end()); // 迭代器构造

	std::vector<int> vec7{ 1,2,3,4,5,6,7,8,9,10 }; // 初始化列表构造
	std::vector<int> vec8(vec7.begin(), vec7.end()); // 迭代器构造
	//vector 常用函数
	std::cout << vec1.empty() << std::endl; // 判断是否为空
	std::cout << vec1.size() << std::endl; // 返回vector长度
	std::cout << vec1.capacity() << std::endl; // 返回vector容量
	std::cout << vec1.max_size() << std::endl; // 返回vector最大容量




	// lianxi 3.6
	std::string str = "helloworld";
	for (int i = 0;i < str.size();i++)
	{
		str[i] = 'X';
	}

	for (auto& it:str)
	{
		it = 'x';
	}
	// 迭代器访问字符串
	for (auto it = str.begin();it != str.end();++it)
	{
		*it = 'x';
	}

	//3.10

	std::string str1 = "hello,world!!",result;

	for (auto& it : str1)
	{
		if (!ispunct(it))
		{
			result += it;
		}
	}

	for (int i = 0;i < str1.size();i++)
	{
		if (!ispunct(str1[i]))
		{
			result += str1[i];
		}
	}
	for (auto it = str1.begin();it != str1.end();it++)
	{
		if (!ispunct(*it))
		{
			result += *it;
		}
	}
	std::cout << result << std::endl;

	//3.17
	std::string str1{};
	std::vector<std::string> vec1;
	while (std::cin >> str1)
	{

		vec1.push_back(str1);//crtl+z结束输入
	}
	for (auto& it : vec1)
	{
		std::cout << it << std::endl;
	}

	//3.19
	std::vector<int> vec1(10, 42), vec2{ 42,42,42,42,42,42,42,42,42,42 }, vec3(vec1), vec4{vec1.begin(),vec1.end()};
	std::cout << vec1.size() << std::endl;
	//vec1 best
	
	//3.20
	std::vector<int> vec1;
	int a;
	while (std::cin >> a)
	{
		vec1.push_back(a);

	}
	for (auto it = vec1.begin();it != vec1.end() - 1;it++)
	{
		std::cout << *it + *(it + 1) << std::endl;
	}//vec1.begin()可以当作指针使用
	int l = 0, r = vec1.size() - 1;
	while (l < r)
	{
		std::cout << vec1[l] + vec1[r] << std::endl;
		l++;
		r--;
	}
	*/
}