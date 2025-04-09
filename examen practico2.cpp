// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int numerodedias = 0;
    int diadeinicio = 0;
    string spacio1 = " ";
    string spacio2 = "  ";
    cout << "Ingrese el numero de dias de su calendario y el dia que quiere que inicie." << endl;
    cin >> numerodedias, diadeinicio;
    
    
    
    if (numerodedias > 99){
        cout << "No se permiten numeros muy altos" << endl;
    }
    else if (numerodedias < 0){
        cout << "No numeros negativos" << endl;
    }
    if (diadeinicio < 0 ){
        cout << "El dia ingresado debe ser mayor a 0" << endl;
    }
    else if (diadeinicio > 7){
        cout << "Ingrese un numero entre 0 - 7" << endl;
    }
    
      while(numerodedias > 1){
        numerodedias = numerodedias - 1;
        if (numerodedias % 7 == 0){
            cout << "\n";
            }
        
    }
    cout << numerodedias;
  
   
    return 0;
}
