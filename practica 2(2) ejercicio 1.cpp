// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string a, b, c;
    
    cout << "Please enter your words: " << endl;
    
    cin >> a >> b >> c;
    
    string lower = a;
    
    if (b < lower) {
        cout << b << endl;
    }
    
    else if (c < lower) {
        cout << c << endl;
    }
    
    else {
        cout << "\n" << endl;
        cout << lower << endl;
    }
    
    return 0;
}
