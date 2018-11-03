#include <iostream>

using namespace std;

template <class T>
class Stack{
public:
    typedef struct Node {
        T item;
        Node *next;
        Node(T val)
        {
            item=val;
            next=NULL;
        }
        Node()
        {
            next=NULL;
        }
    } Node;

    Stack()
    {
        topPtr=NULL;
    }
    void push(T x)
    {
        Node *n = new Node(x);
        n->next=topPtr;
        topPtr=n;

    }
    void pop()
    {
        Node *n = topPtr;
        topPtr=topPtr->next;
        delete n;
    }
    void print()
    {
        Node *n = topPtr;
        while(n!=NULL)
        {
            cout << n->item <<endl;
            n=n->next;
        }
    }

private:
    Node *topPtr;
};

int main()
{
    Stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.print();
    return 0;
}
