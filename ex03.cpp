#include<iostream>

int main() {
	
	int numero;
	
	std::cout <<"Digite um numero: ";
	std::cin >> numero;
	
if (numero % 2 == 0) {
		std::cout << "PAR";	
	} else {
		std::cout << "IMPAR";
		}
}