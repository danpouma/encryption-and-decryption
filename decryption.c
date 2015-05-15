#include <stdio.h>
#include <stdlib.h>

typedef unsigned char Byte;

void printBits( Byte );

int main( int argc, char** argv )
{
	FILE* in_file;
	FILE* out_file;

	in_file = fopen( argv[1], "r" );
	out_file = fopen( argv[2], "w+" );

	Byte letter;
	Byte temp;

	int ok = 1;

	do
	{
		ok = fscanf( in_file, "%c", &letter );
		if ( ok > 0 )
		{
			letter = ~letter;
			temp = ( letter & 1 ) << 7;
			letter = ( letter >> 1 );
			letter = letter | temp;
			fprintf( out_file, "%c", letter );
		}
	} while( ok > 0 );

	fclose( in_file );
	fclose( out_file );
}

void printBits( Byte data )
{
	for ( int i = (8 * sizeof(char))-1; i >= 0; i-- )
	{
		printf( "%d", ( (data >> i) & 1) );
	}
	puts( "" );
}
