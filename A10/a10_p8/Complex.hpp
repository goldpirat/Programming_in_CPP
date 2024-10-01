/*
CH-230-A
a10 p8.h
Flori Kusari
fkusari@jacobs-university.de
*/

class Complex
{
private:
    float realpart;
    float imagpart;
 
 public:
 
    Complex();
    Complex(float, float);
    Complex(const Complex&);
    ~Complex();
 
    float getRealpart();
    float getImagpart();
 
    void setRealpart(float);
    void setImagpart(float);
 
    Complex add(Complex);
    Complex multiply(Complex);
    Complex conjugate(Complex);
    Complex subtract(Complex);
 
    void print();
};