#include<iostream>

int main() {
	int numero1;
	int numero2;
	int soma;
	
	std::cout <<"Digite um numero: ";
	std::cin >> numero1;
	
	std::cout <<"Digite outro numero: ";
	std::cin >> numero2;
	
  	soma = numero1 + numero2;
  	
  	
  	if (soma > 10) {
  		std::cout << soma;
	  }
	
	
	


	
	return 0;
}