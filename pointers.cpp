#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    int var1;
    int *pointer1;
    var1 = 10;
    pointer1 = &var1; // o ponteiro pointer1 (com &) recebe o end de memória da variável var1.
    cout << "Valor da variavel pelo nome eh: " << var1 << endl;
    cout << "End onde esta armazenado o ponteiro eh: " << pointer1 << endl; // (sem *) imprime só o end de memória armazenado do ponteiro pointer1.
    cout << "Valor onde esta o ponteiro eh: " << *pointer1 << endl;         // (com *) imprime o valor apontado.

    int var2;
    var2 = var1;
    var2 = *pointer1; // var2 recebe o valor apontado pelo ponteiro pointer1 (com *).
    cout << var2;

    var1 = 30;
    *pointer1 = 30; // o valor apontado pelo ponteiro pointer1 (com *) eh alterado para 30.
    cout << var1;

    var2 = 50;
    pointer1 = &var2; // o ponteiro pointer1 recebe o end de memória da variável var2 (com &).
    cout << *pointer1 << endl;
    cout << var1;

    int *pont2;     // declaração de um ponteiro para um int chamado pont2 (com *).
    pont2 = NULL;   // o ponteiro pont2 é inicializado com o valor NULL (vazio).
    cout << *pont2; // tentativa de acessar o valor apontado pelo ponteiro pont2 (pode gerar um erro, pois o ponteiro é NULL)

    int *pont3 = new int; // declaração de um ponteiro para um int (com *) chamado pont3, que é alocado dinamicamente usando o operador new (sem nome).
    *pont3 = 35;          // o valor apontado pelo ponteiro pont3 eh atribuído como 35.
    cout << *pont3;       // imprime o valor apontado pelo ponteiro pont3 (com *).

    delete pont3; // libera a memória alocada dinamicamente para o ponteiro pont3.
    pont3 = pointer1;
    cout << *pont3;

    return 0;
}
