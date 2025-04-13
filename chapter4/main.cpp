#include"..\chapter0\head.h"
#include"..\chapter0\xiancheng.h"
#include<algorithm>

std::mutex mtx;
std::condition_variable cv;
bool isfirst = true;
int count = 0;


void door_open(int id)
{
	std::unique_lock<std::mutex> lock(mtx);//lock��һ������������mutex�����������mtx��ӵ�������̲߳ſ�������
	while (count < 100)
	{
		cv.wait(lock, [id] {return isfirst == id;});//�ȴ��������������ᱻ�ͷţ�ֱ�����������Ż����ִ��

		std::cout << " �߳�" << id << ":" << count << std::endl;
		count++;
		isfirst = !isfirst;
		cv.notify_all();//֪ͨ���еȴ����߳�
	}
}

struct score_of_game {
	std::string nation;
	int gold;
	int silver;
	int bronze;
	score_of_game() : nation(""), gold(0), silver(0), bronze(0) {}//Ĭ�Ϲ��캯��
	score_of_game(const std::string it,int a,int b,int c) : nation(it), gold(a), silver(b), bronze(c) {}//���캯��
} score;
int main()
{
	/*
	//���ݴ�С
	long a = 123;
	int b = 1;
	
	
	unsigned int  b2 = -1;
	long long int  a2 = 3;
	short int c = 2;
	double d = 3.5;
	char e = 'a';
	std::cout << sizeof(a) << std::endl; // 0
	std::cout << sizeof(b) << std::endl; // 0
	std::cout << sizeof(b2) << std::endl; // 0	
	std::cout << sizeof(a2) << std::endl; // 0
	std::cout << sizeof(c) << std::endl; // 0
	std::cout << sizeof(d) << std::endl; // 0
	std::cout << sizeof(e) << std::endl; // 0
	std::cout << "hello world!" << std::endl;
	
	//˫�߳�ʾ�����̳߳���ѧϰ
	std::thread t1(door_open,1);
	std::thread t2(door_open,0);
	t1.join();
	t2.join();
	return 0;
	
	//5.4
	std::string str1{ "asjfgh" };
	std::string::iterator it = str1.begin();
	while ( it != str1.end())//it �����Ѿ���ʼ��
	{
		std::cout << *it << std::endl;
		it++;
	}
	
	std::string str1{ "hello,world!" };
	while (bool it = str1.find("ello"))//�����ڳ�ʼ���ᵼ����ѭ����ʹ�������it=falseʧЧ
	{
		std::cout << it << std::endl;
		std::cout << str1.find("hello");
		it = false;
	}
	//auto it = str1.find("hello");// find����λ��
	
	//ʵ��һ���Զ���Ƚ���
	score_of_game a{ "China",52,30,18 }, b{"America",52,30,17};
	std::vector<score_of_game> v;
	v.push_back(a);
	v.push_back(b);
	std::sort(v.begin(), v.end(), [](const score_of_game& a, const score_of_game& b) {
		if (a.gold != b.gold) return a.gold > b.gold;
		if (a.silver != b.silver) return a.silver > b.silver;
		if(a.bronze!=b.bronze) 
		return a.bronze > b.bronze;
		return a.nation < b.nation;
		});
	auto compare =[](const score_of_game& a, const score_of_game& b){
		if (a.gold != b.gold) return a.gold > b.gold;
		if (a.silver != b.silver) return a.silver > b.silver;
		if (a.bronze != b.bronze)
			return a.bronze > b.bronze;
		return a.nation < b.nation;
	};
	std::sort(v.begin(), v.end(), compare);//sort�����ĵ�����������һ������ָ�룬ָ��ȽϺ���,�����ֶ�����
	
	//5.14
	std::string str,str1,mstr;
	int cur = 0, max = 0;
	while (std::cin >> str) //�����ַ�����ֱ������ctrl+z
	{
		if (str == str1)
		{
			cur++;
		}
		else
		{
			if (cur > max)
			{
				max = cur;
				mstr = str1;
			}

			cur = 1;
			str1 = str;
		}
	}
	std::cout << "����ظ�����Ϊ��" << max << std::endl;
	std::cout << "����ظ����ַ���Ϊ��" << mstr << std::endl;
	*/
	
	
	
	return 0;
}