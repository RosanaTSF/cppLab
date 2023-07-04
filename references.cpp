#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int idade1;
    cout << "Qual a idade de A: ";
    cin >> idade1;

    int idade2;
    cout << "Qual a idade de B: ";
    cin >> idade2;

    int *ponteiroIdade1 = &idade1;
    int *ponteiroIdade2 = &idade2;

    float* media = new float;
    *media = (*ponteiroIdade1 + *ponteiroIdade2) / 2;
    cout << "Media das idades = " << *media << endl;

    return 0;
}