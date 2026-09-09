#include <stdio.h>

FILE * openFile(){
    FILE * file;
    file = fopen("nums.txt", "r");
    return file;
}

int readFile(FILE * file){
    int num = 0;
    int number;
    for (int i = 5; i != 0; i--){
        fscanf(file, "%i", &number);
        num = number + num;
    }
    return num;
}

int main (){
  FILE * file = openFile();
  int num = readFile(file);
  printf("%i\n",num);
  fclose(file);
}
