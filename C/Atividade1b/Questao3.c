#include <stdio.h>

int main() {
  // Read the input integer N
  int N;
  printf("Enter an integer N: ");
  scanf("%d", &N);

  // Find the next prime number greater than N
  int next_prime = N + 1;
  while (1) {
    int is_prime = 1;
    for (int i = 2; i < next_prime; i++) {
      if (next_prime % i == 0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime) {
      break;
    }
    next_prime++;
  }

  // Print the result
  printf("The next prime number greater than %d is %d.\n", N, next_prime);

  return 0;
}