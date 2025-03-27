// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    double x = 0;
    double y = 0;
    
    cout << "Please enter a number for 'x': " << endl;
    cin >> x;
    
    cout << "Please enter a number for 'y': " << endl;
    cin >> y;
    
    if ( y == 0 ) {
        cout << "YOU CAN NOT DIVIDE BY ZERO!!! TRY OTHER NUMBER." << endl;
    }
    else {
        float divide = x / y;
        
        cout << "The divide of 'x' = " << x << " and 'y' = " << y << " is = " << divide << endl;
    }
    return 0;
}
