#include <iostream>
#include "QueType.cpp"
using namespace std;

template <class T>
void print(QueType<T> q)
{
    while(!q.isEmpty())
    {
        T x;
        q.Dequeue(x);
        cout << x << " ";
    }
    cout <<endl;
}
int main()
{
    cout << "Hello world!" << endl;
    QueType<int> q(5);
    if(q.isEmpty())
        cout << "Queue is Empty\n";
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    if(!q.isEmpty())
        cout << "Queue is not Empty\n";
    if(!q.isFull())
        cout << "Queue is not Full\n";
    q.Enqueue(6);
    print(q);
    if(q.isFull())
        cout << "Queue is Full\n";
    //q.Enqueue(8);
    int x;
    q.Dequeue(x);
    q.Dequeue(x);
    print(q);
    q.Dequeue(x);
    q.Dequeue(x);
    q.Dequeue(x);
    if(!q.isEmpty())
        cout << "Queue is Empty\n";
    //q.Dequeue(x);
    cout << "Enter an integer n for binary printing.\n";
    int n;
    cin >> n;
    QueType<string> qs;
    qs.Enqueue("1");
    for(int i=0;i<n;i++)
    {
        string ss="";
        qs.Dequeue(ss);
        cout << ss <<endl;
        qs.Enqueue(ss+"0");
        qs.Enqueue(ss+"1");
    }
}
