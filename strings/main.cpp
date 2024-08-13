
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, menorNome;
    bool primeiro = true;

    while (true) {
        cout << "Digite um nome (ou pressione Enter para terminar): ";
        getline(cin, nome);

        if (nome.empty()) {
            break;
        }

        if (primeiro || nome < menorNome) {
            menorNome = nome;
            primeiro = false;
        }
    }

    if (!menorNome.empty()) {
        cout << "O nome lexicograficamente menor e: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi digitado." << endl;
    }

    return 0;
}
