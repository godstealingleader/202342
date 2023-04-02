#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	cout << "enter your age:";
	int age = 0;
	cin >> age;
	cout << "your age in month is :" << age * 12;
	return 0;
}