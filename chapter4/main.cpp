#include"..\chapter0\head.h"
#include"..\chapter0\xiancheng.h"
#include<algorithm>

std::mutex mtx;
std::condition_variable cv;
bool isfirst = true;
int count = 0;


void door_open(int id)
{
	std::unique_lock<std::mutex> lock(mtx);//lock是一个锁，类型是mutex，具体对象是mtx，拥有锁的线程才可以运行
	while (count < 100)
	{
		cv.wait(lock, [id] {return isfirst == id;});//等待条件变量，锁会被释放，直到条件成立才会继续执行

		std::cout << " 线程" << id << ":" << count << std::endl;
		count++;
		isfirst = !isfirst;
		cv.notify_all();//通知所有等待的线程
	}
}

struct score_of_game {
	std::string nation;
	int gold;
	int silver;
	int bronze;
	score_of_game() : nation(""), gold(0), silver(0), bronze(0) {}//默认构造函数
	score_of_game(const std::string it,int a,int b,int c) : nation(it), gold(a), silver(b), bronze(c) {}//构造函数
} score;
int main()
{
	/*
	//数据大小
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
	
	//双线程示例，线程初步学习
	std::thread t1(door_open,1);
	std::thread t2(door_open,0);
	t1.join();
	t2.join();
	return 0;
	
	//5.4
	std::string str1{ "asjfgh" };
	std::string::iterator it = str1.begin();
	while ( it != str1.end())//it 必须已经初始化
	{
		std::cout << *it << std::endl;
		it++;
	}
	
	std::string str1{ "hello,world!" };
	while (bool it = str1.find("ello"))//括号内初始化会导致死循环，使得下面的it=false失效
	{
		std::cout << it << std::endl;
		std::cout << str1.find("hello");
		it = false;
	}
	//auto it = str1.find("hello");// find返回位置
	
	//实现一个自定义比较器
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
	std::sort(v.begin(), v.end(), compare);//sort函数的第三个参数是一个函数指针，指向比较函数,不用手动传参
	
	//5.14
	std::string str,str1,mstr;
	int cur = 0, max = 0;
	while (std::cin >> str) //输入字符串，直到遇到ctrl+z
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
	std::cout << "最大重复次数为：" << max << std::endl;
	std::cout << "最大重复的字符串为：" << mstr << std::endl;
	*/
	
	
	
	return 0;
}