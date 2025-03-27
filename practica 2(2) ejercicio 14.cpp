// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int n_documents = 0;
    
    cout << "Please enter the among of documents: " << endl;
    cin >> n_documents;
    
    if (n_documents == 0){
        cout << "We haven't found any document." << endl;
    }
    else if (n_documents == 1) {
        cout << "We've found a document" << endl;
    }
    else if (n_documents < 0){
        cout << "INVALID DATA." << endl;
    }
    else{
        cout << "We've found documents." << endl;
    }   

    return 0;
}
