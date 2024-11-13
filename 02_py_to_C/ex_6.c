#include <stdio.h>

void count_blanks(){ /* count number of blanks */
	long nb;
	int c;
	nb = 0;
	while ((c=getchar()) != EOF) {
			if (c == ' ')
				++nb;
	}
	printf("%d\n", nb);
}
void count_tabs(){ /* count number of tabs */
	long nt;
	int c;
	nt = 0;
	while ((c=getchar()) != EOF) {
		if (c== '\t')
			++nt;
	}
	printf("%d\n", nt);
}
void count_newlines(){ /* count number of new lines */
	long nl;
	int c;
	nl = 0;
	while ((c=getchar()) != EOF){
		if (c=='\n')
			++nl;
	}
	printf("%d\n", nl);
}

main(){
	/* count_blanks(); */
	/* count_tabs(); */
	count_newlines();
}


				
