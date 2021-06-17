/* ----------------------------------------- */
/* ----------------------------------------- */

#include <stdio.h>
#include <time.h>

/* ----------------------------------------- */
/* ----------------------------------------- */

int factrRecursive(int n); /* recursiva */
int factrIterative(int n); /* iterativa */

/* ----------------------------------------- */
/* ----------------------------------------- */

int main(int argc, const char * argv[]) {
  
  clock_t start, end;
  double cpu_time_used;
  
  int n;
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  
  int res, res2;
  
  /* chamando a versao recursiva */
  start = clock();
  res = factrRecursive(n);
  end = clock();
  printf("\n Res recursive = %d\n", res);
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Tempo usado: %lf\n", cpu_time_used);
 
  
  /* chamando a versao iterativa */
  start = clock();
  res2 = factrIterative(n);
  end = clock();
  printf(" Res iterative = %d\n", res2);
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Tempo usado: %lf\n", cpu_time_used);

  return 0;
}

/* ----------------------------------------- */
/* ----------------------------------------- */

int factrRecursive(int n) {
  int answer;
  if(n == 1)
    return 1;
  answer = factrRecursive(n-1) * n;
  return(answer);
}

/* ----------------------------------------- */
/* ----------------------------------------- */

int factrIterative(int n) {
  int i, answer;
  answer = 1;
  for(i = 1; i <= n; i++) {
    answer = answer * i;
  }
  return(answer);
}

/* ----------------------------------------- */
/* ----------------------------------------- */

