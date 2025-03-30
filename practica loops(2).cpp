#include <iostream>
#include <string>
using namespace std;

int main() {
    int puntos_Gryffindor = 0;
    int puntos_Hufflepuff = 0;
    int puntos_Ravenclaw = 0;
    int puntos_Slytherin = 0;

    string respuestas[4];

    string preguntas[4] = {
        "P1) Cuando esté muerto, quiero que la gente me recuerde como:\n1) El Bien\n2) El Grande\n3) El Sabio\n4) El Audaz\n",
        "P2) Preferirías:\n1) Salvar a un amigo\n2) Ganar poder\n3) Aprender algo nuevo\n4) Enfrentar un desafío\n",
        "P3) ¿Qué tipo de magia prefieres?\n1) Magia curativa\n2) Magia oscura\n3) Magia del conocimiento\n4) Magia de combate\n",
        "P4) ¿Qué animal te gustaría tener como mascota?\n1) Tejón\n2) Serpiente\n3) Águila\n4) León\n"
    };

    cout << "Bienvenido, el quiz del sombrero mágico comienza!!" << endl;

    for (int i = 0; i < 4; i++) {
        cout << preguntas[i];
        cin >> respuestas[i];

       
        int respuesta = stoi(respuestas[i]);

        switch (respuesta) {
            case 1: puntos_Hufflepuff++; break;
            case 2: puntos_Slytherin++; break;
            case 3: puntos_Ravenclaw++; break;
            case 4: puntos_Gryffindor++; break;
            default: 
                cout << "Entrada incorrecta, ingresa un número del 1 al 4.\n"; 
                i--; 
                break;
        }
    }

  
    int max_puntos = puntos_Gryffindor;
    if (puntos_Hufflepuff > max_puntos) max_puntos = puntos_Hufflepuff;
    if (puntos_Ravenclaw > max_puntos) max_puntos = puntos_Ravenclaw;
    if (puntos_Slytherin > max_puntos) max_puntos = puntos_Slytherin;

    cout << "El sombrero mágico ha decidido... ";

    if (puntos_Gryffindor == max_puntos) cout << "Gryffindor! ";
    if (puntos_Hufflepuff == max_puntos) cout << "Hufflepuff! ";
    if (puntos_Ravenclaw == max_puntos) cout << "Ravenclaw! ";
    if (puntos_Slytherin == max_puntos) cout << "Slytherin! ";

    cout << endl;

    return 0;
}
