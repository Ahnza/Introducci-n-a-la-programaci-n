// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    const int f = 11235813;
    int f1 = 0;
    
    cout << "Please enter the Fibonacci number: " << endl;
    cin >> f1;
    
    if (f == f1){
        cout << "We've found Fibo!" << endl;
    }
    else{
        cout << "We haven't found Fibo yet." << endl;
    }
    
 
    return 0;
}
