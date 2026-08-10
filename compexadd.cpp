#include<iostream>
using namespace std;
class complex{
int real ,imag;
public:
void input(){
cout<<"enter real";
cin>>real;
cout<<"enter imaginary";
cin>>imag;
}
void add(complex c){

cout<<"addition="<<real+c.real<<"+"<<imag<<c.imag<<"i";
}
};

int main(){
complex c1,c2;

cout<<"enter your 1 no"<<endl;
c1.input();
cout<<"enter your 2 no"<<endl;
c2.input();
c1.add(c2);

return 0;
}


