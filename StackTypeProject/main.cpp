#include <iostream>
#include "StackType.cpp"
using namespace std;

template <class T>
void print(StackType<T> &s)
{
    while(!s.isempty())
    {
        cout << s.top();
        s.pop();
    }
    cout <<endl;
}
int main()
{
    StackType<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(3);
    s.push(4);
    s.push(3);
    s.push(4);
    s.push(3);
    s.push(4);
    s.push(3);
    s.push(4);

    print(s);
    return 0;
}
