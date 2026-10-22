#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    double rating;
   cout << "Enter the rating for Toxic (0.0 to 5.0): "; 
 cin >> rating;

   if (rating < 0.0 || rating > 5.0) {
     cout << "Invalid rating! Please enter a value between 0.0 and 5.0." << endl;
    }
   else if (rating <= 2.0) {
    cout << "toxic is a flop movie"  << endl;

   } else if (rating <= 3.4) {
    cout << " toxic is a semi hit movie"  << endl;

    }  else if (rating <= 4.5) {
    cout << " toxic is a hit movie"<< endl;

     } else
    cout << "  toxic is a super hit movie" << endl;

    return 0;
}