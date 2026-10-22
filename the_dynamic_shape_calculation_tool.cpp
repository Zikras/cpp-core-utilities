#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    string shape;
    
    

    cin >> shape ;

    if (shape == "square") {
        double side ;
        cout << "enter side :" << endl;
        cin >> side;
        cout  << "area = " << (side * side ) << endl;

    } else if (shape == "rectangle") {
        double length ;
        double breadth ;
        cout << "enter length and breadth: " << endl;
        cin >> length >> breadth;
        cout  << "area = " << (length * breadth ) << endl;
    } else if (shape == "triangle") {
        double base ;
        double height ;
        cout << "enter base and height : " << endl;
        cin >> base;
        cin >> height;
        cout  << "area = " << ( 0.5 * base * height ) << endl;
    } else if (shape == "circle") {
        double radius ;
    
        cout << "enter radius: " << endl;
        cin >> radius;
        cout  << "area = " << ( 3.14 * radius * radius ) << endl;
    } else {
    cout << "none" << endl;

    }


    return 0;
}