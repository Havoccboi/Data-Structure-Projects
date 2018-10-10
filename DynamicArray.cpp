#include "dynarr.h"
#include <iostream>

using namespace std;
template <class T>
dynarr<T>::dynarr()
{
    data=NULL;
    size=0;
}

template <class T>
dynarr<T>::dynarr(int Size)
{
    data = new T[Size];
    size=Size;
}

template <class T>
void dynarr<T>::setvalue(int index,T value)
{
    data[index]=value;
}
template <class T>
T dynarr<T>::getvalue(int index)
{
    return data[index];
}

template <class T>
dynarr<T>::~dynarr()
{
    delete [] data;
}
template <class T>
dynarr<T>::print()
{
    for(int i=0;i<size;i++)
        cout << data[i]<<"    ";
}
