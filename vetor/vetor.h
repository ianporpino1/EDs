#ifndef Vetor_H
#define Vetor_H

#include <iostream>

template <class T>
class Vetor{
    private:
        T* elementos;
        int tamanho;
        int capacidade;
    public:
        Vetor(int n_capacidade=20);
        ~Vetor();
        void inserir(T novo, int posicao);
        void remover(int posicao);
        T& acessar(int posicao);
};


template<class T>
Vetor<T>::Vetor(int n_capacidade)
{
    tamanho=0;
    capacidade=n_capacidade;
    elementos=new T[n_capacidade];
}


template<class T>
Vetor<T>::~Vetor()
{
    std::cout<<"Vetor Destruido"<<std::endl;
	delete[] elementos;
}


template<class T>
void Vetor<T>::inserir(T novo, int posicao)
{
    
    if(tamanho==capacidade)
    {
        std::cout<<"Erro: O Vetor esta cheio"<<std::endl;
		exit(EXIT_FAILURE);	
    }


    for(int i=tamanho-1;i>=posicao-1;i--)
    {
       elementos[i+1]=elementos[i];
    }

    elementos[posicao-1]= novo;

    tamanho++;

}


template<class T>
void Vetor<T>::remover(int posicao)
{
    if(tamanho==0)
    {
        std::cout<<"Erro: O Vetor esta vazio"<<std::endl;
		exit(EXIT_FAILURE);	
    }

    for(int i=posicao;i<=tamanho-2;i++)
    {
       elementos[i]=elementos[i+1];
    }

    tamanho--;
}


template<class T>
T& Vetor<T>::acessar(int posicao)
{
    if(posicao>tamanho)
    {
        std::cout<<"Erro: Posicao Invalida"<<std::endl;
		exit(EXIT_FAILURE);	
    }
    return elementos[posicao-1];
}


#endif