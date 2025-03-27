#include <iostream>
using namespace std;

int main() {
    
  
    float N, A, B, X, Y;

    cout << "Please enter the cost of your total purchase: " << endl;
    cin >> N;

    cout << "Plaese introduce the discount of X and Y: " << endl;
    cin >> X;
    cin >> Y;
    
   
    cout << "Plaese introduce the cost of A y B: " << endl;
    cin >> A;
    cin >> B;
    
   
    if (N > A && N > B){
        if (X > Y){
            float d_b1 = N / (X);
            float total_d_b1 = N + d_b1;
            cout << "The discount of your purchase is " << d_b1 << "The total to pay is"<< total_d_b1 << endl;
        }
        else if (N < A && N < B){
           cout << "You don't have discuunt." << endl;
        }
            
        }
 
        
        
    }
    
   
    else if (N > A){
        float d_1 = N / (X);
        float total_1 = N + d_1;
        cout << "The discount of your purchase is " << d_1 << "The total to pay is"<< total_1 << endl;
        
    }
    
    else if (N > B ){
        float d_2 = N / (Y);
        float total_2 = N + d_2;
        cout << "The discount of your purchase is " << d_2 << " The total to pay is " << total_2 << endl;
    }
    
    
    
    else{
        cout << "You don't have discount, sorry." << endl;
    }


    return 0;
}

