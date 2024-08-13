#include <iostream>
using namespace std;

int main() {
    int M, N, K;

    cout << "Digite o número de linhas (M <= 20): ";
    cin >> M;
    cout << "Digite o número de colunas (N <= 25): ";
    cin >> N;

    int matriz[M][N], transposta[N][M], matrizMultiplicada[M][N], matrizSoma[M][N];

    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "Digite o valor de K para multiplicar a matriz: ";
    cin >> K;


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrizMultiplicada[i][j] = matriz[i][j] * K;
        }
    }


    cout << "Digite os elementos da segunda matriz para a soma:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int elemento;
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> elemento;
            matrizSoma[i][j] = matriz[i][j] + elemento;
        }
    }

    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz multiplicada por K:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrizMultiplicada[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz resultante da soma:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
