#include <stdio.h>
#include <time.h>
int hour;
int main ()
{
time_t rawtime; 
struct tm * timeinfo;
time (&rawtime);
timeinfo = localtime(&rawtime);
printf("Current local time and date: %s", asctime(timeinfo));
printf("tell me the hour in military time!: \n");
scanf("%d", &hour);
if(hour < 12 ){
        printf("Good Morning");
}else if (hour < 18){
        printf("Good Afternoon ");
}else{
        printf("Good Evening ");
}
return 0;
}