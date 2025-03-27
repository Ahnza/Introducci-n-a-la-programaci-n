// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name, last_name; 
    
    cout << "Please enter your name: " << endl;
    getline(cin, name); 
    
    cout << "Please enter your last name: " << endl;
    cin >> last_name;
    
    string full_name = last_name + " " + name;
    
    cout << "It's a pleasure to meet you " << full_name << endl;
    
    return 0;
}
