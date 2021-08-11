#include <iostream>
#include <clocale>

int main() {
	int numero1;
	int numero2;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero1;
	
	std::cout << "Digite outro numero: ";
	std::cin >> numero2;
	
	int soma = numero1+numero2;
	
	if (soma>20) {
		std::cout << soma + 8;
	}
	else {
		std::cout << soma - 5;
	}
	
	
}

