#include <stdio.h>
#include <stdbool.h>
int age = 18;
bool vote  = true;
int main(void){
        if (age >= 18 && vote != false){
        printf("You are old enough to vote\n");
}else if (age >= 16){
        printf("You are old enough to drive\n");
}else if (age >= 5) {
        if (age ==15){
        printf("You are old enough to get a learners permit");
        }
}else if (age >= 5){
        if(age == 15)
        printf("You are old enough to go to school \n)");
}else{
       printf("Sorry you are to young to go to school\n");
};
return 0;
}

