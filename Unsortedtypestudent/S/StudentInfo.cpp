#include <string>
#include "StudentInfo.h"

using namespace std;

StudentInfo::StudentInfo(int id, string name, double cgpa)
{
    this->name=name;
    this->id=id;
    this->cgpa=cgpa;
}

