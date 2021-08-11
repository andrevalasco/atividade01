#include<iostream>

int main() {
	
	int numero;
	
	std::cout <<"Digite um numero: ";
	std::cin >> numero;
	
if (numero > 0) {
		std::cout << "POSITIVO";	
	} else if (numero < 0){
		std::cout << "NEGATIVO";
		}else if (numero == 0){
			std::cout <<"NULO";
		}
}