#include <iostream>
#include <string>
using namespace std;

int main() {
    string cargo;
    float salarioAntigo, salarioNovo, percentualAumento;

    cout << "Digite o cargo: ";
    getline(cin, cargo);
    cout << "Digite o salario atual: ";
    cin >> salarioAntigo;

    if (cargo == "Gerente") {
        percentualAumento = 0.10;
    } else if (cargo == "Engenheiro") {
        percentualAumento = 0.20;
    } else if (cargo == "Tecnico") {
        percentualAumento = 0.30;
    } else {
        percentualAumento = 0.05;
    }

    salarioNovo = salarioAntigo * (1 + percentualAumento);
    float diferenca = salarioNovo - salarioAntigo;

    cout << "Salario antigo: R$" << salarioAntigo << endl;
    cout << "Novo salario: R$" << salarioNovo << endl;
    cout << "Diferença: R$" << diferenca << endl;

    return 0;
}
