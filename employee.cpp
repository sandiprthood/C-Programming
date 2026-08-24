# include<iostream>
using namespace std;

class employee{
int id;
string name;
float salary;

public:
employee(){
id = 0;
name = "unknown";
salary = 0;

}
employee(int i ,string n,float s)
{
id = i;
name = n;
salary = s;
}
employee(const employee & r)
{
id = r.id;
name =  r.name;
salary = r.salary;
}
void display()
{
cout<<" ID:"<<id<<" " <<"\nName:"<<name<<" " <<"\nSalary:"<<salary<<endl;
}
};
int main(){
employee 
r1;
employee r2(17,"sandip",288558.5);
employee
r3(123,"baswraj",64469.4);
r1.display();
r2.display();
r3.display();

return 0;
}


