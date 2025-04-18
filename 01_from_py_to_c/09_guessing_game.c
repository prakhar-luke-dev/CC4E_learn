#include <stdio.h>
/* basic guessing gaem */
int main(){
  int guess;
  while(scanf("%d", &guess) != EOF){
    if(guess == 42){
      printf("Nice work !\n");
      break;
    }
    else if (guess < 42)
        printf("Too low - guess again\n");
    else
        printf("too high - guess again\n");
  }
}
