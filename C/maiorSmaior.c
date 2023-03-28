#include <stdio.h>

int main(void) {
  // Declara as variáveis para armazenar o maior e o segundo maior número
  int maior, segundo_maior;
  // Declara a variável para armazenar o número atual da sequência
  int numero_atual;
  // Declara a variável auxiliar para armazenar um número temporariamente
  int aux;

  // Lê o primeiro número da sequência
  printf("Insira o primeiro número da sequência: ");
  scanf("%d", &numero_atual);

  // Inicializa o maior número com o primeiro número da sequência
  maior = numero_atual;

  // Lê o segundo número da sequência
  printf("Insira o segundo número da sequência: ");
  scanf("%d", &numero_atual);

  // Verifica se o segundo número é maior que o primeiro
  if (numero_atual > maior) {
    // Se o segundo número for maior, armazena o primeiro número na variável auxiliar
    aux = maior;
    // Atualiza o maior número com o segundo número
    maior = numero_atual;
    // Atualiza o segundo maior número com o primeiro número armazenado na variável auxiliar
    segundo_maior = aux;
  } else {
    // Se o segundo número não for maior, o primeiro número é o segundo maior
    segundo_maior = numero_atual;
  }

  // Lê os demais números da sequência
  printf("Insira o próximo número da sequência (0 para terminar): ");
  scanf("%d", &numero_atual);
  while (numero_atual != 0) {
    // Verifica se o número atual é maior que o maior número
    if (numero_atual > maior) {
      // Se for, atualiza o segundo maior número com o maior número e o maior número com o número atual
      aux = maior;
      maior = numero_atual;
      segundo_maior = aux;
    } else if (numero_atual > segundo_maior) {
      // Se não for maior que o maior número, verifica se é