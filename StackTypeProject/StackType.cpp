#include "StackType.h"

#define MAX_SIZE 10

template <class T>
StackType<T>::StackType()
{
    tos=-1;
    items= new T[MAX_SIZE];
}

template <class T>
bool StackType<T>::isfull()
{
    return(tos+1>=MAX_SIZE);
}

template <class T>
bool StackType<T>::isempty()
{
    return(tos==-1);
}

template <class T>
void StackType<T>::push(T x)
{
    if(!isfull())
        items[++tos]=x;
}

template <class T>
T StackType<T>::top()
{
    if(!isempty())
        return items[tos];
}

template <class T>
void StackType<T>::makeEmpty()
{
    tos=-1;
}
template <class T>
void StackType<T>::pop()
{
    if(!isempty())
        tos--;
}
