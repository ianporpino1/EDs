#ifndef no_H
#define no_H

#include <iostream>

template <class T>
class no{
    private:
        T dado;
        no<T>*  prox;
    public:
        no();
        no(T dado);

    template<class U> friend class Lista_Ligada;

};


template <class T>
no<T>::no()
{
    prox=NULL;
}

template <class T>
no<T>::no(T dado)
{
    this->dado = dado;
    this->prox = NULL;
}

#endif