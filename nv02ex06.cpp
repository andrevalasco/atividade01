#include <iostream>

int main () {
	int numero;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if (numero >= 0) {
		std::cout << numero;
	}
	else
		std::cout << numero * -1;
}
