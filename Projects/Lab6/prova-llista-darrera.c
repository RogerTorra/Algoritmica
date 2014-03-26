
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int dada;
  struct Node* seguent;
};

struct Node* inicialitzar() {
  struct Node* nou = malloc( sizeof( struct Node ) );
  
  nou->seguent = NULL;
  
  return nou;
}

void afegir( struct Node* node, int i ) {
  struct Node* nou = malloc( sizeof( struct Node ) );
  
  nou->dada = i;
  nou->seguent = NULL;
  
  while( node->seguent != NULL ) node = node->seguent;
  node->seguent = nou;
}

void imprimir( struct Node* node ) {
  struct Node* actual = node;
  
  while( actual->seguent != NULL ) {
    printf("%d\n", actual->seguent->dada );
    actual = actual->seguent;
  }
}

int main() {
  struct Node* llista = inicialitzar();
  
  afegir( llista, 3 );
  afegir( llista, 5 );
  afegir( llista, 7 );
  
  imprimir( llista );
  
  return 0;
}
