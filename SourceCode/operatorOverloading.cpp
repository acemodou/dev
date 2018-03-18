#include <cstdio>
#include <iostream>
using namespace std;

class Rational{
int _n = 0; 
int _d = 1;

public:
    Rational (int numerator = 0, int denominator = 1): _n(numerator),_d(denominator) {};
    Rational(const Rational & rhs): _n(rhs._n), _d(rhs._d) {}; // copy constructor 
    ~Rational();


    /* use inline for performance since numerator and denominator are called several times 
       All this are constant save with the exception of the = since its values will be change */

    inline int numerator() const {return _n;};  
    inline int denominator() const{return _d;};
    Rational & operator = (const Rational &);
    Rational  operator + (const Rational &) const;
    Rational  operator - (const Rational &) const;
    Rational  operator * (const Rational &) const;
    Rational  operator / (const Rational &) const;


};

Rational & Rational::operator = (const Rational & rhs){
   if(this != &rhs){
       _n = rhs.numerator();
       _d = rhs.denominator();
   }
   return *this;
}

Rational Rational::operator + (const Rational & rhs)const{
    return Rational((_n*rhs._d)+ (_d*rhs._n),_d*rhs._d);
}
Rational Rational::operator - (const Rational & rhs)const{
    return Rational((_n*rhs._d) - (_d*rhs._n),_d*rhs._d);
}
Rational Rational::operator * (const Rational & rhs)const{
    return Rational(_n*rhs._n, _d * rhs._d);
}
Rational Rational::operator / (const Rational & rhs)const{
    return Rational(_n*rhs._d, _d * rhs._n);
}

Rational::~Rational(){
    printf("dtor: %d/%d\n", _n, _d);
    _n = 0; _d = 1;
}


/* useful for std::cout to overload the left shift opeator 
Allow us to use cout the way we do in main 
formula for how operator is done
*/
std::ostream & operator << (std::ostream & o, const Rational & r){
    return o << r.numerator() << '/' << r.denominator();
}


int main(int argc, char ** argv){
Rational a = 7;
cout << "a is : " << a << endl;
Rational b(5,3);
cout << "b is : " << b << endl; // its printing 5/3 because of the opeator overloading 
Rational c = b;   // copy constructor 
cout << "c is : " << c << endl;
Rational d;                 //default constructor 
cout << "d is : " << d << endl;
d = c;                      //assignment operator 
cout << "d is : " << d << endl;
Rational & e = d;           // reference
d = e;                         //assignment operator 
cout << "e is : " << e << endl;


cout << a << " + " << b << " = " << a + b << endl;
cout << a << " - " << b << " = " << a - b << endl;
cout << a << " / " << b << " = " << a * b << endl;
cout << a << " * " << b << " = " << a / b << endl;

    return 0;
}