#include <iostream>
using namespace std;

int main() {
    
    int hrs_I, hrs_C;
    int total  = 0;
    int tarifario  = 0;
    cout << "Ingrese la hora de inicio (la hora actual o la que desee) \ny la cantidad de horas a rentar." << endl;
    cin >> hrs_I >> hrs_C;
    
    if (23 <= hrs_I && hrs_I <= 0){
        cout << "Ingrese una hora de inicio 0 - 23, por favor." << endl;
    }
    else if (hrs_C < 0){
        cout << "Ingrese una cantidad mayor a 0, por favor." << endl;
    }
     if (0 <= hrs_I && hrs_I <= 6.99){
        tarifario = 1;
    }
    else if (7.01 <= hrs_I && hrs_I <= 23){
        tarifario = 2;
    }
    if (0 <= hrs_I && hrs_I <= 6.99){
        total = hrs_C * tarifario;
        cout << "Has alquilado una bicicleta por \n" << hrs_C << " hora(s) con el tarifafrio de " << tarifario << " bs/hrs \nEl monto a pagar es de " << total << " Boliviano(s)" << endl;
   
    }
    else if (7.01 <= hrs_I && hrs_I <= 23){
        total = hrs_C * tarifario;
        cout << "Has alquilado una bicicleta por \n" << hrs_C << " hora(s) con el tarifafrio de " << tarifario << " bs/hrs \nEl monto a pagar es de " << total << " Boliviano(s)" << endl;
    }

    return 0;
}
