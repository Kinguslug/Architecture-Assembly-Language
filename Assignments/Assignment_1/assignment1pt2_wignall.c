#include <stdio.h>

int readFile(){
    int num = 0;
    int number;
    for (int i = 5; i != 0; i--){
        scanf("%i", &number);
        num = number + num;
    }
    return num;
}
int main (){
    int num = readFile();
    printf("%i\n",num);
}
