#include<iostream>
using namespace std;
class ComplexNumbers{
    private:
    int real;
    int img;
    public:
    ComplexNumbers(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }
    ComplexNumbers(ComplexNumbers const &c){
        this->real=c.real;
        this->img=c.img;
    }
    void plus(ComplexNumbers &c){
        this->real=this->real+c.real;
        this->img=this->img+c.img;
    }
    ComplexNumbers operator+(ComplexNumbers const &c){
        ComplexNumbers newc;
        newc.real=this->real+c.real;
        newc.img=this->img+c.img;
        return newc;
    }
    ComplexNumbers operator*(ComplexNumbers &c){
       ComplexNumbers newc;
       newc.real=(this->real*c.real)-(this->img*c.img);
       newc.img=(this->img*c.real + this->real*c.img);
       return newc;
    }
    void print(){
        cout<<this->real<<" + i"<<img<<endl;
    }
};
int main(){
    int real1,real2,img1,img2;
    cin>>real1>>img1;
    cin>>real2>>img2;
    ComplexNumbers c1(real1,img1);
    ComplexNumbers c2(real2,img2);
    int choice;
    cin>>choice;
    c1.print();
    c1.plus(c2);
    c1.print();
    ComplexNumbers c3=c1+c2;
    c3.print();
    ComplexNumbers c4;
    c4=c1*c2;
    c4.print();
    
}