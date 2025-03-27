// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Please enter a number, remember one weekend have seven days, so enter a number between one and seven (1-7); "<< endl;
    cin >> num;
    switch (num) {
        case 1:
        cout << "The number is 1, so today is Monday." << endl;
            break;
        case 2:
        cout << "The number is 2, so today is Tuesday." << endl;
            break;
        case 3:
        cout << "The number is 3, so today is Wednesday." << endl;
            break;
        case 4:
        cout << "The number is 4, so today is Thursday." << endl;
            break;
        case 5:
        cout << "The number is 5, so today is Friday." << endl;
            break;
        case 6:
        cout << "The number is 6, so today is Saturday." << endl;
            break; 
        case 7:
        cout << "The number is 7, so today is Sunday." << endl;
            break; 
        default:
        cout << "Opción no válida" << endl;
    }
    return 0;
}
