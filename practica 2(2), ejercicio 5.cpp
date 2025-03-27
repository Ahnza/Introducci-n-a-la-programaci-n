// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   
   char word;
   cout << "Please enter a word, like 'A','b','F'...etc: " << endl;
   cin >> word;
   
   if (word >= 65 && word <= 90){
       cout << "This is a capital letter." << endl;
   }
   else if (word >= 97 && word <= 122){
       cout << "This is a lowercase letter" << endl;
   }
   else{
       cout << "Invalid data, please try again" << endl;
   }
    
    return 0;
}
