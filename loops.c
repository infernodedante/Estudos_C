// Biblioteca responsavel por lidar com entrada/saida de dados
#include <stdio.h>

// Função main 
int main ()
{
  // Inicializa uma variavel do tipo int 
  int executar = 0; 
  // O "while"" verifica se a condição é verdadeira antes de executar o loop
  while (executar == 1) {
    printf("Executando o loop 'while'\n");
  }
  // O "do while" executa o loop uma vez antes de verificar se a condição é verdadeira
  do {
    printf("Executando o loop 'do while'\n");
  } while (executar == 2);
  // O "for" executa o loop quantas vezes for especificado
  for (int i = 20; i >= 0; i--) {
    printf("Executando o loop 'for': %d\n", i);
  }
  // Indica que o programa foi executado com sucesso
  return 0;
}
