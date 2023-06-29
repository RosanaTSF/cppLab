#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int exam1;
    cout << "Informe o valor do exam1:\n";
    cin >> exam1;

    int exam2;
    cout << "Informe o valor do exam2:\n";
    cin >> exam2;

    int exam3;
    cout << "Informe o valor do exam3:\n";
    cin >> exam3;

    int student;
    student = (exam1 + exam2 + exam3) / 3;
    cout << "A media do estudante eh: " << student << endl;

    int media;
    media = 7;

    if (student > media)
    {
        cout << "A media do estudante eh maior que a media da turma:\n";
    }
    else if (student == media) {
        cout << "A media do estudante igual a media da turma:\n";
    }
    else if (student < media) {
        cout << "A media do estudante menor que a media da turma:\n";
    }

    return 0;
}