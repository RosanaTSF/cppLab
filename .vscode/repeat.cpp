#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Choose a non-negative number\n";
    cin >> n;

    int sum = 0;
    int cont = 1;
    // while (cont <= n){
    // sum+=cont;
    // cont++;
    // }

    // do {
    //  sum+=cont;
    //  cont++;
    //   while (cont <= n);

    for (int j = 1; j <= n; j += 1)
    {
        sum += j;
    }

    cout << "Sum of numbers 0 to: " << n << "=" << sum << endl;

    return 0;
}