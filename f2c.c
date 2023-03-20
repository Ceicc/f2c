#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		fprintf(stderr, "f2c: usage: f2c [-c|-f] DEGREE [DEGREE...]");
		return EXIT_FAILURE;
	}

	// 0=f2c, 1=c2f
	unsigned short operation = 0;
	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], "-f") == 0) {
			operation = 0;
			continue;
		} else if (strcmp(argv[i], "-c") == 0) {
			operation = 1;
			continue;
		}
	
		float in = atof(argv[i]);
		float out = operation == 0 ? 5.0/9.0 * (in - 32.0) : 9.0/5.0 * in + 32.0;
		printf("%6.1f%s\t%6.1f%s\n", in, operation == 0 ? "°F" : "°C", out, operation == 0 ? "°C" : "°F");
	}

	return EXIT_SUCCESS;
}
