
extern int b;
int funcio2( int );

int funcio( int a ) {
   funcio2( a );
   return a+b;
}
