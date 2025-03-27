// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int second = 0;
    cout << "Please enter the seconds: " << endl;
    cin >> second;
    
    if ( second < 0){
        cout << "INVALID DATA, TIME CAN NOT BE LESS THAN ZERO." << endl;
    }
    else {
        int hour = second / 3600;
        int minute = (second % 3600) / 60;
        int remaining_second = second % 60;
        
        cout << hour << ":" << minute << ":" << remaining_second << endl;
    }

    return 0;
}
