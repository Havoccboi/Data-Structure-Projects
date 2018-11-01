#include "QueType.h"

template <class T>
QueType<T>::QueType(int size)
{
    maxsize=size+1;
    items=new T[maxsize];
    fr=rr=maxsize-1;
}
template <class T>
QueType<T>::QueType()
{
    items=new T[501];
    maxsize=501+1;
    fr=rr=maxsize-1;
}
template <class T>
bool QueType<T>::isEmpty()
{
    return rr==fr;
}
template <class T>
bool QueType<T>::isFull()
{
    return ((rr+1)%maxsize==fr);
}

template <class T>
void QueType<T>::Enqueue(T x)
{
    if(!isFull())
    {
        rr=(rr+1)%maxsize;
        items[rr]=x;
    }
    else
        throw FullQueue();
}

template <class T>
void QueType<T>::Dequeue(T &reff)
{
    if(!isEmpty())
    {
        fr=(fr+1)%maxsize;
        reff=items[fr];
    }
    else
        throw EmptyQueue();
}
