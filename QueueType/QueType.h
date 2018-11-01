#ifndef QUETYPE_H
#define QUETYPE_H

class FullQueue
{};
class EmptyQueue{};

template <class ItemType>
class QueType
{
    public:
        QueType();
        QueType(int);
        void MakeEmpty();
        bool isEmpty();
        bool isFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType &);
    private:
        ItemType *items;
        int fr;
        int rr;
        int maxsize;
};

#endif // QUETYPE_H
