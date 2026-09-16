#include <stdio.h>

int main(){
  int i = 0;

  start_loop:

  i++;

  if (i<=10) {
    printf("%d ", i);

    if (i%2 == 0){
      printf("even\n");
    }
    if (i%2 == 1){
      printf("odd\n");
    }
    goto start_loop;
  }

  return 0;
}
