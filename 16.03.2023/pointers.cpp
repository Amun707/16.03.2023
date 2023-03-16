#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int x, y;
	system("chcp 1251>nul");
	std::cout << "Введите значение X->\n";
	std::cin >> x;
	std::cout << "Введите значение Y ->\n";
	std::cin >> y;
	int* px = &x;
	int* py = &y;
	int res = (*px + *py) / 2;
	std::cout << "Среднее арифметическое = " << res << "\n";





	return 0;
}