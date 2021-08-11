#include <iostream>

int main () {
	float temperaturaF;
	
	std::cout << "Digite a temperatura em Fahreinheit: ";
	std::cin >> temperaturaF;
	
	float temperaturaC = ((temperaturaF - 32) * 5) / 9;
	float temperaturaK = (temperaturaC + 273.15);
	std::cout << temperaturaK << " Graus Kelvin.";
	
}
