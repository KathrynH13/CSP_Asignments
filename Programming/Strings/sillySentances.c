#include <stdio.h>
#include <string.h>
int main(void){
char animal[20];
char place[20];
char verb[20];
char sentance[400] = "The ";
printf("name an animal: ");
scanf("%s",animal);
printf("Name a place: ");
scanf("%s" , place);
printf("Name a past tense verb: ");
scanf("%s" , verb);
strcat(sentance, animal );
strcat(sentance, " went to the ");
strcat(sentance, place );
strcat(sentance," and ");
strcat(sentance, verb );
strcat(sentance, " with his friend the angry turtle.");
printf("%s", sentance);
return 0;
}