#include <iostream>
#include <string>
#include <time.h>
#include "Ordenacao.h"

using namespace std;

int main()
{
    int TAMANHO = 100000;
    int menu;
    int vetor[100000];
    //int n = sizeof(vetor) / sizeof(vetor[0]);
    
    CriarVetor(vetor, TAMANHO);
    EscreverVetor(vetor, TAMANHO);
    cout << endl;
    
    cout << "Digite (1) para QuickSort" << endl;
    cout << "Digite (2) para InsertionSort" << endl;
    cin >> menu;
    switch (menu)
    {
        case 1:
            QuickSort(vetor, 0, TAMANHO);
            break;
        case 2:
            InsetionSort(vetor, TAMANHO);
            break;
    }
    
    EscreverVetor(vetor, TAMANHO);
    return 0;
}
