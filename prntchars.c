#include <stdio.h> 
    /* Intergrated with bots */
int prntMtimes(int n){
    for(int k=n; k>=0; k--){
        printf ("%c", k ); 
    }
    return 0;
}
int main()  
{  
    // use for loop to print the number of rows in a pyramid
    for (int i = 0; i <= 5; i++)  
    {  
        // prints each column times 
        int prnt = prntMtimes(i);
        printf(" \n");
    }  

    return 0;  
}  