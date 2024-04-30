#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define MAX 100

void invertevetor (int *vetor, int tamanho);

main() {
  int x, vet[TAM];
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    vet[x] = rand() % MAX + 1;
  }
  printf("Vetor gerado:\n ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  invertevetor(vet, TAM);
  printf("Vetor invertido:\n ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  getchar();
}

void invertevetor (int *vetor, int tamanho){
  int x, y, vet2[tamanho];
  for(x = 0; x < tamanho; x++){
    vet2[x] = vetor[x];
  }
  y = 9;
  for(x = 0; x < tamanho; x++){
    vetor[x] = vet2[y];
    y--;
  }
}