// Biblioteca responsavel por lidar com entrada/saida de dados
#include <stdio.h>

// Função main
int main ()
{
  // Cria um array que suporta até 5 itens
  int numeros[5] = {1,2,3,4,5};
  // Cria um pequeno loop for para printar os elementos dos arrays
  for (int i = 0; i <= 4; i++) {
    // Mostra o valor de cada elemento no console
    printf("%d\n", numeros[i]);
  }
  // Indica que o programa foi executado com sucesso
  return 0;
}
