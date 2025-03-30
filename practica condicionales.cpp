// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    int x1;
    int x2;
    int y1;
    int y2;
    
    cout << "please enter a number for (x1 ; x2)" << endl;
    cin >> x1;
    cin >> x2;
    
    cout << "please enter a number for (y1 ; y2)" << endl;
    cin >> y1; 
    cin >> y2;
    
    if (x1 == x2 && y1 == y2 || abs(x2 - x1 == y2 - y1) ) {
        cout << "TRUE" << endl; 
    }

    else { 
        cout << "FALSE" << endl;
    }
    return 0;
}
