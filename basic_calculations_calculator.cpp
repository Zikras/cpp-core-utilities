#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {

    int a;
    int b;
    char op;

    cout << "Enter two numbers and an operator (e.g., 12 5 *): ";
    cin >> a >> b >> op;

    switch (op)
    {
    case '+' : cout << "result =" << (a+b) << endl; break;
    case '-' : cout << "result =" << (a-b) << endl; break;
    case '*': cout << "result =" << (a*b) << endl; break;
     case '/': 
            if (b == 0) { 
                cout << "cannot be divided by zero" << endl; 
            } else {
                cout << "result = " << (a / b) << endl; 
            } 
            break;

       default: 
            cout << "invalid operator" << endl; 
            break;
    }

    return 0;
}