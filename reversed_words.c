#include <stdio.h>

int main(int argc, char ** argv) {
	int c = fgetc(stdin);
	if ( c == EOF ) ungetc(c, stdin);
	if ( c != '\n' && c != ' ' && c != EOF ) {
		main(0, argv);
		fputc(c, stdout);
		if ( !argc ) return 0;
		else fputc(' ', stdout);
	}

	if ( argc && c != EOF) main(1, argv);
	if ( argc && c == EOF) fputc('\n', stdout);

	return 0;
}
