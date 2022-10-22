
#ifndef Pilha_H
#define Pilha_H

#include <iostream>

template <class T>
class Pilha{
	private:
		T* elementos; //ponteiro para os elementos armazenados na pilha
		int tamanho; //qtdade atual de elementos
		int capacidade; //qtdade max de elementos
	public:
		Pilha(int n_capacidade = 20);
		~Pilha();
		bool empty();
		bool full();
		int size();
		int push(T novo);
		int pop();
		T& top();
};

//Construtor
template<class T>
Pilha<T>::Pilha(int n_capacidade)
{
	tamanho=0;
	capacidade=n_capacidade;
	elementos = new T[n_capacidade];
}

template<class T>
Pilha<T>::~Pilha()
{
	std::cout<<"Entrei no destrutor"<<std::endl;
	delete[] elementos;
}

template<class T>
bool Pilha<T>::empty()
{
	/*
	if (tamanho==0)
		return true;
	else
		return false;
		*/
	return tamanho==0;
}

template<class T>
bool Pilha<T>::full()
{
	/*
	if (tamanho==capacidade)
		return true;
	else
		return false;
	*/
	return tamanho==capacidade;
}

template<class T>
int Pilha<T>::size()
{
	return tamanho;
}

template<class T>
int Pilha<T>::push(T novo)
{
	if (full())
		return 0;

	elementos[tamanho] = novo;
	tamanho++;

	return 1;
}

template<class T>
int Pilha<T>::pop()
{
	if(empty())
		return 0;

	tamanho--;
	return 1;
}

template<class T>
T& Pilha<T>::top()
{

	if (empty())
	{
		std::cout<<"Erro: A pilha está vazia"<<std::endl;
		exit(EXIT_FAILURE);	
	}

	return elementos[tamanho-1];
}

#endif
