#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

#define MAX 5

using namespace std;

int comeco = 0;
int tamanho = 0;
int queue[MAX];

void enfileirar(int);
void desenfileirar(void);
void mostraFila(int &i);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int i;

   //ENFILEIRAR(4), ENFILEIRAR(5), ENFILEIRAR(6), DESENFILEIRAR(), DESENFILEIRAR(), ENFILEIRAR(5), ENFILEIRAR(7), DESENFILEIRAR()
   // Resposta: 5 7

   enfileirar(4);
   enfileirar(5);
   enfileirar(6);
   desenfileirar();
   desenfileirar();
   enfileirar(5);
   enfileirar(7);
   desenfileirar();

   mostraFila(i);

   system("pause");
}

void enfileirar(int elemento)
{
   int pos;

   if (tamanho == MAX)
      cout << "\nFila cheia\n";
   else
   {
      pos = (comeco + tamanho) % MAX;
      queue[pos] = elemento;
      tamanho++;
   }
}

void desenfileirar(void)
{
   if (tamanho == 0)
      cout << "\nFila vazia\n";
   else
   {
      comeco++;
      tamanho--;
   }
}

void mostraFila(int &i)
{
   for (i = 0; i < tamanho; i++)
      cout << queue[i] << endl;
}