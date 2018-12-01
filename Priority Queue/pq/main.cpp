#include <bits/stdc++.h>
#include "PQType.cpp"
using namespace std;

int main()
{

    int n,k,u;
    cin >> n >> k;
    PQType<int> pq1(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> u;
        pq1.Enqueue(u);
    }
    int res=0;
    for(int i=0;i<k;i++)
    {
        pq1.Dequeue(u);
        res+=u;

        if(u>5)
        {
            double x=u; cout << "adding " << u << "\t";
            x*=0.4;
            int c=ceil(x);
            u=c;
            cout << "in queue: "<< u <<endl;
        }
        else
        {

            double x=u; cout << "adding " << u << "\t";
            x*=0.6;
            int c=ceil(x);
            u=c;
            cout << "in queue: "<< u <<endl;
        }

        pq1.Enqueue(u);
    }
    cout << "result: "<<res<<endl;
}
