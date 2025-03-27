// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double radius = 0;
    
    cout << "Please enter the radius of the sphere: " << endl;
    cin >> radius;
    
    if (radius != 0){
        double area = 4 * M_PI * pow(radius, 2);
        cout << "the area of the sphere is = " << area << endl;
    }
    else{
        cout << "ERROR THE RAIDUS CAN NOT BE NEGATIVE, PLEASE TRY AGAIN." << endl;
    }
    return 0;
}
