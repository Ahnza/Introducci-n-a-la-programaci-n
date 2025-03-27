// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int age = 0;
    int years_of_experience = 0;
    
    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "Please enter your year of experience: " << endl;
    cin >> years_of_experience;

    if (years_of_experience >= 18){
        if (years_of_experience == 0 || years_of_experience < 3){
            cout << "congratulations! You can be promoted to project coordinator." << endl;
        }
        else if (years_of_experience >=3 && years_of_experience <5){
            cout << "congratulations! You can be promoted to project manager." << endl;
        }
        else if (years_of_experience > 5){
            cout << "congratulations! You can be promoted to senior director." << endl;
        }
    }
    else{
        cout << "Soory... you are not yet of legal age" << endl;
    }
    
    return 0;
}
