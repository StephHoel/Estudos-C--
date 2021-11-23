#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

#define TAM 5

using namespace std;

// variavel global
struct queue
{
   float f[TAM];
   int inicio, fim;
};

void enfileira(queue &fill);
void desenfileira(queue &fill);
void elemPrimeiro(queue &fill);
void situacaoFila(queue &fill);
void filaVazia();
void filaCheia();

int main()
{
   setlocale(LC_ALL, "Portuguese");

   char resp[10];
   int op;
   queue fila;

   // Inicializa a fila
   fila.inicio = 0;
   fila.fim = -1;

   do
   {
      system("cls");
      system("color 2f");

      cout << "\nFILA (FIFO - First In First Out)\n\n";
      cout << "\n1- Inserir um valor na fila";
      cout << "\n2- Remover um valor da fila";
      cout << "\n3- Mostrar o elemento do inicio";
      cout << "\n4- Mostrar situacao da fila";
      cout << "\n5- Sair";

      cout << "\n\nOpcao: ";
      cin >> resp;

      op = atoi(resp);

      system("cls");

      switch (op)
      {
      case 1:
         enfileira(fila);
         break;
      case 2:
         desenfileira(fila);
         break;
      case 3:
         elemPrimeiro(fila);
         break;
      case 4:
         situacaoFila(fila);
         break;
      case 5:
         cout << "\nSaindo do programa basico da FILA\n";
         break;

      default:
         cout << "\nOpcao invalida";
      }

      cout << "\n\n";
      system("pause");

   } while (op != 5);
}

void enfileira(queue &fill)
{
   float valor;
   if (fill.fim == TAM - 1) // testando se a fila cheia está cheia
      filaCheia();
   else
   {
      cout << "Digite o valor a ser enfileirado: ";
      cin >> valor;
      fill.fim++;
      fill.f[fill.fim] = valor;
   }
}

void desenfileira(queue &fill)
{
   // testando se a fila está vazia
   if (fill.inicio > fill.fim)
      filaVazia();
   else
   {
      // exibe valor "removido"
      cout << "\nValor Removido: " << fill.f[fill.inicio];

      // atualiza o inicio da fila
      fill.inicio++;
   }
}

void elemPrimeiro(queue &fill)
{
   if (fill.inicio > fill.fim)
      filaVazia();
   else
      cout << "\nElemento do inicio da fila: " << fill.f[fill.inicio];
}

void situacaoFila(queue &fill)
{
   if (fill.inicio > fill.fim)
      filaVazia();
   else
   {
      cout << "\nTotal de elementos da fila: " << fill.fim - fill.inicio + 1;
      cout << "\n\nEspaco disponivel na fila: " << TAM - (fill.fim + 1);
      cout << "\n\nPosicao do primeiro elemento da fila: " << fill.inicio;
      cout << "\n\nPosicao do ultimo elemento da fila: " << fill.fim;

      cout << "\n\nValor\tPosicao no Vetor\n";

      for (int x = fill.inicio; x <= fill.fim; x++)
      {
         cout << "\n"
              << fill.f[x] << "\t" << x;
      }
   }
}

void filaVazia()
{
   cout << "\nAtencao!\nFila Vazia\n";
}

void filaCheia()
{
   cout << "\nAtencao!\nFila Cheia\n";
}