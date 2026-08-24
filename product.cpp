#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;

public:
    Product() {
        id = 0;
        name = "Unknown";
        price = 0;
        cout << "Default Constructor\n";
    }

    Product(int i, string n, float p) {
        id = i;
        name = n;
        price = p;
        cout << "Parameterized Constructor\n";
    }

    Product(const Product &p) {
        id = p.id;
        name = p.name;
        price = p.price;
        cout << "Copy Constructor\n";
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name
             << ", Price: " << price << "\n\n";
    }
};

int main() {
    Product p1;
    p1.display();

    Product p2(101, "Laptop", 50000);
    p2.display();

    Product p3(p2);
    p3.display();

    return 0;
}

