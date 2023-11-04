// Biblioteca responsavel por lidar com entrada/saida de dados
#include <stdio.h>

// Função main
int main ()
{
  // Inicializa uma variavel do tipo int 
  int numero = 10;
  // Se a variavel numero for igual a 10 mostrar no console "Variavel numero é igual a 10"
  if (numero == 10) {
    printf("Variavel numero e igual a 10\n");
  } else {
    // Se não, mostrar no console "Variavel numero não é igual a 10"
    printf("Variavel numero nao e igual a 10");
  }
  // Indica que o programa foi executado com sucesso
  return 0;
}
