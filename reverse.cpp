#include<iostream>
using namespace std;
int main()
{
int n, rev ,digit;
cout<<"Enter your reverse no:";
cin>>n;

while (n!=0){
int digit = n%10;
rev = rev*10 + digit;
n = n/10;
}
cout<<"reversed:"<<rev;
}
