#include <stdio.h>
/* °F = (9/5 × °C) + 32. */
/* °C = 5/9(°F − 32). */
    /* Intergrated with bots */
float conv2C(int farh){
        float f2c = 9/5*(farh) + 32;
        return f2c;
    }

int main(){

    int celc[10];
    for(int i=20;i<=40;i+=5){
        celc[i]   = conv2C(i); 
        printf("at %d %c we have %6d %c \n",i,"fahrenheight",celc[i],"°C");              
    } 
    return 0;
}


