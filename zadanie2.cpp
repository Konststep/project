#include <iostream>

int main()
{
	std::string slov;
	std::cout << "Vvedi slovo: " << std::endl;
	std::getline(std::cin, slov);
	std::cout << "Vvedennoe slovo: " << std::endl;
	std::cout << slov << std::endl;
}
