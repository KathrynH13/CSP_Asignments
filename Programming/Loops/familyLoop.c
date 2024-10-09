#include <stdio.h>
char sibs [8][20] = {"Louiesnea" , "Richard", "Christopher", "Kent", "Kyla", "Micheal", "Caleb","Kathryn" };
int i;
int main(){
   for(i=0;i<8;i++){
       if(strcmp(sibs[i],"Kyla")==0){
           printf("%s Spackman\n", sibs[i]);
       }else{
       printf("%s Harris \n" , sibs[i]);
       }
};


return 0;
}

