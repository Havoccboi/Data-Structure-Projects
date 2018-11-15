#include <iostream>
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType<int> L1,L2,res;
    int n1,n2;
    cin >> n1 >> n2;
    L1.InsertItem(11);L1.InsertItem(6);L1.InsertItem(3);L1.InsertItem(2);L1.InsertItem(1);
    L1.ResetList();
    L2.InsertItem(10);L1.InsertItem(5);L1.InsertItem(4);
    L2.ResetList();

    res.ResetList();
    int temp1,temp2;
    L1.GetNextItem(temp1);
    L2.GetNextItem(temp2);
    for(int i=0;i<n1+n2-2;i++)
    {
        if(temp1<temp2)
        while(!L1.LengthIs()!=0)
        {
            res.InsertItem(temp1);
            L1.DeleteItem(temp1);
            L1.GetNextItem(temp1);
        }

    }
    for(int i=0;i<res.LengthIs();i++)
    {
        int a;
        res.GetNextItem(a);
        cout << a <<endl;
    }
}
