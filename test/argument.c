#include <stdio.h>

int main( int argc, char *argv[] )  {

	printf("\n The argc %d", argc);
	printf("\n The argv %s", argv[0]);
	printf("\n The argv %s", argv[1]);
	printf("\n The argv %s\n", argv[2]);
	if ( argc < 2 ) /* argc should be 2 for correct execution */
	   {
	       /* We print argv[0] assuming it is the program name */
	       printf( "usage: %s filename", argv[0] );
	   }
	   else 
	   {
	       // We assume argv[1] is a filename to open
	   		//printf("\n %s\n", argv[2]);
	       FILE *file = fopen( argv[2], "r" );

	       /* fopen returns 0, the NULL pointer, on failure */
	       if ( file == 0 )
	       {
	           printf( "Could not open file\n" );
	       }
	       else 
	       {
	           int x;
	           /* read one character at a time from file, stopping at EOF, which
	              indicates the end of the file.  Note that the idiom of "assign
	              to a variable, check the value" used below works because
	              the assignment statement evaluates to the value assigned. */
	           while  ( ( x = fgetc( file ) ) != EOF ) {
	               printf( "%c", x );
	           }
	           fclose( file );
	       }
	   }
}