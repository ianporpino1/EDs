#include <iostream>


#include "vetor.h"

int main()
{
    Vetor<int> vet1(5);
    vet1.inserir(1,1);
    vet1.inserir(2,2);
    vet1.inserir(3,3);
    vet1.inserir(4,4);
    vet1.inserir(5,5);
    std::cout<<vet1.acessar(1)<<std::endl;
    std::cout<<vet1.acessar(2)<<std::endl;
    std::cout<<vet1.acessar(3)<<std::endl;
    std::cout<<vet1.acessar(4)<<std::endl;
    std::cout<<vet1.acessar(5)<<std::endl;
    vet1.remover(5);
    std::cout<<vet1.acessar(5)<<std::endl;
    return 0;
}