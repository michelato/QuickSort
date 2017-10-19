#ifndef ORDENACAO_H
#define ORDENACAO_H

#include <iostream>
#include <string>
#include <time.h>

using namespace std;


void CriarVetor(int vetor[], int TAMANHO) {
    srand(static_cast<unsigned int>(time(0)));
    
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 5;
    }
}

void EscreverVetor(int vetor[], int TAMANHO) {
    for (int i = 0; i < TAMANHO; i++) {
        cout << vetor[i];
    }
}


void InsetionSort(int vetor[], int TAMANHO) {
    
    int aux = 0;
    int j;
    
    for (int i = 0; i < TAMANHO; i++) {
        aux = vetor[i];
        j = i - 1;
        
        while ((j >= 0) && (vetor[j] > aux)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    }
    
    
}

void QuickSort(int vetor[], int inicio, int fim) {
    
    int i = inicio;
    int j = fim;
    int pivo = vetor[(i + j) / 2];
    int aux;
    while (i <= j)
    {
        while (vetor[i] < pivo)
        {
            i++;
        }
        while (vetor[j] > pivo)
        {
            j--;
        }
        if (i <= j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    }
    if (j > inicio) {
        QuickSort(vetor, inicio, j);
    }
    if (i < fim) {
        QuickSort(vetor, i, fim);
    }
}

#endif
