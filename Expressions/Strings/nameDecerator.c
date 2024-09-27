#include <stdio.h>
#include<string.h>

int main(void){
 char fname[30] = "kathryn";
 char capSix[40]= "^^^";
 strcat(fname, "^^^");
 strcat(capSix, fname);
 printf("Hello %s \n", capSix);
    return 0;

}
