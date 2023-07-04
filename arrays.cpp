#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        int medida;
        cout << "Qual o tamanho do vetor: ";
        cin >> medida;

        vector<int> vetor(medida);

        cout << "Quais os elementos do vetor:" << endl;

        for (int i = 0; i < medida; i++)
        {
            cout << "Elemento " << i << ": ";
            cin >> vetor[i];
        }

        cout << "Vetor:" << endl;
        
        for (int i = 0; i < medida; i++)
        {
            cout << vetor[i] << " "; // Exibe o elemento do vetor na posição "i".
        }

        cout << endl;

        vetor.clear();
        vetor.shrink_to_fit(); //esvazia memória.

        string informe;
        cout << "Deseja continuar? (yes/no): ";

        cin >> informe;

        if (informe == "no")
        {
            break;
        }
    }

    return 0;
}

