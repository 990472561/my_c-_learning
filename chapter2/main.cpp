#include"../chapter0/head.h"

//���½�Ϊstring��vector������� 2025��4��7��

int main()
{
	/*
	//string ����
	std::string str1;
	std::string str2{"���ǳ�ʼ���б���"};
	std::string str3(10, 'a'); // 10��'a'
	std::string str4 = "���Ǹ�ֵ����";
	str3 += "helloworld";
	std::string str5 = str4; // ��ֵ����
	std::string str7 = str3.substr(12,3);//��ȡ�ַ����������ַ���
	std::string str6 = str4.substr(0, 3); // ��ȡǰ3���ַ�,����str4�Ǻ���utf-8���룬����str6ʵ�����쳣����չ��������
	std::cout << str7 << std::endl;
	//string ���ú���
	std::cout << str1.empty() << std::endl; // �ж��Ƿ�Ϊ��
	std::cout << str1.size() << std::endl; // �����ַ�������
	std::cout << str1.length() << std::endl; // �����ַ�������
	auto size = str1.size(); // �����ַ�������,size��һ��unsigned int����
	getline(std::cin, str1); // �ӱ�׼�������ж�ȡһ���ַ���
	str1.clear(); // ����ַ���
	str2.clear(); // ����ַ���
	str2 = str1 + "helloworld"; // �����ַ���,�ַ�����������ͨ��+�����ʵ�ֵ�
	char a = str1[0]; // �����ַ����ĵ�һ���ַ�,�ַ�����һ���ַ����飬���Կ���ͨ���±����
	for (auto& it : str1)
	{
		it = isupper(it) ? tolower(it) : it; // is��ͷ�ĺ������жϺ���, to��ͷ�ĺ�����ת�����������Ƶ����ж����֡��ж���ĸ���жϿո�Ⱥ���
	}
	for (auto it = str3.begin();it != str3.end();++it)
	{
		std::cout << *it << std::endl; // �����������ַ���,��������һ��ָ�룬����ͨ��*���������ָ���Ԫ��
	}
	//(*it).size()=it->size(); // �����������ַ����ĳ���,�����õ������õ�һ���ַ�������,Ȼ�����size()�����ȼ���->����
	//std::cout << str3.find("helloworld") << std::endl; // �����ַ���,���ص�һ��ƥ����±�
	//vector
	std::vector<int> vec1; // Ĭ�Ϲ��캯��
	std::vector<int> vec2(10); // 10��Ĭ��ֵ0
	std::vector<int> vec3(10, 1); // 10��1
	std::vector<int> vec4{ 1,2,3,4,5 }; // ��ʼ���б���
	std::vector<int> vec5(vec4); // ��ֵ����
	std::vector<int> vec6(vec4.begin(), vec4.end()); // ����������

	std::vector<int> vec7{ 1,2,3,4,5,6,7,8,9,10 }; // ��ʼ���б���
	std::vector<int> vec8(vec7.begin(), vec7.end()); // ����������
	//vector ���ú���
	std::cout << vec1.empty() << std::endl; // �ж��Ƿ�Ϊ��
	std::cout << vec1.size() << std::endl; // ����vector����
	std::cout << vec1.capacity() << std::endl; // ����vector����
	std::cout << vec1.max_size() << std::endl; // ����vector�������




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
	// �����������ַ���
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

		vec1.push_back(str1);//crtl+z��������
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
	}//vec1.begin()���Ե���ָ��ʹ��
	int l = 0, r = vec1.size() - 1;
	while (l < r)
	{
		std::cout << vec1[l] + vec1[r] << std::endl;
		l++;
		r--;
	}
	*/
}