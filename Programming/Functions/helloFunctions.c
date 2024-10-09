#include <stdio.h>

void name(char name[]){
    printf("hello %s\n", name);
}

int main(void){
    name("Kathryn!");
    name("Richard!");
    name("Kyla!");
    name("Caleb!");
    name("Kent!");
return 0;
}