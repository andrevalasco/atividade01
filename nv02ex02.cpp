#include <iostream>

int main () {
	int temperaturaC;
	
	std::cout << "Digite a temperatura em Celsius: ";
	std::cin >> temperaturaC;
	
	int temperaturaF = (9 * temperaturaC + 160) / 5;
	std::cout << temperaturaF << " Graus Fahrenheit.";
}
