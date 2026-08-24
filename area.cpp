# include<iostream>
using namespace std;
class rectangle{
int length ,breadth;
public:

rectangle(){
length = breadth = 0;
}
rectangle (int l, int b){
length =l;
breadth = b;
}
rectangle (const rectangle & s){
length =s.length;
breadth = s.breadth;
}
void area()
{
cout<<"area ="<<length*breadth<<endl;
}
};

int main(){
rectangle s1;
rectangle s2(2,4);
rectangle s3(3,5);


s1.area();
s2.area();
s3.area();

return 0;
}
