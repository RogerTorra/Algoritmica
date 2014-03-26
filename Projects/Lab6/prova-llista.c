
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int dada;
  struct Node* seguent;
};

struct Node* afegir( struct Node* node, int i ) {
  struct Node* nou = malloc( sizeof( struct Node ) );
  
  nou->dada = i;
  nou->seguent = node;
  
  return nou;	
}

void imprimir( struct Node* node ) {
  struct Node* actual = node;
  
  while( actual != NULL ) {
    printf("%d\n", actual->dada );
    actual = actual->seguent;
  }
}

int main() {
  struct Node* llista = NULL;
  
  llista = afegir( llista, 3 );
  llista = afegir( llista, 5 );
  llista = afegir( llista, 7 );
  
  imprimir( llista );
  
  return 0;
}
