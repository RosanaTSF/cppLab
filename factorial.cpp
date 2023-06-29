#include <iostream>

using namespace std;

int main()
{

    int factorial;
    cout << "Escolha um numero para fatorar:\n";
    cin >> factorial;

    // calculo da fatorial
    int result = 1;
    for (int i = 1; i <= factorial; i++) {
        result *= i;
    }
    cout << "O fatorial de:\n"
         << "eh" << result << endl;

    return 0;
}