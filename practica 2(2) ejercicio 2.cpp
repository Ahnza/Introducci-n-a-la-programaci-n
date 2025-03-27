// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    float a, b, c;
    
    cout << "Introduzca los coeficientes a, b y c: " << endl;
    
    cin >> a >> b >> c;
    
    float x_1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    float x_2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    
    
    float root_argument = sqrt(b * b - 4 * a * c);
    int fraction_divisor = 2 * a;
    
    if (root_argument < 0) {
        cout << "argument of the root is negative, there are no real answers." << endl;
    }
    
    else if (fraction_divisor == 0) {
        cout << "The coefficient 'a' is zero, therefore the divisor of the fraction is zero, IT CANNOT BE DIVIDED BY ZERO." << endl;
    }
    
    else {
        cout << x_1 << " y " << x_2 << endl;
    }
  
    return 0;
}
