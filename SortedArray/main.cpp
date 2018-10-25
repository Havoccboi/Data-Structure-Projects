#include <iostream>
#include "SortedType.cpp"
using namespace std;

class timeStamp
{
private:
    int ss;
    int mm;
    int hh;
public:
    int getsec()
    {
        return ss;
    }
    int getmin()
    {
        return mm;
    }
    int gethr()
    {
        return hh;
    }
    timeStamp()
    {
        ss=0;
        mm=0;
        hh=0;
    }
    timeStamp(int s, int m, int h)
    {
        ss=s;
        mm=m;
        hh=h;
    }
    bool operator ==(const timeStamp &t)
    {
        return (t.ss == ss && t.mm == mm && t.hh==hh);
    }
    bool operator !=(const timeStamp &t)
    {
        return !(*this==t);
    }
    bool operator <(const timeStamp &t)
    {
        int time=t.ss+t.mm*60+t.hh*60*60;
        int ctime =ss+mm*60+hh*60*60;
        return ctime<time;
    }
    bool operator >(const timeStamp &t)
    {
        return (!(*this<t) && *this!=t);
    }
};
int main()
{
    SortedType<int> arr;
    cout << "Length of list is: " << arr.LengthIs()<<endl;
    arr.InsertItem(5);arr.InsertItem(7);arr.InsertItem(4);arr.InsertItem(2);arr.InsertItem(1);

    arr.ResetList();
    for(int i=0;i<arr.LengthIs();i++)
    {
        int temp;
        arr.GetNextItem(temp);
        cout << temp<< " ";
    }

    cout <<endl;

    cout << "Printing in reverse.\n";
    for(int i=arr.LengthIs()-1;i>=0;i--)
        cout << arr.getitem(i)<< " ";
    cout <<endl;


    int item=6;
    bool found=0;
    arr.ResetList();
    arr.RetrieveItem(item,found);
    cout << (found?"Item is found\n":"Item is not found\n");

    item=5;
    found=0;
    arr.ResetList();
    arr.RetrieveItem(item,found);
    cout << (found?"Item is found\n":"Item is not found\n");

    cout << (arr.IsFull()?"List is full\n":"List is not full\n");
    arr.ResetList();
    item=1;
    found=0;
    arr.RetrieveItem(item,found);
    if(found)
        arr.DeleteItem(item);

    for(int i=0;i<arr.LengthIs();i++)
        cout << arr.getitem(i)<< " ";
    cout <<endl<<endl;
    SortedType<timeStamp> sts;
    sts.InsertItem(*(new timeStamp(15, 34, 23)));
    sts.InsertItem(*(new timeStamp(13, 13, 02)));
    sts.InsertItem(*(new timeStamp(43, 45, 12)));
    sts.InsertItem(*(new timeStamp(25, 36, 17)));
    sts.InsertItem(*(new timeStamp(52, 02, 20)));

    sts.ResetList();
    sts.DeleteItem(*(new timeStamp(25,36,17)));
    sts.ResetList();
    for(int i=0;i<sts.LengthIs();i++)
    {
        timeStamp t;
        sts.GetNextItem(t);
        cout << t.gethr()<<":"<<t.getmin()<<":"<<t.getsec()<<endl;

    }

}
