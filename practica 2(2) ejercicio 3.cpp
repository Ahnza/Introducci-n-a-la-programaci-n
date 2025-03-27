
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int a,b;
    cout << "Please enter a integer for 'a' lest than 1,000,000: " << endl;
    cin >> a;
    
    cout << "Please enter a integer for 'b' different than 0: " << endl;
    cin >> b;
    
    
    
    if (a > 1000 * 1000) {
        cout << "Just numbers lest than 1,000,000." << endl; 
    }
    else if ( b == 0) {
        cout << "'b', can't be zero" << endl;
    }
    else{
        float divide = a / b;
        cout << "The result is = " << divide << endl;
    }

    return 0;
}
