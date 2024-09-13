#include <stdio.h>

int main(void){
float income, rent, utilities, grocieries, transportation, savings, spend;
printf("This is a budget calculator. \n How much do you make a month? \n");
scanf( "%f" , &income);
printf("How much do your utilities cost? \n");
scanf( "%f" , &utilities);
printf("You make %.2f\n" , income);
return 0;
}