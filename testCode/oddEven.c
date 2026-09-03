#include <stdio.h>

int getNumber(){
  int number;

  printf("Please enter your number: ");

  scanf("%d", &number);

  return number;
}

int isEven(int number){
  return number % 2 == 0;
}

void printResult(int number, int even){
  if (even == 0){
    printf("%i, is odd\n", number);
  }else {
    printf("%i, is even\n", number);
  }
}

int main(){
  int number = getNumber();
  int even = isEven(number);
  printResult(number, even);

  return 0;
}
