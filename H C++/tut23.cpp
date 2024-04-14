#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void setData(int n1, int n2){
            a=n1;
            b=n2;
            cout<<"The value of a is "<<a<<" + "<<b<<"i"<<endl;
        };
    friend Complex sumComplex(Complex o1, Complex o2);
};

// void Complex::setData(int n1, int n2){
//     a=n1;
//     b=n2;
//     cout<<"The value of a is "<<a<<" + "<<b<<"i"<<endl;
// }

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    Complex o1, o2, sum;
    o1.setData(2,5);
    o2.setData(3,8);
    sum=sumComplex(o1, o2);
    return 0;
}