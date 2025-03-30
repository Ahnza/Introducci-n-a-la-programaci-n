// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int year = 0;
    
    cout << "Welcome! to your... I don't know how to explain my funtion but... just introduce a year... whatever you want: " << endl;
    cin >> year;
    
    if (year % 100 == 0 && year % 400 != 0 ) {
        cout << "The year " << year << " is not leap year." << endl;
    }
    
        else if ( year % 4 == 0 && year % 100 != 0 ) {
            cout << "The year " << year << " is leap year." << endl;
        }
        else if ( year % 400 == 0){
            cout << "The year " << year << " is leap year." << endl;
        }
        
    else {
        cout << "No year is leap year" << endl;
        
    }
    return 0;
}
