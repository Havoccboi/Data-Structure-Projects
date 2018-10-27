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
    StackType<int> open;
    string s;
    cin >> s;
    bool flag=1;
    //bracket balanced matching:
    for(int i=0;i<s.size() && flag;i++)
    {
        if(s[i]=='(')
          open.push(i);
        if(s[i]==')')
        {
          if(open.isempty())
            flag=0;
          open.pop();
        }
    }
    if(open.isempty())
        flag=1;
    cout << (flag?"Balanced\n":"Not Balanced\n");
    return 0;
}
