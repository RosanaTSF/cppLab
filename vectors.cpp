#include <iostream>

using namespace std;

int main()
{
    // Alocação Estática
    int vet[4];
    vet[0] = 5;
    vet[1] = 10;
    //ou int vet[4] = {5, 10}; //Declaração direta: tipo, nome, tam e valores.

    cout << vet[2] << endl;
    cout << "[ ";
    for (int i = 0; i < 4; i++)
    {
        cout << vet[i] << " ";
    }
    cout << " ]" << endl;

    int x = sizeof(vet) / sizeof(int);
    int y = sizeof(int); // cada int = 4 bytes.
    cout << "Tamanho de inteiro: " << y << endl; // 
    cout << "Quantidade de elementos (tam) do vetor: " << x << endl;

    // Alocação Dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor!" << endl; // 
    cin >> tamanho;
    int *vetor = new int[tamanho]; // Alocação dinâmica de um vetor de inteiros com o tamanho especificado.

    for (int i = 0; i < tamanho; i++) // Laço for para ler os elementos do vetor digitados pelo usuário.
    {
        cout << "Digite o elemento: " << i + 1 << " do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i = 0; i < tamanho; i++) // Laço for para imprimir os elementos do vetor.
    {
        cout << vetor[i] << " "; // Impressão de cada elemento do vetor.
    }
    cout << endl;

    delete[] vetor; // Liberação da memória alocada dinamicamente para o vetor.

    return 0;
}