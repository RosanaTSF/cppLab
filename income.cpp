#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int idade;
    double renda;
    cout << "Informe a sua idade: \n";
    cin >> idade;

    cout << "Informe a sua renda: \n";
    cin >> renda;

    if (idade > 18 && renda >= 1200)
    {
        cout << "Voce tem direito a uma moradia paga pelo Estado!" << endl;
    }
    else
    {
        cout << "Voce vai pagar um aluguel proporcional a sua renda!" << endl;

        return 0;
    }
}