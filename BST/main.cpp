#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> tree;
    cout << (tree.IsEmpty()?"Tree is empty.\n":"Tree is not empty.\n");
    int item;
    for(int i=0;i<10;i++)
    {
        cin >> item;
        tree.InsertItem(item);
    }
    cout << (tree.IsEmpty()?"Tree is empty.\n":"Tree is not empty.\n");
    cout << tree.LengthIs()<<endl;
    bool f=0;
    item=9;
    tree.RetrieveItem(item,f);
    cout << (f?"Item is found.\n":"Item is not found.\n");

    item=13;
    tree.RetrieveItem(item,f);
    cout << (f?"Item is found.\n":"Item is not found.\n");
    tree.ResetTree(IN_ORDER);

    for(int i=0;i<10;i++)
    {

        tree.GetNextItem(item,IN_ORDER,f);
        cout << item<<" ";
    }
    cout <<endl;
    tree.ResetTree(PRE_ORDER);
    for(int i=0;i<10;i++)
    {

        tree.GetNextItem(item,PRE_ORDER,f);
        cout << item<<" ";
    }
    cout <<endl;
    tree.ResetTree(POST_ORDER);

    for(int i=0;i<10;i++)
    {
        tree.GetNextItem(item,POST_ORDER,f);
        cout << item<<" ";
    }
    cout << endl;


}
