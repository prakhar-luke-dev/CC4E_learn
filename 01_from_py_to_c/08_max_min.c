#include <stdio.h>
/* example code for min max
 * press ctrl + d for end of file in terminal.
 */ 
int main(){
  int first = 1;
  int val, maxval, minval;
  while(scanf("%d", &val) != EOF){
    if (first || val > maxval) maxval = val;
    if (first || val < minval) minval = val;
    first = 0;
  }
  printf("Maximum %d\n", maxval);
  printf("Minimum %d\n", minval);
}
