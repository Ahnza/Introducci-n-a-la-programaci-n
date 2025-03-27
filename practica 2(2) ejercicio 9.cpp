// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2, word3, word4, word5;
    cout << "Please enter 5 words: " << endl;
    cin >> word1 >> word2 >> word3 >> word4 >> word5; 
    
    char letter1 = word1[0]; 
    char letter2 = word2[0];
    char letter3 = word3[0];
    char letter4 = word4[0];
    char letter5 = word5[0];
    
    cout << "Here are the first letters: "
         << letter1 << " "
         << letter2 << " "
         << letter3 << " "
         << letter4 << " "
         << letter5 << endl;

    if (letter1 == letter5){
        cout << "We've found something" << endl;
    }
    else{
        cout << "Nothing here, dude." << endl;
        
    }

    return 0;
}
