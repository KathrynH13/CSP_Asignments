#include <stdio.h>

int main(void){
    char book[30];
    printf("Tell me your favorite book: \n");
    fgets(book, sizeof(book), stdin);
    printf("I love %s" , book);
     
    return 0;
}