#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
int money;
int food;
int movie;
int travel;
cout << "how much money do you have?" << endl;
cin >> money;
cout << "how much money will you spent on food?" << endl;
cin >> food;
cout << "how much money will you spent on movie?" << endl;
cin >> movie;
cout << "how much money will you spent on travelling?" << endl;
cin >> travel;
int totalCost = food + movie + travel ;

if (money >= totalCost) {
  int remaining = money - totalCost;
cout << "plan accepted" << endl;
  cout << "Total = " << totalCost << endl;
        cout << "Remaining = " << remaining << endl;
}else {
cout << "plan cancelled" << endl;
 int shortBy = totalCost - money;
cout << "total = " << totalCost << endl;
cout << "short = " << shortBy << endl;
}

    return 0;
}