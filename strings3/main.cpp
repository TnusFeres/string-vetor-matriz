#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int modificacoes = 0;

    cout << "Digite uma string: ";
    getline(cin, str);

    for (char &c : str) {
        if (c == 'a') {
            c = 'b';
            modificacoes++;
        }
    }

    cout << "String modificada: " << str << endl;
    cout << "Numero de caracteres modificados: " << modificacoes << endl;

    return 0;
}
