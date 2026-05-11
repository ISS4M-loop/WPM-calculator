#include <stdio.h>
#include <time.h>

int main(){
char test[] = "the quick brown fox jumps over the lazy dog"
char imput[100];

printf("Write This : \n %s\n", test);

fgets(imput, sizeof(imput), stdin);

printf("You Typed : \n %s \n", imput);

}
