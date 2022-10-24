#ifndef Lista_Ligada_H
#define Lista_Ligada_H

#include <iostream>
#include "no.h"

template <class T>
class Lista_Ligada{
    no<T> *head;
    public:
        Lista_Ligada();
        void inserir(T);
        int tamanho();
        void remover(int pos);  
        void printList(); 
        
};


template <class T>
Lista_Ligada<T>::Lista_Ligada()
{   
    head=NULL;
}


template <class T>
void Lista_Ligada<T>::inserir(T dado)
{
    no<T> *newNo= new no<T>(dado);

    if(head==NULL)
    {
        head=newNo;
        return;
    }

    no<T> *temp= head;
    while(temp->prox != NULL)
    {
        temp=temp->prox;
    }

    temp->prox=newNo;

}


template <class T>
int Lista_Ligada<T>::tamanho()
{
    no<T> *temp1=head;
    int tamanho=0;
    if(head==NULL)
    {
       std::cout<<"Erro: Lista vazia"<<std::endl;
       
    }

    while(temp1!=NULL)
    {
        temp1=temp1->prox;
        tamanho++;
    }

    return tamanho;
}




template <class T>
void Lista_Ligada<T>::remover(int pos)
{
    no<T> *temp1=head, *temp2=NULL;
    int tam=tamanho();

    if(tam<pos)
    {
        std::cout<<"Erro: Posicao Invalida"<<std::endl;
        
    }

    if(pos==1)
    {
        head=head->prox;
        delete temp1;
        return;
    }

    while(pos-- > 1)
    {
        temp2=temp1;
        temp1=temp1->prox;
    }

    temp2->prox=temp1->prox;
    delete temp1;
}

template <class T>
void Lista_Ligada<T>::printList()
{
    no<T>* temp = head;
  
    
    if (head == NULL) {
        std::cout << "List empty" << std::endl;
        return;
    }
  
    
    while (temp != NULL) {
        std::cout << temp->dado << " ";
        temp = temp->prox;
    }
}


#endif
