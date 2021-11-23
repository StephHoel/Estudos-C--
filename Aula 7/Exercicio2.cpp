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

   enfileirar(10);
   enfileirar(20);
   enfileirar(30);
   enfileirar(40);
   enfileirar(50);

   mostraFila(i);

   desenfileirar();

   cout << "\n\n";

   mostraFila(i);

   enfileirar(60);

   cout << "\n\n";

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
      cout << "\nFila cheia\n";
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