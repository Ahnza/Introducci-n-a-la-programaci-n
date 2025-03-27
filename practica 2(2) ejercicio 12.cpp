// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string color1, color2, color3, witness_color;
    int floor1, floor2, floor3, witness_floor;
    
    cout << "Please enter the color and floor of the first house: " << endl;
    cin >> color1 >> floor1;
    cout << "Please enter the color and floor of the second house: " << endl;
    cin >> color2 >> floor2;
    cout << "Please enter the color and floor of the third house: " << endl;
    cin >> color3 >> floor3;
    cout << "Please enter the witness color and witness floor of the first house:" << endl;

    cin >> witness_color >> witness_floor;
    
    if ((witness_color == "?" || witness_color == color1) &&(witness_floor == -1 || witness_floor == floor1 )) {
        cout << 1 << endl;
    }
    
    if ((witness_color == "?" || witness_color == color2) &&(witness_floor == -1 || witness_floor == floor2 )){
        cout << 2 << endl;
    }
    
    if ((witness_color == "?" || witness_color == color3) &&(witness_floor == -1 || witness_floor == floor3 )){
        cout << 3 << endl;
    }
    
    return 0;
}
