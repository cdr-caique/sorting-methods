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


void bubbleSort(int vetor[], int tam)
{
    int aux;

    for(int i = 0; i < tam; i++)
        // tam - 1 - i pois a cada varredura do laço externo, o
        // maior elemento já se posiciona na última posição.
        for(int j = 0; j < tam - 1 - i; j++)
        {
            if (vetor[j+1] < vetor[j])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
}

void selectionSort(int vetor[], int tam)
{
    int min, aux;
    for(int i = 0; i < (tam-1); i++)
    {
		// quando i > 0,  i - 1 já contém o menor elemento do vetor
        min = i;
        for(int j = (i+1); j < tam; j++)
        {
            if(vetor[j] < vetor[min])
                min = j;
        }
        aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
    }
}


int main()
{
    int vet[5] = {7, 2, 8, 5, 4};
    int vet2[5] = {7, 2, 8, 5, 4};

    cout << "Vetor Desordenado" << endl;
    imprimeVetor(vet, 5);
    bubbleSort(vet, 5);
    cout << "\nOrdenado com Bubble Sort: " << endl;
    imprimeVetor(vet, 5);
    selectionSort(vet2, 5);
    cout << "\nOrdenado com Selection Sort: " << endl;
    imprimeVetor(vet2, 5);
    return 0;
}
