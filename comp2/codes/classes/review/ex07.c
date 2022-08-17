#include <stdio.h>

int main() {
  
  int i;
  double num, sum, den, div;
    
  sum = 0;

  for(i = 1; i <= 50; i++) {
      
      num = (2*i) - 1;
      den = i;
      
      div = (double)(num/den);
      
      printf("[*] %d -> %f/%d = %f\n", i, num, i, div);
      sum = sum + div;
  }

  printf("\n[*] Soma = %f\n", sum);
  return 0;
}

