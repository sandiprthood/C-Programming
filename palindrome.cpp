#include<iostream>
using namespace std;
int main()
{
int n, rev ,digit,tem;
cout<<"Enter your reverse no:";
cin>>n;

while (n!=0){
int digit = n%10;
rev = rev*10 + digit;
n = n/10;
}
if (rev ==tem){
cout<<"palindrome";
}
else{
cout<<"not palindrome";
}
}
