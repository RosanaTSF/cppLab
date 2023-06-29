#include <iostream>

using namespace std;

int main()
{

    int inteiro;
    inteiro = 5;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;


    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    char letra;
    letra = 'r'; //aspas simples.
    cout << letra << endl;

    string palavra;
    palavra = "cat"; //aspas duplas.
    cout << palavra << endl;

    int idade;
    cout << "Qual a sua idade?" << endl;
    cin >>idade;
    cout << "idade " << idade << endl;

    return 0;
}