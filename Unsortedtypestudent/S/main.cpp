#include <iostream>
#include "UnsortedType.h"
#include "StudentInfo.h"

using namespace std;


int main()
{
    UnsortedType<int> data;

    StudentInfo s(1,"Salman Sahel", 4.00);
    StudentInfo a(96,"John Doe", 4.20);
    StudentInfo d(6,"Tony Stark", 10.00);

    data.InsertItem(2);
    data.InsertItem(1);
    data.InsertItem(3);

    data.ResetList();


}
