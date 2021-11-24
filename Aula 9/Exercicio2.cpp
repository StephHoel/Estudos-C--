#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

struct nodo
{
   int info;
   struct nodo *prox;
};

nodo *insereFim(nodo *plista, int valor);
nodo *remove(nodo *plista);

void exibePrimeiro(nodo *plista);
void libera(nodo *plista);
void exibeLista(nodo *plista);
void pilhaVazia();
void pilhaCheia();
void naoAlocacao();

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int c, op, valor;
   nodo *lista = NULL;

   do
   {
      system("cls");
      system("color f2");

      cout << "- - - Alocacao Dinamica - - -\n\n";

      cout << "\n1- Inserir na Fila";
      cout << "\n2- Remover da Fila";
      cout << "\n3- Exibir o primeiro da Fila";
      cout << "\n4- Liberar a Fila";
      cout << "\n5- Exibir a Fila";
      cout << "\n6- Sair";

      cout << "\n\nOpcao: ";
      cin >> op;

      system("cls");
      system("color 2F");

      switch (op)
      {
      case 1:
         cout << "\nDigite um numero: ";
         cin >> valor;
         lista = insereFim(lista, valor);
         break;
      case 2:
         if (!lista)
            pilhaVazia();
         else
         {
            lista = remove(lista);
            cout << "\n\nPrimeiro elemento da Fila removido\n";
         }
         break;
      case 3:
         if (!lista)
            pilhaVazia();
         else
            exibePrimeiro(lista);
         break;
      case 4:
         if (lista)
            cout << "\nTem elementos na Fila\n";
         else
         {
            libera(lista);
            cout << "\nLiberando Memoria";
         }
         break;
      case 5:
         if (!lista)
            pilhaVazia();
         else
            exibeLista(lista);
         break;
      case 6:
         cout << "Fechando FILA Dinamica\n";
         break;

      default:
         cout << "\nOpcao invalida\n";
      }

      cout << "\n\n";
      system("pause");
   } while (op != 6);

   return 0;
}

nodo *insereFim(nodo *plista, int valor)
{
   nodo *novo, *aux;
   novo = new nodo;

   if (!novo)
      naoAlocacao();

   novo->info = valor;
   novo->prox = NULL;

   if (plista == NULL)
      plista = novo;
   else
   {
      aux = plista;
      while (aux->prox)
         aux = aux->prox;
      aux->prox = novo;
   }
   return plista;
}

nodo *remove(nodo *plista)
{
   nodo *aux;
   aux = plista;
   plista = plista->prox;
   delete aux;
   return plista;
}

void exibePrimeiro(nodo *plista)
{
   if (!plista)
      pilhaVazia();
   else
      cout << "\nValor do primeiro elemento da Fila: " << plista->info;
}

void libera(nodo *plista)
{
   delete plista;
   plista = 0;
}

void exibeLista(nodo *plista)
{
   cout << "\nExibindo\n";
   while (plista)
   {
      cout << plista->info << "\t";
      plista = plista->prox;
   }
}

void pilhaVazia()
{
   cout << "\nAtencao!\nFila Vazia\n";
}

void pilhaCheia()
{
   cout << "\nAtencao!\nFila Cheia\n";
}

void naoAlocacao()
{
   cout << "\nNao foi possivel fazer a alocacao de memoria\n";
   system("pause");
   exit(1);
}