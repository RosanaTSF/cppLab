#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 4, b = 3;

    int sum = a + b;
    cout << "Soma: " << sum << endl;

    int sub = a - b;
    cout << "Subtracao: " << sub << endl;

    int div = a / b;
    cout << "Divisao: " << div << endl;


    int restdiv = a % b;
    cout << "Resto da divisao: " << restdiv << endl;

    float divfloat = static_cast<float>(a) / static_cast<float>(b);
    cout << "Divisao de float: " << divfloat << endl;

    float pot = pow(static_cast<float>(a), static_cast<float>(b));
    cout << "Potencia: " << pot << endl;

    return 0;
}
