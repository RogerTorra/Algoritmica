
#include <stdlib.h>

int sumar( int *a, int len ) {
}

int main(int argc, char *argv[]) {
   int a = new int[argc];
   for( int i = 1; i < argc; i++ ) a[i-1] = atoi( argv[i] );

   sumar( a, 5 );
   return 0;
}
