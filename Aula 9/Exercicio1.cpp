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

nodo *insereFrente(nodo *plista, int valor);
nodo *remove(nodo *plista);

void exibeTopo(nodo *plista);
void exibeLista(nodo *plista);
void libera(nodo *plista);
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
      system("color fc");

      cout << "= = = Alocacao Dinamica = = =\n";

      cout << "\n1- Inserir na Pilha";
      cout << "\n2- Remover da Pilha";
      cout << "\n3- Exibir elemento do topo";
      cout << "\n4- Liberar Pilha";
      cout << "\n5- Listar Pilha";
      cout << "\n6- Sair";

      cout << "\n\nOpcao: ";
      cin >> op;

      system("cls");
      system("color 4f");

      switch (op)
      {
      case 1:
         cout << "\nDigite o numero: ";
         cin >> valor;

         lista = insereFrente(lista, valor);
         break;
      case 2:
         if (!lista)
            pilhaVazia();
         else
         {
            lista = remove(lista);
            cout << "\n\nPrimeiro elemento da Pilha removido\n";
         }
         break;
      case 3:
         exibeTopo(lista);
         break;
      case 4:
         if (lista)
            cout << "\nTem elementos na Pilha\n";
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
         cout << "Fechando PILHA Dinamica\n";
         break;

      default:
         cout << "\nOpcao Invalida\n";
      }

      cout << "\n\n";
      system("pause");
   } while (op != 6);

   return 0;
}

nodo *insereFrente(nodo *plista, int valor)
{
   nodo *temp = new nodo;
   if (!temp)
      naoAlocacao();
   temp->info = valor;
   temp->prox = plista;
   return temp;
}

nodo *remove(nodo *plista)
{
   nodo *aux;
   aux = plista;
   plista = plista->prox;
   delete aux;
   return plista;
}

void exibeTopo(nodo *plista)
{
   if (!plista)
      pilhaVazia();
   else
      cout << "\nValor do elemento do topo: " << plista->info;
}

void exibeLista(nodo *plista)
{
   cout << "\nListando\n";
   while (plista)
   {
      cout << "\n"
           << plista->info;
      plista = plista->prox;
   }
}

void libera(nodo *plista)
{
   delete plista;
   plista = 0;
}

void pilhaVazia()
{
   cout << "\nAtencao!\nPilha Vazia\n";
}

void pilhaCheia()
{
   cout << "\nAtencao!\nPilha Cheia\n";
}

void naoAlocacao()
{
   cout << "\nNao foi possivel fazer a alocacao de memoria\n";
   system("pause");
   exit(1);
}