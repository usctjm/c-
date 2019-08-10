#include <iostream>
#include <string>

int main() {
	std::string str = "";
	char c;
	int num;
	std::cin.get(c);
	// std::cout << str << std::endl;
	while (getline(std::cin, c)) {
	// while (std::cin.get(c)) {
		std::cout << num << std::endl;
	}
	std::cout << "en\n";
	return 0;
}
