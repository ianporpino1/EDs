#include <iostream>


#include "vetor_circular.h"

int main()
{
    Vetor_Circular<int> vet1(5);
    vet1.inserir_inicio(5);
    vet1.inserir_final(1);

    std::cout<<vet1.acessar(1)<<std::endl;
    std::cout<<vet1.acessar(5)<<std::endl;

    vet1.remover_inicio();
    vet1.remover_final();
    
    std::cout<<vet1.acessar(1)<<std::endl;
    std::cout<<vet1.acessar(5)<<std::endl;

    
    return 0;
}