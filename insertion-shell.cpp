#include <iostream>

using namespace std;

void imprimeVetor(int vetor[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}


void insertionSort(int vetor[], int tam)
{
    int i, j, aux;

    // Começando do sgundo item, pois o primeiro está implicitamente ordenado
    for(i = 1; i < tam; i++)
    {
        aux = vetor[i];

        // Caminha para trás e desloca os itens em uma casa até encontrar o lugar
        // para a nova inserção
        for(j = i - 1; (vetor[j] > aux) && (j >= 0); j--)
        {
            vetor[j+1] = vetor[j];
        }

        vetor[j+1] = aux;
    }
}

void shellSort(int vetor[], int tam)
{
    int i, j, aux, h;

    h = tam/2;
    // Repete até que h seja igual a 1
    while(h >= 1)
    {
        for(i = 1; i < tam; i++)
        {
            aux = vetor[i];
            for(j = i - h; (vetor[j] > aux) && (j >= 0); j = j-h)
            {
                vetor[j+h] = vetor[j];
            }
            vetor[j+h] = aux;
        }

        // Diminui incremento
        h = h/2;
    }
}


int main()
{
    int vet[12] = {7, 2, 8, 5, 4, 6, 3, 1, 10, 12, 9, 11};
    int vet2[12] = {7, 2, 8, 5, 4, 6, 3, 1, 10, 12, 9, 11};

    cout << "Vetor Desordenado" << endl;
    imprimeVetor(vet, 12);
    insertionSort(vet, 12);
    cout << "\nOrdenado com Insertion Sort: " << endl;
    imprimeVetor(vet, 12);
    shellSort(vet2, 12);
    cout << "\nOrdenado com Shell Sort: " << endl;
    imprimeVetor(vet2, 12);
    return 0;
}
