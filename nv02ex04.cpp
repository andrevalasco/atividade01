#include <iostream>

int main () {
	float temperaturaC;
	
	std::cout << "Digite a temperatura em Celsius: ";
	std::cin >> temperaturaC;
	
	float temperaturaK = (temperaturaC + 273.15);
	std::cout << temperaturaK << " Graus Kelvin.";
}
