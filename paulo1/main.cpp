#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    int somaImpares = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o " << i+1 << "º elemento do vetor: ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 != 0) {
            somaImpares += vetor[i];
        }
    }

    cout << "A soma dos elementos impares e: " << somaImpares << endl;
    return 0;
}
