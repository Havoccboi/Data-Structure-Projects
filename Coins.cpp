#include <iostream>
#include "QueType.cpp"
using namespace std;
//forgot what this does lol
int level[int(1e5)];
int main()
{
    int n,u=0,z,amount;
    cin >> n;
    QueType<int> q,cost,que,coinTypes;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> u;
        q.Enqueue(u);
        coinTypes.Enqueue(u);
    }
    cin >> amount;
    que.Enqueue(0);
    cost.Enqueue(0);
    int t1,t2,t3;
    while(t1!=amount)
    {

        que.Dequeue(t1);
        cost.Dequeue(t3);
        for(int i=0;i<n;i++)
        {
            coinTypes.Dequeue(t2);
            coinTypes.Enqueue(t2);
            que.Enqueue(t1+t2);
            cost.Enqueue(t3+1);
        }
    }
    cost.Dequeue(t1);
    cout << t1 <<endl;
}
