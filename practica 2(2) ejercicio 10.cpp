// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int x = 0;
    int y = 0;
    
    cout << "Please enter two non-negative numbers (x and y): " << endl;
    cin >> x >> y;
    
    int s = x + y;
    
    int n = 0;
    int temp = s;
    while (temp > 0){
    temp /= 10;
    n++;
    }
        
    int result = s * n;
    
    
    if (x < 0 || y < 0){
        cout << "answer '0'" << endl;
    }
    else{
         cout << "The sum is: " << s << endl;
         cout << "Number of digits in the sum: " << n << endl;
         cout << "The answer is: " << result << endl;
    }
    
    return 0;
}

