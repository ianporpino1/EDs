#include <iostream>


#include "Pilha.h"

int main()
{
	
	Pilha<int> pilha;

	pilha.push(1);
	pilha.push(7);
	pilha.push(-15);

	std::cout<<pilha.top()<<std::endl;
	std::cout<<"Tamanho: "<<pilha.size()<<std::endl;
	pilha.pop();

	std::cout<<pilha.top()<<std::endl;
	std::cout<<"Tamanho: "<<pilha.size()<<std::endl;

	//*****************************
	Pilha<std::string> pilha2;

	pilha2.push("IMD");
	pilha2.push("LP1");
	pilha2.push("Corinthians:(");

	std::cout<<pilha2.top()<<std::endl;
	std::cout<<"Tamanho: "<<pilha2.size()<<std::endl;
	pilha2.pop();

	std::cout<<pilha2.top()<<std::endl;
	std::cout<<"Tamanho: "<<pilha2.size()<<std::endl;

	return 0;
}