#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int vetor[10], n, somaParesPosImpares = 0;

    cout << "Digite a quantidade de elementos (maximo 10): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Digite o " << i+1 << "º elemento: ";
        cin >> vetor[i];
    }


    sort(vetor, vetor + n, greater<int>());
    cout << "Os dois maiores elementos sao: " << vetor[0] << " e " << vetor[1] << endl;


    for (int i = 1; i < n; i += 2) {
        if (vetor[i] % 2 == 0) {
            somaParesPosImpares += vetor[i];
        }
    }

    cout << "A soma dos elementos pares em posições impares e: " << somaParesPosImpares << endl;
    return 0;
}
