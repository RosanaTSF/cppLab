#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float spend[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Informe os gastos da familia: " << i + 1 << endl;
        cin >> spend[i];
    }

    float media = 0;
    for (int i = 0; i < 5; i++)
    {
        media += spend[i];
    }
    media /= 5;
    cout << "Media de gastos das familias: " << media << endl;

    for (int i = 0; i < 5; i++) {
        if (spend[i] < media)
        {
            cout << "Familia " << i + 1 << ": Renda baixa" << endl;
        }
        else if (spend[i] == media)
        {
            cout << "Familia " << i + 1 << ": Renda media" << endl;
        }
        else if (spend[i] > media)
        {
            cout << "Familia " << i + 1 << ": Renda alta" << endl;
        }
    }
    return 0;
}