#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
    
    public:
    Fraction(int numerator=0,int denominator=1){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    Fraction(Fraction const &f){
        this->numerator=f.numerator;
        this->denominator=f.denominator;
    }
    Fraction operator=(Fraction const &f){
        Fraction newf;
        newf.numerator=f.numerator;
        newf.denominator=f.denominator;
    }
    void add(Fraction const &f){
        int lcm=this->denominator*f.denominator;
        int x=(lcm/this->denominator)*this->numerator;
        int y=(lcm/f.denominator)*f.numerator;
        this->numerator=x+y;
        this->denominator=lcm;
        simplify();
        
    }
    void simplify(){
        int mini=min(this->numerator,this->denominator);
        int sim=1;
        for(int i=2;i<=mini;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                sim=i;
            }
        }
        this->numerator=this->numerator/sim;
        this->denominator=this->denominator/sim;
    }
    Fraction operator+(Fraction const &f){
        int lcm=this->denominator*f.denominator;
        int x=(lcm/this->denominator)*this->numerator;
        int y=(lcm/f.denominator)*f.numerator;
        Fraction newf(x+y,lcm);
        newf.simplify();
        return newf;
    }
    void multiply(Fraction const &f){
        this->numerator=this->numerator*f.numerator;
        this->denominator=this->denominator*f.denominator;
        simplify();
    }
    Fraction operator*(Fraction const &f){
        Fraction newf;
        newf.numerator=this->numerator*f.numerator;
        newf.denominator=this->denominator*f.denominator;
        newf.simplify();
        return newf;
    }
    bool operator==(Fraction const &f){
        return (numerator==f.numerator &&denominator==f.denominator);
    }
    Fraction& operator++(){
        this->numerator=this->numerator+this->denominator;
        simplify();
        return *this;
    }
    void print(){
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
};
int main(){
Fraction f1(10,2);
Fraction f2(15,3);
f1.print();
f2.print();
Fraction f3=f1;
Fraction f4=f1+f2;
f3.print();
f4.print();
Fraction f5=f1*f2;
f5.print();
    
}