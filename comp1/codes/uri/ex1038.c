#include <stdio.h>

int main() {

 int codigo, qtdade;
 float total;
 scanf("%d %d", &codigo, &qtdade);
 switch (codigo) {
   case 1:
     total = 4.00 * qtdade;
     break;
   case 2:
     total = 4.50 * qtdade;
     break;
   case 3:
     total = 5.00 * qtdade;
     break;
   case 4:
     total = 2.00 * qtdade;
     break;
   case 5:
     total = 1.50 * qtdade;
     break;
   default:
     total = 0;
     break;
 }
 printf("Total: R$ %.2f\n", total);
 return 0;
}
