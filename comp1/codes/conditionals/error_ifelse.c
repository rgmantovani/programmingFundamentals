#include<stdio.h>

int main() {

  float saldo = 150.0;
  float saque = 50.0;

  if(saldo - saque >= 0){
    saldo = saldo - saque;
    printf(“Saque realizado com sucesso. Saldo atual = %f”, saldo);
  }
  else
    printf(“Impossivel realizar o saque.”);
    printf(“Informe um valor menor ou igual a %f”, saldo);

  return 0;
}
