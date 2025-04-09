#include <stdio.h>

// Função da busca interpolada
int busca_interpolada(int arr[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim && chave >= arr[inicio] && chave <= arr[fim]) {
        // Evita divisão por zero
        if (arr[inicio] == arr[fim]) {
            if (arr[inicio] == chave)
                return inicio;
            else
                return -1;
        }

        // Cálculo da posição estimada (interpolação)
        int pos = inicio + ((chave - arr[inicio]) * (fim - inicio)) / (arr[fim] - arr[inicio]);

        if (arr[pos] == chave)
            return pos;
        else if (arr[pos] < chave)
            inicio = pos + 1;
        else
            fim = pos - 1;
    }

    return -1; // não encontrado
}

int main() {
    // Vetor ordenado com distribuição aproximadamente uniforme
    int dados[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int tamanho = sizeof(dados) / sizeof(dados[0]);
    int chave = 70;

    int resultado = busca_interpolada(dados, tamanho, chave);

    if (resultado != -1)
        printf("Elemento %d encontrado na posição %d.\n", chave, resultado);
    else
        printf("Elemento %d não encontrado.\n", chave);

    return 0;
}
