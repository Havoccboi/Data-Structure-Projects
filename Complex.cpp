#include <iostream>
#include <cmath>
#define eps 1e-4

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
    int operator != (const Complex &c)
    {
        return(abs(this->re-c.re)+ abs(this->im-c.im) >= eps);
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
    Complex<double> a(1.00,2.000);
    Complex<double> b(1.0,2.00001);
    cout <<(a!=b);
    //cout << a+b <<endl;
}
