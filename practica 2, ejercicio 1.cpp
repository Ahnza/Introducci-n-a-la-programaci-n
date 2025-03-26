EJERCICIO 1
Escriba un programa que lea dos números double e imprima la parte entera de su suma. 

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double x = 0;
    double y = 0;
    
    cout << "Please enter a number for 'x': " << endl;
    cin >> x;
    
    cout << "Please enter a number for 'y': " << endl;
    cin >> y;
    
    int integer_part_of_x = floor(x);
    int integer_part_of_y = floor(y);
    
    int add = integer_part_of_x + integer_part_of_y;
    
    cout << "The add of the integer part of 'x' = " << x << " and 'y' = " << y << " is = " << add << endl;
    
    return 0;
}

  
