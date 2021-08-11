#include <iostream>

int main () {
	float tempoViagem;
	float velocidade;
		
	std::cout << "Digite o tempo da viagem: ";
	std::cin >> tempoViagem;
	
	std::cout << "Digite a velocidade: ";
	std::cin >> velocidade;
	
	float distancia = tempoViagem * velocidade;
	float litrosUsados = distancia / 12;
	
	std::cout << "Tempo de Viagem: " << tempoViagem <<"Horas\n";
	std::cout << "Velocidade: " << velocidade << "Km/H\n";
	std::cout << "Distancia: " << distancia << "Km \n";
	std::cout << "Litros usados: " << litrosUsados << "Km/L";
	 
	
	
}
