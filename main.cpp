#include <iostream>
void time(int minut, int hours)
{
	std::cout << "Time: " << hours << ':' << minut;
}
int main()
{
	int minut;
	int hours;
	std::cout << "Enter the number of hours: ";
	std::cin >> hours;
	std::cout << std::endl;
	std::cout << "Enter number of minutes: ";
	std::cin >> minut;
	std::cout << std::endl;
	time(minut, hours);
	std::cout << std::endl;
	system("pause");
	return 0;
}