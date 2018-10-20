#include <iostream>
#include "UnsortedType.cpp"
#include "StudentInfo.h"

using namespace std;

class Student{
public:
    Student()
    {
        name="";
        id=-1;
        cgpa=-1.0;
    }
    bool operator !=(const Student &s)
    {
        return (id!=s.id);
    }
    void operator =(Student &s)
    {
        name=s.getname();
        id=s.getid();
        cgpa=s.getcgpa();
    }
    bool operator ==(const Student &s)
    {
        return (id==s.id);
    }
    Student(string name, int id, double cgpa)
    {
        this->name=name;
        this->id=id;
        this->cgpa=cgpa;
    }
    string getname()
    {
        return name;
    }
    int getid()
    {
        return id;
    }
    double getcgpa()
    {
        return cgpa;
    }
private:
    string name;
    int id;
    double cgpa;
};

UnsortedType<Student> data;

void print()
{
    data.ResetList();
    Student t;
    for(int i=0;i<data.LengthIs();i++)
    {
        data.GetNextItem(t);
        cout <<t.getid()<<"\t"<<t.getname()<< "\t"<<t.getcgpa() <<endl;
    }
    data.ResetList();
}
int main()
{

    Student s1("Jon", 15234, 2.6);
    Student s2("Tyrion", 13732, 3.00);
    Student s3("Sandor", 13569, 3.00);
    Student s4("Ramsey", 15467, 69.00);
    Student s5("Arya", 16285, 69.00);

    data.InsertItem(s1);
    data.InsertItem(s2);
    data.InsertItem(s3);
    data.InsertItem(s4);
    data.InsertItem(s5);

    print();
    data.ResetList();
    cout <<endl;
    cout <<"Enter id to delete.\n";
    int x;
    cin >> x;

    bool found=0;

    data.ResetList();
    Student temp;
    for(int i=0;i<data.LengthIs();i++)
    {
        data.GetNextItem(temp);
        if(temp.getid()==x)
        {
            found=1;
            break;
        }
    }
    data.DeleteItem(temp);
    data.ResetList();

    if(found)
        cout <<"found\n.";
    else
        cout <<"not found\n";
    print();




}
