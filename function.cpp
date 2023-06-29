#include <iostream>

using namespace std;

int t = 1;

string global = "Hi!\n";
#define pi 3.14
#define curtir cout << "Deixe seu like!\n";

void follow() {
    cout << "Siga meu arroba que é ropapene:\n";
}

int sum(int &x, int &y) {
    int soma = x + y;
    x = 13;
    return soma;
}

int main() {
    int t = 0;
    follow();
    int a = 3, b = 5;
    int r;
    r = sum(a, b);
    cout << "valor de a: " << a << endl;
    cout << "soma: " << r << endl;

    cout << "global: " << global << endl;
    cout << pi << endl;
    curtir;

    return 0;
}
