// Biblioteca responsavel por lidar com entrada/saida de dados
#include <stdio.h>
// Função main
int main() {
  // Cria uma varivel do tipo char com capacidade de armazenar até 100 caracteres
  char nome[100];
  // Imprime no console o texto "Qual o seu nome?"
  printf("Qual o seu nome?: ");
  // Recebe o nome especificado e armazena ele na variavel nome
  scanf("%s", &nome);
  // Mostra o nome informado no console 
  printf("Seu nome é: %s\n", nome);
  // Indica que o programa foi executado com sucesso
  return 0;
}
