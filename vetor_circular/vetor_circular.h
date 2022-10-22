#ifndef Vetor_Circular_H
#define Vetor_Circular_H

#include <iostream>

template <class T>
class Vetor_Circular{
    private:
        T* elementos;
        int tamanho;
        int capacidade;
        int bias;
    public:
        Vetor_Circular(int n_elementos=20);
        ~Vetor_Circular();

        void inserir(T novo, int posicao);
        void remover(int posicao);
        T& acessar(int posicao);

        void inserir_inicio(T novo);
        void inserir_final(T novo);

        void remover_inicio();
        void remover_final();
};


template<class T>
Vetor_Circular<T>::Vetor_Circular(int n_capacidade)
{
    tamanho=0;
    capacidade=n_capacidade;
    elementos=new T[n_capacidade];
    bias=0;
}


template<class T>
Vetor_Circular<T>::~Vetor_Circular()
{
    std::cout<<"Vetor Destruido"<<std::endl;
	delete[] elementos;
}


template<class T>
void Vetor_Circular<T>::inserir(T novo, int posicao)
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
void Vetor_Circular<T>::remover(int posicao)
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
T& Vetor_Circular<T>::acessar(int posicao)
{
    if(posicao>capacidade)
    {
        std::cout<<"Erro: Posicao Invalida"<<std::endl;
		exit(EXIT_FAILURE);	
    }
    return elementos[(posicao+bias)/capacidade];
}


template<class T>
void Vetor_Circular<T>::inserir_inicio(T novo)
{
    if(tamanho==capacidade)
    {
        std::cout<<"Erro: O Vetor esta cheio"<<std::endl;
		exit(EXIT_FAILURE);
    }
    
    bias=(bias)%capacidade;
    elementos[bias]=novo;
    tamanho++;
}


template<class T>
void Vetor_Circular<T>::inserir_final(T novo)
{
    if(tamanho==capacidade)
    {
        std::cout<<"Erro: O Vetor esta cheio"<<std::endl;
		exit(EXIT_FAILURE);
    }
    
    elementos[(bias+tamanho)%capacidade]=novo;
    tamanho++;
}


template<class T>
void Vetor_Circular<T>::remover_inicio()
{
    if(tamanho==0)
    {
        std::cout<<"Erro: O Vetor esta vazio"<<std::endl;
		exit(EXIT_FAILURE);	
    }

    tamanho--;
    bias=(bias+1)%capacidade;

}


template<class T>
void Vetor_Circular<T>::remover_final()
{
    if(tamanho==0)
    {
        std::cout<<"Erro: O Vetor esta vazio"<<std::endl;
		exit(EXIT_FAILURE);	
    }
    
    tamanho--;

}


#endif