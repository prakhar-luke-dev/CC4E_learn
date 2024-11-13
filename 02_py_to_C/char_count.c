#include <stdio.h>

count_chars(){ /* count characters in input */
	long nc;
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

count_chars_forloop(){ /* count chars using for loop */
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
main(){
	count_chars_forloop();
}

