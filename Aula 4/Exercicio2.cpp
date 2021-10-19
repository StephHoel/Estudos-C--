#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void insertionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[5] = {13,23,3,8,1};
   int i, t = 5;

   // Antes
   imprimirVetor(vetor, t);

   // Selection Sort
   insertionSort(vetor, t);

   cout << endl;

   // Depois
   imprimirVetor(vetor, t);

   // Após a troca
   // for (i = 0; i < 5; i++){
   //    cout << vetor[i] << "\t";
   // }

   cout << "\n\n";
   system("pause");
   return 0;
}

void insertionSort(int vet[], int tam){
   int valueInsert, posInsert, i;

   // Percorrer todos os números
   for (i = 1; i < tam; i++){
      //Selecione um valor a ser inserido
      valueInsert = vet[i];

      // Selecione a posição onde o número deve ser inserido
      posInsert = i;

      cout << "------------------------\n";
      imprimirVetor(vet, tam);
      cout << "------------------------\n";
      cout << "Valor: " << valueInsert << endl;
      cout << "Posicao Insercao: " << posInsert << endl;

      // Verifique se anterior não é maior que o valor a ser inserido
      while(posInsert > 0 && vet[posInsert - 1] > valueInsert){
         vet[posInsert] = vet[posInsert - 1];
         posInsert--;
         imprimirVetor(vet, tam);
      }

      if(posInsert != i){
         cout << "\tInsere: " << valueInsert << " na posicao: " << posInsert << endl;
         vet[posInsert] = valueInsert;
      }

      imprimirVetor(vet, 5);

      cout << "\n\n";
   }
}

void imprimirVetor(int vet[], int tam){
   int i;

   cout << vet[0];

   //Após a troca
   for (i = 1; i < tam; i++)
   {
      cout << ", " << vet[i];
   }
   cout << endl;
}