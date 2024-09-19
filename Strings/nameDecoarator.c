#include <stdio.h>
#include<string.h>

int main(void){
    char fname[30];
char decerator[] = "<<<";
char prefix[]=">>>";
printf("Hello! Welcome to the name decerator! Please enter your name: ");
 fgets(fname, sizeof(fname), stdin);
     printf("<<<%s" , ">>>" fname);
 strcat(prefix,fname);
 printf("%s/n" , prefix);
 strcat(prefix , decerator);
 printf("%s\n" , prefix);
 
 
    return 0;

}
r