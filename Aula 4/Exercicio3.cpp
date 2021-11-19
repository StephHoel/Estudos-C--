#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void bubbleSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[5] = {13, 23, 3, 8, 1};
   int i;

   //Antes da troca
   imprimirVetor(vetor, 5);
   cout << "\n\n";

   // Selection Sort
   bubbleSort(vetor, 5);

   cout << "\n\n";

   //Depois da troca
   imprimirVetor(vetor, 5);
   // cout << "\n\n";

   cout << endl
        << endl;
   system("pause");
   return 0;
}

void bubbleSort(int vet[], int tam)
{
   int temp;
   int i, j;

   bool continuarTroca = false;

   //Percorrer todos os números
   for (i = 0; i < tam - 1; i++)
   {
      continuarTroca = false;
      for (j = 0; j < tam - 1 - i; j++)
      {
         cout << "-----------\n";
         imprimirVetor(vet, 5);
         cout << "Comparando: " << vet[j] << " com: " << vet[j + 1] << endl;

         //Troca o número mais alto
         if (vet[j] > vet[j + 1])
         {
            temp = vet[j];
            vet[j] = vet[j + 1];
            vet[j + 1] = temp;

            continuarTroca = true;
         }

         /* Para ordenação decrescente
            if(vet[j-1] < vet[j])
            {
               aux=vet[j];
               vet[j]= vet[j-1];
               vet[j-1]=aux;

            }
         */
         imprimirVetor(vet, 5);
         cout << "\n\n";
      }

      //Se tiver tudo ordenado
      if (!continuarTroca)
      {
         break;
      }
   }
}

void imprimirVetor(int vet[], int tam)
{
   int i;

   cout << vet[0];

   //Após a troca
   for (i = 1; i < tam; i++)
   {
      cout << ", " << vet[i];
   }
   cout << endl;
}