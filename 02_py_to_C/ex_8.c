#include <stdio.h>
/* Write a program to replace each tab by the three-character sequence >, backspace, -, which prints as >, and each backspace by the similar sequence <. This makes tabs and backspaces visible. */
void sol(){
	int c;
	while((c=getchar()) != EOF){
		if (c=='\t')
			printf(">\b-");
		else if (c=='\b')
			printf("<\b-");
		else
			putchar(c);
	}
}
main(){
	sol();
}

