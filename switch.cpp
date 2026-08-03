#include <iostream>
using namespace std;

int main() {
    double a, b;
    int c;

    cout << "enter first no: ";
    cin >> a;
    cout << "enter second no: ";
    cin >> b;

    cout << "enter operation no (1-4): ";
    cin >> c;

    switch (c) {
        case 1:
            cout << "add: " << a + b << endl;
            break;

        case 2:
            cout << "sub: " << a - b << endl;
            break;

        case 3: 
            cout << "mul: " << a * b << endl;
            break;
        case 4:
            cout << "div: " << a / b << endl;
            break;


        default:
            cout << "invalid no" << endl;
            break;
    }

    return 0;
}