#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int naive_string_match(char *t, char *p)
{

	int n = strlen(t);
	int m = strlen(p);
	int s = 0, i = 0;

	for(s = 0; s <= n - m ; s++) {
		for(i = 0; i < m; i++) {
			if(p[i] != t[s + i]) {
				break;
			}
		}
		if(i == m) {
			printf("Pattern occurs with shift: %d\n", s);
		}
	}
}

#ifdef TEST

int
main(int argc,  char **argv)
{

	if(argc  != 3)  {
		printf("Usage: %s <text> <pattern>\n", argv[0]);
		exit(9);
	}

	naive_string_match(argv[1], argv[2]);
	exit(0);
}

#endif
