#include <stdio.h>

int main(int argc, const char * argv[]) {

  int i, N;
  scanf("%d", &N);

  for (i = 0; i < N; i++) {
   // formula = [(4*i)+1, (4*i)+2, (4*i)+3, "PUM"]
    printf("%d %d %d PUM\n", (4*i)+1, (4*i)+2, (4*i)+3);
  }
  return 0;
}
