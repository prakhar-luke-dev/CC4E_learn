#include <stdio.h>

void cpy_in_out(){
	long nb;
	nb = 0;
	int c;
	while ((c=getchar()) != EOF){
		if(c==' '){
			if(nb==0){
				putchar(c);
				nb=1;
			}
		} else {
			putchar(c);
			nb=0;
		}
	}
}
main(){
	cpy_in_out();
}

