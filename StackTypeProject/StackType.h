#ifndef STACKTYPE_H
#define STACKTYPE_H

template <class T>
class StackType
{
    public:
        StackType();
        void push(T);
        T top();
        void pop();
        void makeEmpty();
        bool isempty();
        bool isfull();
    private:
        int tos;
        T *items;
};

#endif // STACKTYPE_H
