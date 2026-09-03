#include <stdio.h>

int main(){
  char name[15];

  printf("Enter Your Name: ");

  scanf("%14s", name);

  printf("Hello, %s!\n", name);

  return 0;
}
