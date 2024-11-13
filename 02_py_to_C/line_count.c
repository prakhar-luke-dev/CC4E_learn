#include <stdio.h>

line_count(){ /* counts the number or line */
	int c, n1;
	n1 = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++n1;
	printf("%d\n", n1);
}

main(){
	line_count();
}

