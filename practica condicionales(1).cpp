#include <iostream>
using namespace std;

int main() {
    
   int a = 0;
   int b = 0;
   int c = 0;
   
   cout << "Please enter three numbers less than 30k and just int numbers, pls" << endl;
   cout << "Let's firts with 'a': " << endl;
   cin >> a;
   
   if (a > 30000){
       cout << "Hey! What did I say?" << endl;
   }
   
   else {
        cout << "Let's firts with 'b': " << endl;
   cin >> b;
   
   cout << "Let's firts with 'c': " << endl;
   cin >> c;
   }
   
        if (a + b < c) {
            
            if (a * b + b * b < c * c) {
                cout << "this is a right triangle." << endl;
            }
            else {
                cout << "this isn't a right triangle." << endl;
            }
    
        }
    
    return 0;
}
