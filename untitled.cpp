#include <bits/stdc++.h>

using namespace std;


int found(int *arr,int n, int el)
{
    for(int i=0;i<n;i++)
        if(el==arr[i])
            return 1;
    return 0;
}
int arr[101];

int binsearch(int el, int l, int r, int &level)
{
    if(l>=r)
        return 0;
    int m=(l+r)/2;
    if(arr[m]==el)
        return 1;
    else if(arr[m]>el)
        return binsearch(el,l,m-1,++level);
    else
        return binsearch(el,m+1,r,++level);

}
int main()
{
    srand (time(NULL));
    for(int i=0;i<100;i++)
    {
        arr[i]=rand()%101;
    }

    cout << "ARRAY CONTAINS:\n";
    for(int i=0;i<100;i++)
    {
        cout << i+1 << "\t"<< arr[i] << "\n";
    }
    sort(arr,arr+101);
    int N=10000;
    int f=0;
    srand (time(NULL));
    int level=0;
    long long total=0;
    for(int i=1;i<=N;i++)
    {
        level=0;
        int x=rand()%101;
        if(binsearch(x,0,101,level))
        {
            f++;
            total+=level;
        }
    }
    cout << "number of cases that random number was found: "<< f <<" of "<<N<<endl;
    cout << "Average number of level= \t"<<(double)total/f<<endl;

}
