#include <iostream>

using namespace std;

void troca(int* &ponteiro1, int* &ponteiro2) { //Recebe dois ponteiros do tipo int por referência (&). Isso significa que as alterações feitas nos ponteiros dentro da função serão refletidas fora dela.
    int temporario;
    temporario = *ponteiro1;
    *ponteiro1 = *ponteiro2;
    *ponteiro2 = temporario;
}

int main(){
    int* ponteiro1 = new int; //aloca memória dinamicamente para armazenar um int.
    *ponteiro1 = 0;
    int* ponteiro2 = new int;
    *ponteiro2 = 10;

    cout << "Ponteiro 1: " << ponteiro1 << " e " << *ponteiro1 << endl; //exibe o endereço do ponteiro1 e o valor apontado por ele.
    cout << "Ponteiro 2: " << ponteiro2 << " e " << *ponteiro2 << endl;

    troca(ponteiro1, ponteiro2);

    cout << "Ponteiro 1: " << ponteiro1 << " e " << *ponteiro1 << endl; //Endereço de ponteiro1 e o valor apontado por ele após a chamada da função troca.
    cout << "Ponteiro 2: " << ponteiro2 << " e " << *ponteiro2 << endl;

    return 0;
}
