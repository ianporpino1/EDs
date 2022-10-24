#include <iostream>
#include "lista_ligada.h"

int main()
{
    Lista_Ligada<int> list;
  
    // Inserting nodes
    list.inserir(1);
    list.inserir(2);
    list.inserir(3);
    list.inserir(4);
  
    std::cout << "Elements of the list are: ";
  
    // Print the list
    list.printList();
    int tam=0;
    tam=list.tamanho();
    std::cout << std::endl;

    std::cout <<"Tamanho da lista: "<<tam << std::endl;
  
    // Delete node at position 2.
    list.remover(2);
  
    std::cout << "Elements of the list are: ";
    list.printList();
    std::cout << std::endl;
    return 0;
}