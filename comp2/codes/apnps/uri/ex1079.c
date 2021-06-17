#include <stdio.h>

int main(){

 int N;
 int i;
 float v1, v2, v3;
 float media;

 scanf("%d\n", &N);

 for(i = 0; i < N; i++) {
   scanf("%f %f %f", &v1, &v2, &v3);
   media = (2*v1 + 3*v2 + 5*v3)/10;
   printf("%.1f\n", media);
 }

 return(0);
}
