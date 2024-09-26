#include <stdio.h>
float income, rent, utilities, grocieries, transportation, savings, expenses, spend;

float  input(char type[], float var){
    printf("Monthly %s:\n" , type);
    scanf( "%f" , &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;

    printf("Your %s is %d%% of your income. \n" , type, per);
}


int main(void){
printf("This is a budget calculator.\n");
income = input("income", income);
rent = input("rent", rent);
utilities = input("utilities", utilities);
grocieries = input("grocieries", grocieries);
transportation = input("transportation", transportation);
savings = income * .2;
expenses = rent + utilities +grocieries +transportation;
spend = income - expenses - savings;
printf("You make $%.2f\n" , income);
printf("Your expenses are $%.2f\n" , expenses);
printf("Your savings are $%.2f\n" , savings);
printf("Your spending money is $%.2f\n", spend);

percent("rent", rent); 
percent("utilities", utilities); 
percent("grocieries", grocieries); 
percent("transportaion", transportation); 
percent("expenses", expenses); 
percent("savings", savings); 
percent("spending", spend); 
return 0;
}