#include <iostream>

int main () {
	int temperaturaF;
	
	std::cout << "Digite a temperatura em Fahrenheit: ";
	std::cin >> temperaturaF;
	
	int temperaturaC = ((temperaturaF - 32) * 5) / 9;
	std::cout << temperaturaC << " Graus Celsius.";
}
