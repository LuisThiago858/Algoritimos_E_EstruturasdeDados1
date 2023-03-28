#include <stdio.h>

int main(void) {
  // Declara a variável inteira x e atribui o valor 5 a ela
  int x = 5;

  // Declara o ponteiro ptr e atribui o endereço de memória de x a ele
  int *ptr = &x;

  // Imprime o valor armazenado em x
  printf("x = %d\n", x);

  // Imprime o endereço de memória armazenado em ptr
  printf("ptr = %p\n", ptr);

  // Imprime o valor armazenado no endereço de memória apontado por ptr
  printf("*ptr = %d\n", *ptr);

  // Atribui o valor 10 ao endereço de memória apontado por ptr
  *ptr = 10;

  // Imprime novamente o valor armazenado em x
  printf("x = %d\n", x);

  return 0;
}