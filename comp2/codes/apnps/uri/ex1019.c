#include <stdio.h>

int main() {

 int N, hs, min, seg;

 // entrada dos valores em seg
 scanf("%d", &N);

 hs  = N/3600;
 min = (N % 3600)/60;
 seg = N%60;

 printf("%d:%d:%d\n", hs, min, seg);

 return 0;
}
