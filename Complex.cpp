#include <iostream>
#include <cmath>

using namespace std;

template <class T>
class Complex{
public:
    T re;
    T im;
    Complex(T r, T i)
    {
        this->re=r;
        this->im=i;
    }
    Complex operator + (const Complex &c)
    {
        return Complex(this->re+c.re,this->im+c.im);
    }
    Complex operator * (const Complex &c)
    {
        return Complex((this->re*c.re)-(this->im*c.im),(this->im*c.re+this->re*c.im));
    }
    friend ostream &operator << (ostream &out, const Complex &c)
    {
        out << " "<<c.re  << " + "<<c.im <<"i ";
    }
    Complex<double> rtheta()
    {
        double x=sqrt(re*re+im*im);
        double theta=atan(double(im)/re);
        return Complex<double>(x,theta);
    }

};
int main()
{
    Complex<int> a(1,2);
    Complex<int> b(1,-2);
    cout << (a*b);
}
