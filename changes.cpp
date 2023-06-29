#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2;

    cout << "Informa a 1 nota: ";
    cin >> nota1;
    cout << "Informa a 2 nota: ";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;
    cout << "Media: " << media << endl;

    // if (media >= 7)
    // {   cout << "Aprovado!" << endl;} //if simples.

   // if (media > 7) {cout << "Aprovado!" << endl; } else {
    //    cout << "Reprovado" << endl;}

    // Operadores Lógicos && || ! (e ou e não)
    //float freq;
    // cout << "Frequencia do aluno: \n";
    // cin >> freq;
   // if (media >= 7 && freq >= 80); {cout << "Aprovado\n";}
    //else { cout << "Reprovado\n";

    // Operador Ternario
    (media >= 7) ? cout << "Aprovado" : cout << "Reprovado";

    return 0;
}
