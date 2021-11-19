#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void insere(int matric[], int m, int &t, int tamanho);
void exibe(int matric[], int t);
int buscaSequencial(int matric[], int m, int t);
void remove(int matric[], int m, int &t);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int tam, matricula[5], mat, posicao, op;

   // Inicialização
   tam = 0;
   do
   {
      system("cls");
      cout << "\nMenu - LISTA \n";
      cout << "\n0- Reiniciar a LISTA";
      cout << "\n1- Inserir matricula na LISTA";
      cout << "\n2- Exibir LISTA";
      cout << "\n3- Procurar matricula na LISTA";
      cout << "\n4- Remover matricula da LISTA";
      cout << "\n5- Sair";

      cout << "\n\nOpcao: ";
      cin >> op;

      system("cls");

      switch (op)
      {
      case 0: // reinicialização
         tam = 0;
         break;

      case 1:
         cout << "\n Digite a matricula a ser inserida: ";
         cin >> mat;

         insere(matricula, mat, tam, 5);
         break;

      case 2:
         exibe(matricula, tam);
         break;

      case 3:
         cout << "\nQual a matricula a ser procurada? ";
         cin >> mat;

         posicao = buscaSequencial(matricula, mat, tam);
         if (posicao == -1)
            cout << "\nAtencao! Lista vazia";
         else if (posicao == -2)
            cout << "\nAtencao! Matricula nao encontrada\n";
         else
            cout << "\nMatricula encontrada na posicao: " << posicao + 1 << "\n";
         break;

      case 4:
         cout << "\nQual a matricula a ser removida? ";
         cin >> mat;

         remove(matricula, mat, tam);
         break;

      case 5:
         cout << "\nFinalizando o programa da LISTA\n";
         break;

      default:
         cout << "\nOpcao invalida\n";
      }

      cout << "\n\n";
      system("pause");

   } while (op != 5);
}

void insere(int matric[], int m, int &t, int tamanho)
{
   if (tamanho == t)
      cout << "\nAtencao! \nLista cheia.\n";
   else
   {
      matric[t] = m;
      t++;
   }
}

void exibe(int matric[], int t)
{
   int x;

   // Verifica se tem algum elemento na lista
   if (t == 0)
      cout << "\n Atencao! \nLista vazia.\n";
   else
   {
      cout << "\nRelacao das Matriculas\n";
      for (x = 0; x < t; x++)
      {
         cout << "\n"
              << matric[x];
      }
   }
}

int buscaSequencial(int matric[], int m, int t)
{
   int x;
   if (t == 0)
      return -1; // testa lista vazia

   for (x = 0; x < t; x++)
   {
      if (matric[x] == m)
         return x; // retorna o deslocalmento do endereco base
   }

   return -2; // percorre toda a lista e nao achou
}

void remove(int matric[], int m, int &t)
{
   int pos, x;
   pos = buscaSequencial(matric, m, t);

   if (pos == -1) // testando se a lista está vazia
      cout << "\n Atencao! \nLista vazia.\n";
   else if (pos == -2)
      cout << "\nAtencao! Matricula nao encontrada\n";
   else
   {
      // Deslocal todos os elementos da lista, se necessário, deixando vazios ao final
      for (x = pos; x < t ; x++)
      {
         matric[x] = matric[x + 1];
      }
      t--; // atualiza tamanho da lista
      cout << "\nMatricula Removida\n";
   }
}