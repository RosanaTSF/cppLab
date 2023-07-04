#include <iostream>

using namespace std;

int main(){
    int l, c;
    cout << "Quantas linhas?\n";
    cin >> l;
    cout << "Quantas colunas?\n";
    cin >> c;

    float matriz1[l][c], matriz2[l][c];
    cout << "Digite os elementos da matriz 1:\n";
    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite os elementos da matriz 2:\n";
    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    float matrizSoma[l][c];
    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "Soma das matrizes = \n";

    for (int i=0 ; i<l ; i++){
        for (int j=0 ; j<c ; j++){
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}