#include <iostream>
using namespace std;

int main() {
    int quantidade[5];
    float valorUnitario[5];
    float valoresTotais[5];
    float valorTotalCompra = 0.0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite a quantidade comprada do produto " << i+1 << ": ";
        cin >> quantidade[i];
        cout << "Digite o valor unitario do produto " << i+1 << ": ";
        cin >> valorUnitario[i];
    }

    for (int i = 0; i < 5; i++) {
        valoresTotais[i] = quantidade[i] * valorUnitario[i];
        valorTotalCompra += valoresTotais[i];
    }

    cout << "Valores totais por produto:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Produto " << i+1 << ": R$" << valoresTotais[i] << endl;
    }

    cout << "Valor total da compra: R$" << valorTotalCompra << endl;
    return 0;
}
