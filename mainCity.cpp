#include <iostream>
#include "city.h"

using namespace std;

int main(){
    city symcity(123, 4000);
    cout << "Symcity:\n";
    cout << "Ano de Fundacao: " << symcity.getano() << endl;
    cout << "Populacao: " << symcity.getpopulacao() << endl;

    city animecity(198, 19899);
    animecity.acrescentapopulacao(1);
    cout << "Animecity:\n";
    cout << "Ano de Fundacao: " << animecity.getano() << endl;
    cout << "Populacao: " << animecity.getpopulacao() << endl;

    system("pause");

    return 0;
} // No terminal: g++ mainCity.h city.cpp -o nomeqq.exe enter e se ok, vai para a pasta.