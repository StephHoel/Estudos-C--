#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void selectionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[5] = {13, 23, 3, 8, 1};
   int i;

   // Antes da troca
   imprimirVetor(vetor, 5);
   cout << "\n";

   // Selection Sort
   selectionSort(vetor, 5);

   cout << "\n";

   // Depois da troca
   imprimirVetor(vetor, 5);
   // cout << "\n\n";

   cout << endl
        << endl;
   system("pause");
   return 0;
}

void selectionSort(int vet[], int tam)
{
   int indexMin, i, j;

   // Percorrer todos os números
   for (i = 0; i < tam; i++)
   {
      // Define o elemento atual como o menor
      indexMin = i;

      // Encontra o menor valor após "i + 1"
      for (j = i + 1; j < tam; j++)
      {
         if (vet[j] < vet[indexMin]){
            indexMin = j;
         }
      }

      cout << "Troca: " << vet[i] << " <= " << vet[indexMin] << endl;

      if(indexMin != i){
         // Troca os números
         int temp = vet[indexMin];
         vet[indexMin] = vet[i];
         vet[i] = temp;
      }
   }
}

void imprimirVetor(int vet[], int tam){
   int i;

   cout << vet[0];

   //Após a troca
   for (i = 1; i < tam; i++){
      cout << ", " << vet[i];
   }
   cout << endl;
}