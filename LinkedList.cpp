#include <bits/stdc++.h>

using namespace std;

class Node{
public:
  int val;
  Node *next;
  Node(int value)
  {
    this->val=value;
    this->next=NULL;
  }
};

class List{
  Node *head;
  Node *tail;
public:
  List()
  {
    head->next=NULL;
    tail=head;
  }
  int isEmpty()
  {
    if(tail==head)
      return 1;
    else
      return 0;
  }
  void Insert(int val)
  {
    Node *n = new Node(val);
    tail->next=n;
    tail=tail->next;
  }
  int Search(int val)
  {
    int c=0;
    Node *temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
      c++;
      if(temp->val==val)
        return c;
    }
    return 0;
  }
  void print()
  {
    Node *temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
      cout << temp->val << " ";
    }
  }

};
int main()
{
  List l;
  l.Insert(1);
  l.Insert(5);
  l.Insert(3);
  l.Insert(2);
  l.Insert(9);
  l.Insert(3);
  l.Insert(2);
  l.print();
  int n;
  cin >> n;
  cout << l.Search(n)<<endl;
}
