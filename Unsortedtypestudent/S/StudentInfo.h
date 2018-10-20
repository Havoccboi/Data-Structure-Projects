#include <string>
#ifndef STUDENTINFO_H
#define STUDENTINFO_H

using namespace std;

class StudentInfo
{
    public:
        StudentInfo(int, string, double);
        void print();
        friend ostream operator << (ostream &out, const StudentInfo &s);

    protected:

    private:
        int id;
        string name;
        double cgpa;
};

#endif // STUDENTINFO_H
