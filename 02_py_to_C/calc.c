#include <stdio.h>
/* print Fahrenheit-Celsius table
 * for f = 0, 20, ...., 300 */

main(){
	int lower, upper, step;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("farh\tCelsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0)*(fahr - 32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	/* cel2far(); */
}

cel2far(){
	int lower, upper, step;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("Celsius\tfarh\n");
	while(celsius <=upper) {
		fahr = (celsius*9.0/5.0)+32.0;
		printf("%6.1f %4.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

for_loop_far2cel(){
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
}

