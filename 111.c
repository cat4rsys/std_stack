#include <stdio.h>

int main(int argc, char ** argv) {
	int c = fgetc(stdin);
	if ( c != EOF ) {
		main(0, argv);
		fputc(c, stdout);
	}

	if ( argc ) fputc('\n', stdout);
	
	return 0;
}
