#include <stdio.h>

#define YES 1
#define NO 0


void main(){
	int c, isword;
	isword = NO;
	int no_words = 0;
	int lastspace = 0;
	int isspace = YES;
	while((c=getchar()) != EOF){
		if((c>=65 && c<=90) || (c>=97 && c<=122)){
			/* check if is valid alphabet */
			if (lastspace == 0) {
				isword = YES;
			}
		} else if (c==' '|| c=='\n'){
			/* if space is found */
			isspace = YES;
			lastspace = 0;
			if (isword == YES){
				isword = NO;
				++no_words;
			}
		} else
			++lastspace;
	}
	printf("%d\n", no_words);
}
