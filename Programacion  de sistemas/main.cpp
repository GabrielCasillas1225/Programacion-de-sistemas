#include <iostream>
#include <algorithm>
using namespace std;

const int TAMANYO = 10;
int main()
{
    int datos[TAMANYO] = {2, 3, 4, 2,
        3, 4, 9, 1, 7, 8};
    sort(datos, datos + TAMANYO);
    cout << "Datos ordenados: ";
    for (int i = 0; i != TAMANYO; ++i)
        cout << datos[i] << " ";

    return 0;
}
